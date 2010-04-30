%plot_results_cat

clear all;
close all;
clc;

%%
load 'results_UE.mat';
mm=imread('maps/cordes.png');
plotwrtdistanceCalc;

%%
in = in+1;    
h_fig = figure(in);
title('SISO');
xlabel('Time[Seconds]');
ylabel('Throughput');
hold on;
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_SISO_4Qam_eNB1_cat,'b-o');
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_SISO_16Qam_eNB1_cat,'g-o');
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_SISO_64Qam_eNB1_cat,'r-o');
hold off;
legend('QPSK','16QAM','64QAM')

in = in+1;    
h_fig = figure(in);
[gps_x, gps_y] = plot_gps_coordinates(mm, gps_long_cat, gps_lat_cat, rps_SISO_16Qam_eNB1_cat);
title('SISO Throughput 16QAM');


%%
in = in+1;    
h_fig = figure(in);
title('Alamouti');
xlabel('Time[Seconds]');
ylabel('Throughput');
hold on;
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_Alamouti_4Qam_eNB1_cat,'b-o');
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_Alamouti_16Qam_eNB1_cat,'g-o');
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_Alamouti_64Qam_eNB1_cat,'r-o');
hold off;
legend('QPSK','16QAM','64QAM')

in = in+1;    
h_fig = figure(in);
[gps_x, gps_y] = plot_gps_coordinates(mm, gps_long_cat, gps_lat_cat, rps_Alamouti_16Qam_eNB1_cat);
title('Alamouti Througput 16QAM');

%%
in = in+1;    
h_fig = figure(in);
title('optimal Beamforming');
xlabel('Time[Seconds]');
ylabel('Throughput');
hold on;
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_Beamforming_4Qam_eNB1_maxq_cat,'b-o');
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_Beamforming_16Qam_eNB1_maxq_cat,'g-o');
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_Beamforming_64Qam_eNB1_maxq_cat,'r-o');
hold off;
legend('QPSK','16QAM','64QAM')

in = in+1;    
h_fig = figure(in);
[gps_x, gps_y] = plot_gps_coordinates(mm, gps_long_cat, gps_lat_cat, rps_Beamforming_16Qam_eNB1_maxq_cat);
title('optimal Beamforming');

%%
in = in+1;    
h_fig = figure(in);
title('Beamforming using feedback');
xlabel('Time[Seconds]');
ylabel('Throughput');
hold on;
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_Beamforming_4Qam_eNB1_feedbackq_cat,'b-o');
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_Beamforming_16Qam_eNB1_feedbackq_cat,'g-o');
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_Beamforming_64Qam_eNB1_feedbackq_cat,'r-o');
hold off;
legend('QPSK','16QAM','64QAM')

in = in+1;    
h_fig = figure(in);
[gps_x, gps_y] = plot_gps_coordinates(mm, gps_long_cat, gps_lat_cat, rps_Beamforming_16Qam_eNB1_feedbackq_cat);
title('Beamforming using feedback');



%%
in = in+1;
h_fig = figure(in);
title('Throughput SISO _ distance from BS ');
xlabel('Distance from BS [Km]');
ylabel('Throughput [Bits/sec]');
%dist(1:end);
plot(dist, rps_SISO_4Qam_eNB1_cat,'b-o');
hold on;
plot(dist, rps_SISO_16Qam_eNB1_cat,'g-o');
plot(dist, rps_SISO_64Qam_eNB1_cat,'r-o');
hold off;
legend('QPSK','16QAM','64QAM')
 
in = in+1;
h_fig = figure(in);
plot(dist_travelled, rps_SISO_4Qam_eNB1_cat,'b-o');
hold on
plot(dist_travelled, rps_SISO_16Qam_eNB1_cat,'g-o' );
plot(dist_travelled, rps_SISO_64Qam_eNB1_cat,'r-o');
title('Throughput SISO _ distance Travelled ')
xlabel('Distance travelled [Km]')
ylabel('Throughput [Bits/sec]')
legend('QPSK','16QAM','64QAM')

in = in+1;    
h_fig = figure(in);
title(['Alamouti']);
xlabel('Time[Seconds]');
ylabel('Throughput');
hold on;
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_SISO_4Qam_eNB1_cat,'b-o');
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_SISO_16Qam_eNB1_cat,'g-o');
plot(round(double(timestamp_cat(1:100:end))/1e9),rps_SISO_64Qam_eNB1_cat,'r-o');
hold off;
legend('QPSK','16QAM','64QAM')

in = in+1;
h_fig = figure(in);
title('Throughput SISO _ distance from BS ');
xlabel('Distance from BS [Km]');
ylabel('Throughput [Bits/sec]');
%dist(1:end);
plot(dist, rps_SISO_4Qam_eNB1_cat,'b-o');
hold on;
plot(dist, rps_SISO_16Qam_eNB1_cat,'g-o');
plot(dist, rps_SISO_64Qam_eNB1_cat,'r-o');
hold off;
legend('QPSK','16QAM','64QAM')
 
in = in+1;
h_fig = figure(in);
plot(dist_travelled, rps_SISO_4Qam_eNB1_cat,'b-o');
hold on
plot(dist_travelled, rps_SISO_16Qam_eNB1_cat,'g-o' );
plot(dist_travelled, rps_SISO_64Qam_eNB1_cat,'r-o');
title('Throughput SISO _ distance Travelled ')
xlabel('Distance travelled [Km]')
ylabel('Throughput [Bits/sec]')
legend('QPSK','16QAM','64QAM')
