% file: plot_all.m
% author: florian.kaltenberger@eurecom.fr
% purpose: plots the results from the UE for several directories
% requires pathname to be set to the right directory

% in the following two lines set the root path and select the subfolders
% you want to plot
root_path = 'F:\EMOS\data\';  
d = dir(fullfile(root_path, '*mode2_parcours*'));
dir_names = {d.name};

% set to the output directory
pathname = 'F:\EMOS\data\results_mode2\';

mm=imread('maps/cordes.png');
decimation = 100;

results_UE = [];
results_UE_nomadic = [];

    timestamp_cat = [];
    phy_measurements_cat = struct([]);
    rx_rssi_dBm_cat = [];
    gps_lon_cat = [];
    gps_lat_cat = [];
    gps_time_cat = [];
    frame_tx_cat = [];  
    pbch_fer_cat = [];
    dlsch_fer_cat = [];
    tbs_cat = [];
    mcs_cat = [];
    UE_mode_cat = [];

for i=1:length(dir_names)
    if exist(fullfile(root_path,dir_names{i},'results_UE.mat'),'file')
        temp = load(fullfile(root_path,dir_names{i},'results_UE.mat'));
        results_UE = cat(1,results_UE,temp);
        phy_measurements_cat = [phy_measurements_cat temp.phy_measurements_cat];
        timestamp_cat = [timestamp_cat temp.timestamp_cat];
        frame_tx_cat = [frame_tx_cat temp.frame_tx_cat];
        rx_rssi_dBm_cat = [rx_rssi_dBm_cat; temp.rx_rssi_dBm_cat];
        pbch_fer_cat = [pbch_fer_cat; temp.pbch_fer_cat];
        dlsch_fer_cat = [dlsch_fer_cat; temp.dlsch_fer_cat];
        mcs_cat = [mcs_cat; temp.mcs_cat];
        tbs_cat = [tbs_cat; temp.tbs_cat];
        UE_mode_cat = [UE_mode_cat temp.UE_mode_cat];
        gps_lon_cat = [gps_lon_cat temp.gps_lon_cat];
        gps_lat_cat = [gps_lat_cat temp.gps_lat_cat];
        gps_time_cat = [gps_time_cat temp.gps_time_cat];
        
    end
%    if exist(fullfile(root_path,dir_names{i},'nomadic','results_UE_new.mat'),'file')
%        nomadic = load(fullfile(root_path,dir_names{i},'nomadic','results_UE_new.mat'));
%        results_UE_nomadic = cat(2,results_UE_nomadic,nomadic.minestimates);
%         %phy_measurements_cat = [phy_measurements_cat temp.phy_measurements_cat];
%         timestamp_cat = [timestamp_cat temp.timestamp_cat];
%         frame_tx_cat = [frame_tx_cat temp.frame_tx_cat];
%         rx_rssi_dBm_cat = [rx_rssi_dBm_cat; temp.rx_rssi_dBm_cat];
%         pbch_fer_cat = [pbch_fer_cat; temp.pbch_fer_cat];
%         dlsch_fer_cat = [dlsch_fer_cat; temp.dlsch_fer_cat];
%         mcs_cat = [mcs_cat; temp.mcs_cat];
%         %tbs_cat = [tbs_cat; temp.tbs_cat];
%         UE_mode_cat = [UE_mode_cat temp.UE_mode_cat];
%         gps_lon_cat = [gps_lon_cat temp.gps_lon_cat];
%         gps_lat_cat = [gps_lat_cat temp.gps_lat_cat];
%         %gps_time_cat = [gps_time_cat [gps_data.timestamp]];
        
%    end
end

%%
table = [[results_UE.gps_lon_cat]; [results_UE.gps_lat_cat]; double([results_UE.UE_mode_cat])].';
dlmwrite('UE_mode_all.csv',table,'delimiter',';','precision','%10.8f');
dlmwrite('UE_mode_2and3.csv',table([results_UE.UE_mode_cat]==3 | [results_UE.UE_mode_cat]==2,:),'delimiter',';','precision','%10.8f');

nomadic_flag = false;

plot_results_UE_quick_common

% %%
% addpath('maps')
% mm=imread('maps/cordes.png');
% 
% %%
% h_fig = figure(1);
% hold off
% plot_gps_coordinates(mm,[results_UE.gps_lon_cat], [results_UE.gps_lat_cat], double([results_UE.UE_mode_cat]));
% hold on
% for i=1:length(results_UE_nomadic)
%     plot_gps_coordinates([],[results_UE_nomadic(i).gps_data.longitude], [results_UE_nomadic(i).gps_data.latitude], ...
%         double(results_UE_nomadic(i).UE_mode_cat),sprintf('N%d',i),'black','Marker','.','Markersize',20);
% end
% saveas(h_fig,sprintf('TX_mode%d_UE_mode_cordes.jpg',tx_mode),'jpg');
% 
% %%
% h_fig = figure(2);
% hold off
% rx_rssi_dBm_cat = cat(1,results_UE.rx_rssi_dBm_cat);
% plot_gps_coordinates(mm,[results_UE.gps_lon_cat], [results_UE.gps_lat_cat], double(rx_rssi_dBm_cat(:,1)));
% hold on
% for i=1:length(results_UE_nomadic)
%     plot_gps_coordinates([],[results_UE_nomadic(i).gps_data.longitude], [results_UE_nomadic(i).gps_data.latitude], ...
%         double(results_UE_nomadic(i).rx_rssi_dBm(:,1)),sprintf('N%d',i),'black','Marker','.','Markersize',20);
% end
% saveas(h_fig,sprintf('TX_mode%d_RX_RSSI_cordes.jpg',tx_mode),'jpg');
% 
% %%
% fid = fopen('nomadic_results.csv','w');
% for i=1:length(results_UE_nomadic)
%     %%
%     rx_rssi_dBm_mean(i) = mean(results_UE_nomadic(i).rx_rssi_dBm(:,1));
% 
%     UE_synched = (results_UE_nomadic(i).UE_mode_cat>0);
%     UE_connected = (results_UE_nomadic(i).UE_mode_cat==3);
%     good = (results_UE_nomadic(i).dlsch_fer<=100 & results_UE_nomadic(i).dlsch_fer>=0).';
%     throughput_mean(i) = mean((100-results_UE_nomadic(i).dlsch_fer(UE_connected & good)).*...
%         results_UE_nomadic(i).tbs_cat(UE_connected & good)*7*4/3);
%     %%
%     fprintf(fid,'%d; %s; %f; %f; %f; %f\n',i, results_UE_nomadic(i).filename, rx_rssi_dBm_mean(i), throughput_mean(i), ...
%         mean([results_UE_nomadic(i).gps_data.latitude]),mean([results_UE_nomadic(i).gps_data.longitude]));
% endmm=imread('maps/cordes.png');
decimation = 100;

% fclose(fid);
% 
% 
% %%
% figure(3)
% hold off
% plot([results_UE.gps_time_cat],[results_UE.UE_mode_cat],'x')
% if ~isempty(results_UE_nomadic)
%     hold on
%     gps_data_cat = [results_UE_nomadic.gps_data];
%     plot([gps_data_cat.timestamp],[results_UE_nomadic.UE_mode_cat],'rx');
% end
% 
% %%
% figure(4)
% hold off
% plot([results_UE.gps_time_cat],rx_rssi_dBm_cat(:,1),'x');
% if ~isempty(results_UE_nomadic)
%     hold on
%     rx_rssi_dBm_cat_nomadic = cat(1,results_UE_nomadic.rx_rssi_dBm);
%     plot([gps_data_cat.timestamp],rx_rssi_dBm_cat_nomadic(:,1),'rx');
% end
% 
% %%
% figure(5)
% hold off
% UE_connected = ([results_UE.UE_mode_cat]==3);
% dlsch_fer_cat = cat(1,results_UE.dlsch_fer_cat).';
% tbs_cat = cat(1,results_UE.tbs_cat).';
% good = (dlsch_fer_cat<=100 & dlsch_fer_cat>=0);
% timebase = [results_UE.gps_time_cat];
% plot(timebase(UE_connected & good),(100-dlsch_fer_cat(UE_connected & good)).*tbs_cat(UE_connected & good)*7*4/3,'x');
% if ~isempty(results_UE_nomadic)
%     hold on
%     UE_connected = ([results_UE_nomadic.UE_mode_cat]==3);
%     dlsch_fer_cat = cat(1,results_UE_nomadic.dlsch_fer).';
%     tbs_cat = cat(1,results_UE_nomadic.tbs_cat).';
%     good = (dlsch_fer_cat<=100 & dlsch_fer_cat>=0);
%     gps_data = [results_UE_nomadic.gps_data];
%     timebase = [gps_data.timestamp];
%     plot(timebase(UE_connected & good),(100-dlsch_fer_cat(UE_connected & good)).*tbs_cat(UE_connected & good)*7*4/3,'rx');
% end
