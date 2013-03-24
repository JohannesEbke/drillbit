//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Mar 19 11:45:16 2013 by ROOT version 5.34/05
// from TTree photon/photon
// found on file: ../NTUP_PHOTON.693445._000001.root.1
//////////////////////////////////////////////////////////

#ifndef PhotonTree_h
#define PhotonTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.
#include <vector>

using namespace std;

// Fixed size dimensions of array or collections stored in the TTree if any.

class PhotonTree : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   Bool_t          EF_2e10_medium;
   Bool_t          EF_2e10_medium_mu6;
   Bool_t          EF_2e11T_medium;
   Bool_t          EF_2e12T_medium;
   Bool_t          EF_2e12_medium;
   Bool_t          EF_2e15_loose;
   Bool_t          EF_2e15_medium;
   Bool_t          EF_2e5_medium;
   Bool_t          EF_2e5_medium_SiTrk;
   Bool_t          EF_2e5_medium_TRT;
   Bool_t          EF_2e5_tight;
   Bool_t          EF_2e5_tight_Jpsi;
   Bool_t          EF_2g10_loose;
   Bool_t          EF_2g15_loose;
   Bool_t          EF_2g20_loose;
   Bool_t          EF_2g50_etcut;
   Bool_t          EF_2j45_a4tc_EFFS_leadingmct100_xe40_medium_noMu;
   Bool_t          EF_2j55_a4tc_EFFS_leadingmct100_xe40_medium_noMu;
   Bool_t          EF_2mu10;
   Bool_t          EF_2mu4;
   Bool_t          EF_2mu4_xe30_noMu;
   Bool_t          EF_2mu4_xe40_noMu;
   Bool_t          EF_MU0_j45_a4tc_EFFS_xe45_loose_noMu;
   Bool_t          EF_e10_NoCut;
   Bool_t          EF_e10_loose;
   Bool_t          EF_e10_loose_mu10;
   Bool_t          EF_e10_loose_mu6;
   Bool_t          EF_e10_medium;
   Bool_t          EF_e10_medium_2mu6;
   Bool_t          EF_e10_medium_mu10;
   Bool_t          EF_e10_medium_mu6;
   Bool_t          EF_e10_medium_mu6_topo_medium;
   Bool_t          EF_e11T_medium;
   Bool_t          EF_e11T_medium_2e6T_medium;
   Bool_t          EF_e11_etcut;
   Bool_t          EF_e12T_medium_mu6_topo_medium;
   Bool_t          EF_e12_medium;
   Bool_t          EF_e13_etcutTRT_xs60_noMu;
   Bool_t          EF_e13_etcut_xs60_noMu;
   Bool_t          EF_e13_etcut_xs70_noMu;
   Bool_t          EF_e15_HLTtighter;
   Bool_t          EF_e15_loose;
   Bool_t          EF_e15_medium;
   Bool_t          EF_e15_medium_e12_medium;
   Bool_t          EF_e15_medium_mu6;
   Bool_t          EF_e15_medium_xe30_noMu;
   Bool_t          EF_e15_medium_xe35_loose_noMu;
   Bool_t          EF_e15_medium_xe35_noMu;
   Bool_t          EF_e15_medium_xe40_loose_noMu;
   Bool_t          EF_e15_medium_xe40_noMu;
   Bool_t          EF_e15_medium_xe50_noMu;
   Bool_t          EF_e15_tight;
   Bool_t          EF_e15_tight1;
   Bool_t          EF_e15_tight_xe30_noMu;
   Bool_t          EF_e18_medium;
   Bool_t          EF_e18_medium_xe30_noMu;
   Bool_t          EF_e18_tight;
   Bool_t          EF_e20_L2Star_IDTrkNoCut;
   Bool_t          EF_e20_etcut_xs60_noMu;
   Bool_t          EF_e20_loose;
   Bool_t          EF_e20_loose1;
   Bool_t          EF_e20_looseTrk;
   Bool_t          EF_e20_loose_2j10_a4tc_EFFS;
   Bool_t          EF_e20_loose_3j10_a4tc_EFFS;
   Bool_t          EF_e20_loose_4j10_a4tc_EFFS;
   Bool_t          EF_e20_loose_IDTrkNoCut;
   Bool_t          EF_e20_loose_TRT;
   Bool_t          EF_e20_loose_xe20;
   Bool_t          EF_e20_loose_xe20_noMu;
   Bool_t          EF_e20_loose_xe30;
   Bool_t          EF_e20_loose_xe30_noMu;
   Bool_t          EF_e20_medium;
   Bool_t          EF_e20_medium1;
   Bool_t          EF_e20_medium2;
   Bool_t          EF_e20_medium_IDTrkNoCut;
   Bool_t          EF_e20_medium_SiTrk;
   Bool_t          EF_e20_medium_TRT;
   Bool_t          EF_e20_tight;
   Bool_t          EF_e20_tight_e15_NoCut_Zee;
   Bool_t          EF_e22_etcut_xs60_noMu;
   Bool_t          EF_e22_loose;
   Bool_t          EF_e22_loose1;
   Bool_t          EF_e22_looseTrk;
   Bool_t          EF_e22_medium;
   Bool_t          EF_e22_medium1;
   Bool_t          EF_e22_medium2;
   Bool_t          EF_e22_medium_IDTrkNoCut;
   Bool_t          EF_e22_medium_SiTrk;
   Bool_t          EF_e22_medium_TRT;
   Bool_t          EF_e22_tight;
   Bool_t          EF_e25_loose;
   Bool_t          EF_e25_medium;
   Bool_t          EF_e30_loose;
   Bool_t          EF_e30_medium;
   Bool_t          EF_e33_medium;
   Bool_t          EF_e35_medium;
   Bool_t          EF_e40_medium;
   Bool_t          EF_e45_medium;
   Bool_t          EF_e45_medium1;
   Bool_t          EF_e5_NoCut_L2SW;
   Bool_t          EF_e5_NoCut_Ringer;
   Bool_t          EF_e5_NoCut_firstempty;
   Bool_t          EF_e5_medium_mu4;
   Bool_t          EF_e5_medium_mu6;
   Bool_t          EF_e5_medium_mu6_topo_loose;
   Bool_t          EF_e5_medium_mu6_topo_medium;
   Bool_t          EF_e5_tight;
   Bool_t          EF_e5_tight_TRT;
   Bool_t          EF_e5_tight_e14_etcut_Jpsi;
   Bool_t          EF_e5_tight_e4_etcut_Jpsi;
   Bool_t          EF_e5_tight_e4_etcut_Jpsi_SiTrk;
   Bool_t          EF_e5_tight_e4_etcut_Jpsi_TRT;
   Bool_t          EF_e5_tight_e5_NoCut;
   Bool_t          EF_e5_tight_e5_NoCut_Jpsi;
   Bool_t          EF_e5_tight_e7_etcut_Jpsi;
   Bool_t          EF_e5_tight_e9_etcut_Jpsi;
   Bool_t          EF_e60_loose;
   Bool_t          EF_e6T_medium;
   Bool_t          EF_e7_tight_e14_etcut_Jpsi;
   Bool_t          EF_e9_tight_e5_tight_Jpsi;
   Bool_t          EF_eb_physics;
   Bool_t          EF_eb_physics_empty;
   Bool_t          EF_eb_physics_firstempty;
   Bool_t          EF_eb_physics_noL1PS;
   Bool_t          EF_eb_physics_unpaired_iso;
   Bool_t          EF_eb_physics_unpaired_noniso;
   Bool_t          EF_eb_random;
   Bool_t          EF_eb_random_empty;
   Bool_t          EF_eb_random_firstempty;
   Bool_t          EF_eb_random_unpaired_iso;
   Bool_t          EF_em105_passHLT;
   Bool_t          EF_g100_etcut_g50_etcut;
   Bool_t          EF_g100_loose;
   Bool_t          EF_g10_NoCut_cosmic;
   Bool_t          EF_g11_etcut;
   Bool_t          EF_g11_etcut_larcalib;
   Bool_t          EF_g13_etcut_xs60_noMu;
   Bool_t          EF_g150_etcut;
   Bool_t          EF_g15_loose;
   Bool_t          EF_g15_loose_larcalib;
   Bool_t          EF_g17_etcut;
   Bool_t          EF_g17_etcut_EFxe20_noMu;
   Bool_t          EF_g17_etcut_EFxe30_noMu;
   Bool_t          EF_g20_etcut;
   Bool_t          EF_g20_etcut_xe30_noMu;
   Bool_t          EF_g20_loose;
   Bool_t          EF_g20_loose_cnv;
   Bool_t          EF_g20_loose_larcalib;
   Bool_t          EF_g20_loose_xe20_noMu;
   Bool_t          EF_g20_loose_xe30_noMu;
   Bool_t          EF_g20_tight;
   Bool_t          EF_g22_hiptrt;
   Bool_t          EF_g25_loose_xe30_noMu;
   Bool_t          EF_g27_etcut;
   Bool_t          EF_g27_etcut_EFxe30_noMu;
   Bool_t          EF_g30_loose_g20_loose;
   Bool_t          EF_g40_loose;
   Bool_t          EF_g40_loose_EFxe35_noMu;
   Bool_t          EF_g40_loose_EFxe40_noMu;
   Bool_t          EF_g40_loose_b10_medium;
   Bool_t          EF_g40_loose_larcalib;
   Bool_t          EF_g40_loose_xe40_noMu;
   Bool_t          EF_g40_loose_xe45_medium_noMu;
   Bool_t          EF_g40_loose_xe55_medium_noMu;
   Bool_t          EF_g40_loose_xs35_noMu;
   Bool_t          EF_g40_tight;
   Bool_t          EF_g40_tight_b10_medium;
   Bool_t          EF_g40_tight_b15_medium;
   Bool_t          EF_g50_loose;
   Bool_t          EF_g5_NoCut_cosmic;
   Bool_t          EF_g60_loose;
   Bool_t          EF_g60_loose_larcalib;
   Bool_t          EF_g80_loose;
   Bool_t          EF_g80_loose_larcalib;
   Bool_t          EF_j55_a4tc_EFFS_xe55_medium_noMu_dphi2j30xe10;
   Bool_t          EF_j55_a4tc_EFFS_xe55_medium_noMu_dphi2j30xe10_l2cleancons;
   Bool_t          EF_j65_a4tc_EFFS_xe65_noMu_dphi2j30xe10;
   Bool_t          EF_j75_a4tc_EFFS_xe40_loose_noMu;
   Bool_t          EF_j75_a4tc_EFFS_xe40_loose_noMu_dphijxe03;
   Bool_t          EF_j75_a4tc_EFFS_xe45_loose_noMu;
   Bool_t          EF_j75_a4tc_EFFS_xe55_loose_noMu;
   Bool_t          EF_j75_a4tc_EFFS_xe55_noMu;
   Bool_t          EF_j75_a4tc_EFFS_xe55_noMu_l2cleancons;
   Bool_t          EF_j80_a4tc_EFFS_xe60_noMu;
   Bool_t          EF_mu10;
   Bool_t          EF_mu13;
   Bool_t          EF_mu15_xe30_noMu;
   Bool_t          EF_mu15_xe35_noMu;
   Bool_t          EF_mu20;
   Bool_t          EF_mu20_MSonly;
   Bool_t          EF_mu4;
   Bool_t          EF_mu4_j45_a4tc_EFFS_xe45_loose_noMu;
   Bool_t          EF_mu6;
   Bool_t          EF_tau16_j75_a4tc_EFFS_xe40_loose_noMu;
   Bool_t          EF_tau16_loose_xe20_noMu;
   Bool_t          EF_tau16_loose_xe25_noMu;
   Bool_t          EF_tau16_loose_xe30_noMu;
   Bool_t          EF_tau16_medium_xe22_noMu;
   Bool_t          EF_tau16_medium_xe25_noMu;
   Bool_t          EF_tau16_medium_xe25_tight_noMu;
   Bool_t          EF_tau29_loose_j45_a4tc_EFFS_xe40_noMu;
   Bool_t          EF_tau29_medium_xe35_noMu;
   Bool_t          EF_tau29_medium_xe40_loose_noMu;
   Bool_t          EF_xe20_noMu;
   Bool_t          EF_xe30_noMu;
   Bool_t          EF_xe35_noMu;
   Bool_t          EF_xe40_noMu;
   Bool_t          EF_xe50_noMu;
   Bool_t          EF_xe60_noMu;
   Bool_t          EF_xe60_tight_noMu;
   Bool_t          EF_xe60_verytight_noMu;
   Bool_t          EF_xe70_noMu;
   Bool_t          EF_xe70_tight_noMu;
   Bool_t          EF_xe80_noMu;
   Bool_t          EF_xe90_noMu;
   Bool_t          L1_2EM10;
   Bool_t          L1_2EM14;
   Bool_t          L1_2EM3;
   Bool_t          L1_2EM3_EM10;
   Bool_t          L1_2EM3_EM12;
   Bool_t          L1_2EM3_EM7;
   Bool_t          L1_2EM5;
   Bool_t          L1_2EM5_EM10;
   Bool_t          L1_2EM5_EM12;
   Bool_t          L1_2EM5_MU6;
   Bool_t          L1_2EM5_NL;
   Bool_t          L1_2EM7;
   Bool_t          L1_2EM7_EM10;
   Bool_t          L1_2J20_XE20;
   Bool_t          L1_2J30_XE20;
   Bool_t          L1_2MU0_XE20;
   Bool_t          L1_2MU0_XE25;
   Bool_t          L1_EM10;
   Bool_t          L1_EM10_MU6;
   Bool_t          L1_EM10_XE20;
   Bool_t          L1_EM10_XE30;
   Bool_t          L1_EM10_XS45;
   Bool_t          L1_EM10_XS50;
   Bool_t          L1_EM12;
   Bool_t          L1_EM14;
   Bool_t          L1_EM14_XE10;
   Bool_t          L1_EM14_XE20;
   Bool_t          L1_EM16;
   Bool_t          L1_EM3;
   Bool_t          L1_EM30;
   Bool_t          L1_EM3_EMPTY;
   Bool_t          L1_EM3_FIRSTEMPTY;
   Bool_t          L1_EM3_MU0;
   Bool_t          L1_EM3_MU6;
   Bool_t          L1_EM3_UNPAIRED_ISO;
   Bool_t          L1_EM3_UNPAIRED_NONISO;
   Bool_t          L1_EM5;
   Bool_t          L1_EM5_2MU6;
   Bool_t          L1_EM5_EMPTY;
   Bool_t          L1_EM5_MU10;
   Bool_t          L1_EM5_MU6;
   Bool_t          L1_EM7;
   Bool_t          L1_J30_XE35;
   Bool_t          L1_J30_XE40;
   Bool_t          L1_J50_XE20;
   Bool_t          L1_J50_XE30;
   Bool_t          L1_J50_XE35;
   Bool_t          L1_J50_XE40;
   Bool_t          L1_MU0;
   Bool_t          L1_MU0_J20_XE20;
   Bool_t          L1_MU10;
   Bool_t          L1_MU10_XE20;
   Bool_t          L1_MU20;
   Bool_t          L1_MU6;
   Bool_t          L1_TAU11_2J10_J20_XE20;
   Bool_t          L1_TAU11_XE10_3J10;
   Bool_t          L1_TAU11_XE20;
   Bool_t          L1_TAU15_XE10_3J10;
   Bool_t          L1_TAU15_XE20;
   Bool_t          L1_TAU6_J50_XE20;
   Bool_t          L1_TAU6_XE10;
   Bool_t          L1_XE10;
   Bool_t          L1_XE20;
   Bool_t          L1_XE25;
   Bool_t          L1_XE30;
   Bool_t          L1_XE35;
   Bool_t          L1_XE40;
   Bool_t          L1_XE50;
   Bool_t          L1_XE60;
   Bool_t          L2_2e10_medium;
   Bool_t          L2_2e10_medium_mu6;
   Bool_t          L2_2e11T_medium;
   Bool_t          L2_2e12T_medium;
   Bool_t          L2_2e12_medium;
   Bool_t          L2_2e15_loose;
   Bool_t          L2_2e15_medium;
   Bool_t          L2_2e5_medium;
   Bool_t          L2_2e5_medium_SiTrk;
   Bool_t          L2_2e5_medium_TRT;
   Bool_t          L2_2e5_tight;
   Bool_t          L2_2e5_tight_Jpsi;
   Bool_t          L2_2g10_loose;
   Bool_t          L2_2g15_loose;
   Bool_t          L2_2g20_loose;
   Bool_t          L2_2g50_etcut;
   Bool_t          L2_2j40_anymct100_xe20_medium_noMu;
   Bool_t          L2_2j50_anymct100_xe20_medium_noMu;
   Bool_t          L2_2mu4;
   Bool_t          L2_2mu4_xe20_noMu;
   Bool_t          L2_2mu4_xe25_noMu;
   Bool_t          L2_MU0_j40_xe20_loose_noMu;
   Bool_t          L2_e10_NoCut;
   Bool_t          L2_e10_loose;
   Bool_t          L2_e10_loose_mu10;
   Bool_t          L2_e10_loose_mu6;
   Bool_t          L2_e10_medium;
   Bool_t          L2_e10_medium_2mu6;
   Bool_t          L2_e10_medium_mu10;
   Bool_t          L2_e10_medium_mu6;
   Bool_t          L2_e10_medium_mu6_topo_medium;
   Bool_t          L2_e11T_medium;
   Bool_t          L2_e11T_medium_2e6T_medium;
   Bool_t          L2_e11_etcut;
   Bool_t          L2_e12T_medium_mu6_topo_medium;
   Bool_t          L2_e12_medium;
   Bool_t          L2_e13_etcut_xs45_noMu;
   Bool_t          L2_e15_HLTtighter;
   Bool_t          L2_e15_loose;
   Bool_t          L2_e15_medium;
   Bool_t          L2_e15_medium_e12_medium;
   Bool_t          L2_e15_medium_mu6;
   Bool_t          L2_e15_medium_xe20_noMu;
   Bool_t          L2_e15_medium_xe25_noMu;
   Bool_t          L2_e15_medium_xe30_noMu;
   Bool_t          L2_e15_medium_xe35_noMu;
   Bool_t          L2_e15_medium_xe40_loose_noMu;
   Bool_t          L2_e15_tight;
   Bool_t          L2_e15_tight1;
   Bool_t          L2_e15_tight_xe30_noMu;
   Bool_t          L2_e18_medium;
   Bool_t          L2_e18_medium_xe20_noMu;
   Bool_t          L2_e18_tight;
   Bool_t          L2_e20_L2Star_IDTrkNoCut;
   Bool_t          L2_e20_etcut_xs45_noMu;
   Bool_t          L2_e20_loose;
   Bool_t          L2_e20_loose1;
   Bool_t          L2_e20_looseTrk;
   Bool_t          L2_e20_loose_2j10_a4tc_EFFS;
   Bool_t          L2_e20_loose_3j10_a4tc_EFFS;
   Bool_t          L2_e20_loose_4j10_a4tc_EFFS;
   Bool_t          L2_e20_loose_IDTrkNoCut;
   Bool_t          L2_e20_loose_TRT;
   Bool_t          L2_e20_loose_xe20;
   Bool_t          L2_e20_loose_xe20_noMu;
   Bool_t          L2_e20_loose_xe30;
   Bool_t          L2_e20_loose_xe30_noMu;
   Bool_t          L2_e20_medium;
   Bool_t          L2_e20_medium1;
   Bool_t          L2_e20_medium2;
   Bool_t          L2_e20_medium_IDTrkNoCut;
   Bool_t          L2_e20_medium_SiTrk;
   Bool_t          L2_e20_medium_TRT;
   Bool_t          L2_e20_tight;
   Bool_t          L2_e20_tight_e15_NoCut_Zee;
   Bool_t          L2_e22_etcut_xs45_noMu;
   Bool_t          L2_e22_loose;
   Bool_t          L2_e22_loose1;
   Bool_t          L2_e22_looseTrk;
   Bool_t          L2_e22_medium;
   Bool_t          L2_e22_medium1;
   Bool_t          L2_e22_medium2;
   Bool_t          L2_e22_medium_IDTrkNoCut;
   Bool_t          L2_e22_medium_SiTrk;
   Bool_t          L2_e22_medium_TRT;
   Bool_t          L2_e22_tight;
   Bool_t          L2_e25_loose;
   Bool_t          L2_e25_medium;
   Bool_t          L2_e30_loose;
   Bool_t          L2_e30_medium;
   Bool_t          L2_e33_medium;
   Bool_t          L2_e35_medium;
   Bool_t          L2_e40_medium;
   Bool_t          L2_e45_medium;
   Bool_t          L2_e45_medium1;
   Bool_t          L2_e5_NoCut_L2SW;
   Bool_t          L2_e5_NoCut_Ringer;
   Bool_t          L2_e5_NoCut_firstempty;
   Bool_t          L2_e5_medium_mu4;
   Bool_t          L2_e5_medium_mu6;
   Bool_t          L2_e5_medium_mu6_topo_loose;
   Bool_t          L2_e5_medium_mu6_topo_medium;
   Bool_t          L2_e5_tight;
   Bool_t          L2_e5_tight_TRT;
   Bool_t          L2_e5_tight_e14_etcut_Jpsi;
   Bool_t          L2_e5_tight_e4_etcut_Jpsi;
   Bool_t          L2_e5_tight_e4_etcut_Jpsi_SiTrk;
   Bool_t          L2_e5_tight_e4_etcut_Jpsi_TRT;
   Bool_t          L2_e5_tight_e5_NoCut;
   Bool_t          L2_e5_tight_e5_NoCut_Jpsi;
   Bool_t          L2_e5_tight_e7_etcut_Jpsi;
   Bool_t          L2_e5_tight_e9_etcut_Jpsi;
   Bool_t          L2_e60_loose;
   Bool_t          L2_e6T_medium;
   Bool_t          L2_e7_tight_e14_etcut_Jpsi;
   Bool_t          L2_e9_tight_e5_tight_Jpsi;
   Bool_t          L2_eb_physics;
   Bool_t          L2_eb_physics_empty;
   Bool_t          L2_eb_physics_firstempty;
   Bool_t          L2_eb_physics_noL1PS;
   Bool_t          L2_eb_physics_unpaired_iso;
   Bool_t          L2_eb_physics_unpaired_noniso;
   Bool_t          L2_eb_random;
   Bool_t          L2_eb_random_empty;
   Bool_t          L2_eb_random_firstempty;
   Bool_t          L2_eb_random_unpaired_iso;
   Bool_t          L2_em105_passHLT;
   Bool_t          L2_em3_empty_larcalib;
   Bool_t          L2_em5_empty_larcalib;
   Bool_t          L2_g100_etcut_g50_etcut;
   Bool_t          L2_g100_loose;
   Bool_t          L2_g10_NoCut_cosmic;
   Bool_t          L2_g11_etcut;
   Bool_t          L2_g13_etcut_xs45_noMu;
   Bool_t          L2_g150_etcut;
   Bool_t          L2_g15_loose;
   Bool_t          L2_g17_etcut;
   Bool_t          L2_g17_etcut_EFxe20_noMu;
   Bool_t          L2_g17_etcut_EFxe30_noMu;
   Bool_t          L2_g20_etcut;
   Bool_t          L2_g20_etcut_xe30_noMu;
   Bool_t          L2_g20_loose;
   Bool_t          L2_g20_loose_cnv;
   Bool_t          L2_g20_loose_xe20_noMu;
   Bool_t          L2_g20_loose_xe30_noMu;
   Bool_t          L2_g20_tight;
   Bool_t          L2_g22_hiptrt;
   Bool_t          L2_g25_loose_xe30_noMu;
   Bool_t          L2_g27_etcut;
   Bool_t          L2_g27_etcut_EFxe30_noMu;
   Bool_t          L2_g30_loose_g20_loose;
   Bool_t          L2_g40_loose;
   Bool_t          L2_g40_loose_EFxe35_noMu;
   Bool_t          L2_g40_loose_EFxe40_noMu;
   Bool_t          L2_g40_loose_b10_medium;
   Bool_t          L2_g40_loose_xe30_medium_noMu;
   Bool_t          L2_g40_loose_xe35_medium_noMu;
   Bool_t          L2_g40_loose_xe40_noMu;
   Bool_t          L2_g40_loose_xs35_noMu;
   Bool_t          L2_g40_tight;
   Bool_t          L2_g40_tight_b10_medium;
   Bool_t          L2_g40_tight_b15_medium;
   Bool_t          L2_g50_loose;
   Bool_t          L2_g5_NoCut_cosmic;
   Bool_t          L2_g60_loose;
   Bool_t          L2_g80_loose;
   Bool_t          L2_j50_xe35_medium_noMu;
   Bool_t          L2_j50_xe35_medium_noMu_l2cleancons;
   Bool_t          L2_j60_xe45_noMu;
   Bool_t          L2_j70_xe20_loose_noMu;
   Bool_t          L2_j70_xe25_loose_noMu;
   Bool_t          L2_j70_xe35_noMu;
   Bool_t          L2_j70_xe35_noMu_l2cleancons;
   Bool_t          L2_j75_xe40_noMu;
   Bool_t          L2_mu10;
   Bool_t          L2_mu13;
   Bool_t          L2_mu15_xe20_noMu;
   Bool_t          L2_mu20;
   Bool_t          L2_mu20_MSonly;
   Bool_t          L2_mu4;
   Bool_t          L2_mu4_j40_xe20_loose_noMu;
   Bool_t          L2_mu6;
   Bool_t          L2_tau16_j70_xe20_loose_noMu;
   Bool_t          L2_tau16_loose_xe20_noMu;
   Bool_t          L2_tau16_loose_xe25_noMu;
   Bool_t          L2_tau16_loose_xe30_noMu;
   Bool_t          L2_tau16_medium_xe22_noMu;
   Bool_t          L2_tau16_medium_xe25_noMu;
   Bool_t          L2_tau16_medium_xe25_tight_noMu;
   Bool_t          L2_tau29_loose_j40_xe20_noMu;
   Bool_t          L2_tau29_medium_xe25_noMu;
   Bool_t          L2_tau29_medium_xe30_loose_noMu;
   Bool_t          L2_xe10_noMu;
   Bool_t          L2_xe20_noMu;
   Bool_t          L2_xe25_noMu;
   Bool_t          L2_xe30_noMu;
   Bool_t          L2_xe35_noMu;
   Bool_t          L2_xe40_noMu;
   Bool_t          L2_xe45_noMu;
   Bool_t          L2_xe50_noMu;
   Bool_t          L2_xe55_noMu;
   Bool_t          L2_xe60_noMu;
   Bool_t          L2_xe70_noMu;
   vector<int>     *trig_L2_el_L2_2e10_medium;
   vector<int>     *trig_L2_el_L2_2e10_medium_mu6;
   vector<int>     *trig_L2_el_L2_2e11T_medium;
   vector<int>     *trig_L2_el_L2_2e12T_medium;
   vector<int>     *trig_L2_el_L2_2e12_medium;
   vector<int>     *trig_L2_el_L2_2e15_loose;
   vector<int>     *trig_L2_el_L2_2e15_medium;
   vector<int>     *trig_L2_el_L2_2e5_medium;
   vector<int>     *trig_L2_el_L2_2e5_medium_SiTrk;
   vector<int>     *trig_L2_el_L2_2e5_medium_TRT;
   vector<int>     *trig_L2_el_L2_2e5_tight;
   vector<int>     *trig_L2_el_L2_2e5_tight_Jpsi;
   vector<int>     *trig_L2_el_L2_e10_NoCut;
   vector<int>     *trig_L2_el_L2_e10_loose;
   vector<int>     *trig_L2_el_L2_e10_loose_mu10;
   vector<int>     *trig_L2_el_L2_e10_loose_mu6;
   vector<int>     *trig_L2_el_L2_e10_medium;
   vector<int>     *trig_L2_el_L2_e10_medium_2mu6;
   vector<int>     *trig_L2_el_L2_e10_medium_mu10;
   vector<int>     *trig_L2_el_L2_e10_medium_mu6;
   vector<int>     *trig_L2_el_L2_e10_medium_mu6_topo_medium;
   vector<int>     *trig_L2_el_L2_e11T_medium;
   vector<int>     *trig_L2_el_L2_e11T_medium_2e6T_medium;
   vector<int>     *trig_L2_el_L2_e11_etcut;
   vector<int>     *trig_L2_el_L2_e12T_medium_mu6_topo_medium;
   vector<int>     *trig_L2_el_L2_e12_medium;
   vector<int>     *trig_L2_el_L2_e13_etcut_xs45_noMu;
   vector<int>     *trig_L2_el_L2_e15_HLTtighter;
   vector<int>     *trig_L2_el_L2_e15_loose;
   vector<int>     *trig_L2_el_L2_e15_medium;
   vector<int>     *trig_L2_el_L2_e15_medium_e12_medium;
   vector<int>     *trig_L2_el_L2_e15_medium_mu6;
   vector<int>     *trig_L2_el_L2_e15_medium_xe20_noMu;
   vector<int>     *trig_L2_el_L2_e15_medium_xe25_noMu;
   vector<int>     *trig_L2_el_L2_e15_medium_xe30_noMu;
   vector<int>     *trig_L2_el_L2_e15_medium_xe35_noMu;
   vector<int>     *trig_L2_el_L2_e15_medium_xe40_loose_noMu;
   vector<int>     *trig_L2_el_L2_e15_tight;
   vector<int>     *trig_L2_el_L2_e15_tight1;
   vector<int>     *trig_L2_el_L2_e15_tight_xe30_noMu;
   vector<int>     *trig_L2_el_L2_e18_medium;
   vector<int>     *trig_L2_el_L2_e18_medium_xe20_noMu;
   vector<int>     *trig_L2_el_L2_e18_tight;
   vector<int>     *trig_L2_el_L2_e20_L2Star_IDTrkNoCut;
   vector<int>     *trig_L2_el_L2_e20_etcut_xs45_noMu;
   vector<int>     *trig_L2_el_L2_e20_loose;
   vector<int>     *trig_L2_el_L2_e20_loose1;
   vector<int>     *trig_L2_el_L2_e20_looseTrk;
   vector<int>     *trig_L2_el_L2_e20_loose_2j10_a4tc_EFFS;
   vector<int>     *trig_L2_el_L2_e20_loose_3j10_a4tc_EFFS;
   vector<int>     *trig_L2_el_L2_e20_loose_4j10_a4tc_EFFS;
   vector<int>     *trig_L2_el_L2_e20_loose_IDTrkNoCut;
   vector<int>     *trig_L2_el_L2_e20_loose_TRT;
   vector<int>     *trig_L2_el_L2_e20_loose_xe20;
   vector<int>     *trig_L2_el_L2_e20_loose_xe20_noMu;
   vector<int>     *trig_L2_el_L2_e20_loose_xe30;
   vector<int>     *trig_L2_el_L2_e20_loose_xe30_noMu;
   vector<int>     *trig_L2_el_L2_e20_medium;
   vector<int>     *trig_L2_el_L2_e20_medium1;
   vector<int>     *trig_L2_el_L2_e20_medium2;
   vector<int>     *trig_L2_el_L2_e20_medium_IDTrkNoCut;
   vector<int>     *trig_L2_el_L2_e20_medium_SiTrk;
   vector<int>     *trig_L2_el_L2_e20_medium_TRT;
   vector<int>     *trig_L2_el_L2_e20_tight;
   vector<int>     *trig_L2_el_L2_e20_tight_e15_NoCut_Zee;
   vector<int>     *trig_L2_el_L2_e22_etcut_xs45_noMu;
   vector<int>     *trig_L2_el_L2_e22_loose;
   vector<int>     *trig_L2_el_L2_e22_loose1;
   vector<int>     *trig_L2_el_L2_e22_looseTrk;
   vector<int>     *trig_L2_el_L2_e22_medium;
   vector<int>     *trig_L2_el_L2_e22_medium1;
   vector<int>     *trig_L2_el_L2_e22_medium2;
   vector<int>     *trig_L2_el_L2_e22_medium_IDTrkNoCut;
   vector<int>     *trig_L2_el_L2_e22_medium_SiTrk;
   vector<int>     *trig_L2_el_L2_e22_medium_TRT;
   vector<int>     *trig_L2_el_L2_e22_tight;
   vector<int>     *trig_L2_el_L2_e25_loose;
   vector<int>     *trig_L2_el_L2_e25_medium;
   vector<int>     *trig_L2_el_L2_e30_loose;
   vector<int>     *trig_L2_el_L2_e30_medium;
   vector<int>     *trig_L2_el_L2_e33_medium;
   vector<int>     *trig_L2_el_L2_e35_medium;
   vector<int>     *trig_L2_el_L2_e40_medium;
   vector<int>     *trig_L2_el_L2_e45_medium;
   vector<int>     *trig_L2_el_L2_e45_medium1;
   vector<int>     *trig_L2_el_L2_e5_NoCut_L2SW;
   vector<int>     *trig_L2_el_L2_e5_NoCut_Ringer;
   vector<int>     *trig_L2_el_L2_e5_NoCut_firstempty;
   vector<int>     *trig_L2_el_L2_e5_medium_mu4;
   vector<int>     *trig_L2_el_L2_e5_medium_mu6;
   vector<int>     *trig_L2_el_L2_e5_medium_mu6_topo_loose;
   vector<int>     *trig_L2_el_L2_e5_medium_mu6_topo_medium;
   vector<int>     *trig_L2_el_L2_e5_tight;
   vector<int>     *trig_L2_el_L2_e5_tight_TRT;
   vector<int>     *trig_L2_el_L2_e5_tight_e14_etcut_Jpsi;
   vector<int>     *trig_L2_el_L2_e5_tight_e4_etcut_Jpsi;
   vector<int>     *trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_SiTrk;
   vector<int>     *trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_TRT;
   vector<int>     *trig_L2_el_L2_e5_tight_e5_NoCut;
   vector<int>     *trig_L2_el_L2_e5_tight_e5_NoCut_Jpsi;
   vector<int>     *trig_L2_el_L2_e5_tight_e7_etcut_Jpsi;
   vector<int>     *trig_L2_el_L2_e5_tight_e9_etcut_Jpsi;
   vector<int>     *trig_L2_el_L2_e60_loose;
   vector<int>     *trig_L2_el_L2_e6T_medium;
   vector<int>     *trig_L2_el_L2_e7_tight_e14_etcut_Jpsi;
   vector<int>     *trig_L2_el_L2_e9_tight_e5_tight_Jpsi;
   vector<int>     *trig_L2_el_L2_eb_physics;
   vector<int>     *trig_L2_el_L2_eb_physics_empty;
   vector<int>     *trig_L2_el_L2_eb_physics_firstempty;
   vector<int>     *trig_L2_el_L2_eb_physics_noL1PS;
   vector<int>     *trig_L2_el_L2_eb_physics_unpaired_iso;
   vector<int>     *trig_L2_el_L2_eb_physics_unpaired_noniso;
   vector<int>     *trig_L2_el_L2_eb_random;
   vector<int>     *trig_L2_el_L2_eb_random_empty;
   vector<int>     *trig_L2_el_L2_eb_random_firstempty;
   vector<int>     *trig_L2_el_L2_eb_random_unpaired_iso;
   vector<int>     *trig_L2_el_L2_em105_passHLT;
   vector<int>     *trig_L2_el_L2_em3_empty_larcalib;
   vector<int>     *trig_L2_el_L2_em5_empty_larcalib;
   vector<int>     *trig_L2_ph_L2_2g10_loose;
   vector<int>     *trig_L2_ph_L2_2g15_loose;
   vector<int>     *trig_L2_ph_L2_2g20_loose;
   vector<int>     *trig_L2_ph_L2_2g50_etcut;
   vector<int>     *trig_L2_ph_L2_g100_etcut_g50_etcut;
   vector<int>     *trig_L2_ph_L2_g100_loose;
   vector<int>     *trig_L2_ph_L2_g10_NoCut_cosmic;
   vector<int>     *trig_L2_ph_L2_g11_etcut;
   vector<int>     *trig_L2_ph_L2_g13_etcut_xs45_noMu;
   vector<int>     *trig_L2_ph_L2_g150_etcut;
   vector<int>     *trig_L2_ph_L2_g15_loose;
   vector<int>     *trig_L2_ph_L2_g17_etcut;
   vector<int>     *trig_L2_ph_L2_g17_etcut_EFxe20_noMu;
   vector<int>     *trig_L2_ph_L2_g17_etcut_EFxe30_noMu;
   vector<int>     *trig_L2_ph_L2_g20_etcut;
   vector<int>     *trig_L2_ph_L2_g20_etcut_xe30_noMu;
   vector<int>     *trig_L2_ph_L2_g20_loose;
   vector<int>     *trig_L2_ph_L2_g20_loose_cnv;
   vector<int>     *trig_L2_ph_L2_g20_loose_xe20_noMu;
   vector<int>     *trig_L2_ph_L2_g20_loose_xe30_noMu;
   vector<int>     *trig_L2_ph_L2_g20_tight;
   vector<int>     *trig_L2_ph_L2_g22_hiptrt;
   vector<int>     *trig_L2_ph_L2_g25_loose_xe30_noMu;
   vector<int>     *trig_L2_ph_L2_g27_etcut;
   vector<int>     *trig_L2_ph_L2_g27_etcut_EFxe30_noMu;
   vector<int>     *trig_L2_ph_L2_g30_loose_g20_loose;
   vector<int>     *trig_L2_ph_L2_g40_loose;
   vector<int>     *trig_L2_ph_L2_g40_loose_EFxe35_noMu;
   vector<int>     *trig_L2_ph_L2_g40_loose_EFxe40_noMu;
   vector<int>     *trig_L2_ph_L2_g40_loose_b10_medium;
   vector<int>     *trig_L2_ph_L2_g40_loose_xe30_medium_noMu;
   vector<int>     *trig_L2_ph_L2_g40_loose_xe35_medium_noMu;
   vector<int>     *trig_L2_ph_L2_g40_loose_xe40_noMu;
   vector<int>     *trig_L2_ph_L2_g40_loose_xs35_noMu;
   vector<int>     *trig_L2_ph_L2_g40_tight;
   vector<int>     *trig_L2_ph_L2_g40_tight_b10_medium;
   vector<int>     *trig_L2_ph_L2_g40_tight_b15_medium;
   vector<int>     *trig_L2_ph_L2_g50_loose;
   vector<int>     *trig_L2_ph_L2_g5_NoCut_cosmic;
   vector<int>     *trig_L2_ph_L2_g60_loose;
   vector<int>     *trig_L2_ph_L2_g80_loose;
   vector<int>     *trig_EF_el_EF_2e10_medium;
   vector<int>     *trig_EF_el_EF_2e10_medium_mu6;
   vector<int>     *trig_EF_el_EF_2e11T_medium;
   vector<int>     *trig_EF_el_EF_2e12T_medium;
   vector<int>     *trig_EF_el_EF_2e12_medium;
   vector<int>     *trig_EF_el_EF_2e15_loose;
   vector<int>     *trig_EF_el_EF_2e15_medium;
   vector<int>     *trig_EF_el_EF_2e5_medium;
   vector<int>     *trig_EF_el_EF_2e5_medium_SiTrk;
   vector<int>     *trig_EF_el_EF_2e5_medium_TRT;
   vector<int>     *trig_EF_el_EF_2e5_tight;
   vector<int>     *trig_EF_el_EF_2e5_tight_Jpsi;
   vector<int>     *trig_EF_el_EF_e10_NoCut;
   vector<int>     *trig_EF_el_EF_e10_loose;
   vector<int>     *trig_EF_el_EF_e10_loose_mu10;
   vector<int>     *trig_EF_el_EF_e10_loose_mu6;
   vector<int>     *trig_EF_el_EF_e10_medium;
   vector<int>     *trig_EF_el_EF_e10_medium_2mu6;
   vector<int>     *trig_EF_el_EF_e10_medium_mu10;
   vector<int>     *trig_EF_el_EF_e10_medium_mu6;
   vector<int>     *trig_EF_el_EF_e10_medium_mu6_topo_medium;
   vector<int>     *trig_EF_el_EF_e11T_medium;
   vector<int>     *trig_EF_el_EF_e11T_medium_2e6T_medium;
   vector<int>     *trig_EF_el_EF_e11_etcut;
   vector<int>     *trig_EF_el_EF_e12T_medium_mu6_topo_medium;
   vector<int>     *trig_EF_el_EF_e12_medium;
   vector<int>     *trig_EF_el_EF_e13_etcutTRT_xs60_noMu;
   vector<int>     *trig_EF_el_EF_e13_etcut_xs60_noMu;
   vector<int>     *trig_EF_el_EF_e13_etcut_xs70_noMu;
   vector<int>     *trig_EF_el_EF_e15_HLTtighter;
   vector<int>     *trig_EF_el_EF_e15_loose;
   vector<int>     *trig_EF_el_EF_e15_medium;
   vector<int>     *trig_EF_el_EF_e15_medium_e12_medium;
   vector<int>     *trig_EF_el_EF_e15_medium_mu6;
   vector<int>     *trig_EF_el_EF_e15_medium_xe30_noMu;
   vector<int>     *trig_EF_el_EF_e15_medium_xe35_loose_noMu;
   vector<int>     *trig_EF_el_EF_e15_medium_xe35_noMu;
   vector<int>     *trig_EF_el_EF_e15_medium_xe40_loose_noMu;
   vector<int>     *trig_EF_el_EF_e15_medium_xe40_noMu;
   vector<int>     *trig_EF_el_EF_e15_medium_xe50_noMu;
   vector<int>     *trig_EF_el_EF_e15_tight;
   vector<int>     *trig_EF_el_EF_e15_tight1;
   vector<int>     *trig_EF_el_EF_e15_tight_xe30_noMu;
   vector<int>     *trig_EF_el_EF_e18_medium;
   vector<int>     *trig_EF_el_EF_e18_medium_xe30_noMu;
   vector<int>     *trig_EF_el_EF_e18_tight;
   vector<int>     *trig_EF_el_EF_e20_L2Star_IDTrkNoCut;
   vector<int>     *trig_EF_el_EF_e20_etcut_xs60_noMu;
   vector<int>     *trig_EF_el_EF_e20_loose;
   vector<int>     *trig_EF_el_EF_e20_loose1;
   vector<int>     *trig_EF_el_EF_e20_looseTrk;
   vector<int>     *trig_EF_el_EF_e20_loose_2j10_a4tc_EFFS;
   vector<int>     *trig_EF_el_EF_e20_loose_3j10_a4tc_EFFS;
   vector<int>     *trig_EF_el_EF_e20_loose_4j10_a4tc_EFFS;
   vector<int>     *trig_EF_el_EF_e20_loose_IDTrkNoCut;
   vector<int>     *trig_EF_el_EF_e20_loose_TRT;
   vector<int>     *trig_EF_el_EF_e20_loose_xe20;
   vector<int>     *trig_EF_el_EF_e20_loose_xe20_noMu;
   vector<int>     *trig_EF_el_EF_e20_loose_xe30;
   vector<int>     *trig_EF_el_EF_e20_loose_xe30_noMu;
   vector<int>     *trig_EF_el_EF_e20_medium;
   vector<int>     *trig_EF_el_EF_e20_medium1;
   vector<int>     *trig_EF_el_EF_e20_medium2;
   vector<int>     *trig_EF_el_EF_e20_medium_IDTrkNoCut;
   vector<int>     *trig_EF_el_EF_e20_medium_SiTrk;
   vector<int>     *trig_EF_el_EF_e20_medium_TRT;
   vector<int>     *trig_EF_el_EF_e20_tight;
   vector<int>     *trig_EF_el_EF_e20_tight_e15_NoCut_Zee;
   vector<int>     *trig_EF_el_EF_e22_etcut_xs60_noMu;
   vector<int>     *trig_EF_el_EF_e22_loose;
   vector<int>     *trig_EF_el_EF_e22_loose1;
   vector<int>     *trig_EF_el_EF_e22_looseTrk;
   vector<int>     *trig_EF_el_EF_e22_medium;
   vector<int>     *trig_EF_el_EF_e22_medium1;
   vector<int>     *trig_EF_el_EF_e22_medium2;
   vector<int>     *trig_EF_el_EF_e22_medium_IDTrkNoCut;
   vector<int>     *trig_EF_el_EF_e22_medium_SiTrk;
   vector<int>     *trig_EF_el_EF_e22_medium_TRT;
   vector<int>     *trig_EF_el_EF_e22_tight;
   vector<int>     *trig_EF_el_EF_e25_loose;
   vector<int>     *trig_EF_el_EF_e25_medium;
   vector<int>     *trig_EF_el_EF_e30_loose;
   vector<int>     *trig_EF_el_EF_e30_medium;
   vector<int>     *trig_EF_el_EF_e33_medium;
   vector<int>     *trig_EF_el_EF_e35_medium;
   vector<int>     *trig_EF_el_EF_e40_medium;
   vector<int>     *trig_EF_el_EF_e45_medium;
   vector<int>     *trig_EF_el_EF_e45_medium1;
   vector<int>     *trig_EF_el_EF_e5_NoCut_L2SW;
   vector<int>     *trig_EF_el_EF_e5_NoCut_Ringer;
   vector<int>     *trig_EF_el_EF_e5_NoCut_firstempty;
   vector<int>     *trig_EF_el_EF_e5_medium_mu4;
   vector<int>     *trig_EF_el_EF_e5_medium_mu6;
   vector<int>     *trig_EF_el_EF_e5_medium_mu6_topo_loose;
   vector<int>     *trig_EF_el_EF_e5_medium_mu6_topo_medium;
   vector<int>     *trig_EF_el_EF_e5_tight;
   vector<int>     *trig_EF_el_EF_e5_tight_TRT;
   vector<int>     *trig_EF_el_EF_e5_tight_e14_etcut_Jpsi;
   vector<int>     *trig_EF_el_EF_e5_tight_e4_etcut_Jpsi;
   vector<int>     *trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_SiTrk;
   vector<int>     *trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_TRT;
   vector<int>     *trig_EF_el_EF_e5_tight_e5_NoCut;
   vector<int>     *trig_EF_el_EF_e5_tight_e5_NoCut_Jpsi;
   vector<int>     *trig_EF_el_EF_e5_tight_e7_etcut_Jpsi;
   vector<int>     *trig_EF_el_EF_e5_tight_e9_etcut_Jpsi;
   vector<int>     *trig_EF_el_EF_e60_loose;
   vector<int>     *trig_EF_el_EF_e6T_medium;
   vector<int>     *trig_EF_el_EF_e7_tight_e14_etcut_Jpsi;
   vector<int>     *trig_EF_el_EF_e9_tight_e5_tight_Jpsi;
   vector<int>     *trig_EF_el_EF_eb_physics;
   vector<int>     *trig_EF_el_EF_eb_physics_empty;
   vector<int>     *trig_EF_el_EF_eb_physics_firstempty;
   vector<int>     *trig_EF_el_EF_eb_physics_noL1PS;
   vector<int>     *trig_EF_el_EF_eb_physics_unpaired_iso;
   vector<int>     *trig_EF_el_EF_eb_physics_unpaired_noniso;
   vector<int>     *trig_EF_el_EF_eb_random;
   vector<int>     *trig_EF_el_EF_eb_random_empty;
   vector<int>     *trig_EF_el_EF_eb_random_firstempty;
   vector<int>     *trig_EF_el_EF_eb_random_unpaired_iso;
   vector<int>     *trig_EF_el_EF_em105_passHLT;
   vector<int>     *trig_EF_ph_EF_2g10_loose;
   vector<int>     *trig_EF_ph_EF_2g15_loose;
   vector<int>     *trig_EF_ph_EF_2g20_loose;
   vector<int>     *trig_EF_ph_EF_2g50_etcut;
   vector<int>     *trig_EF_ph_EF_g100_etcut_g50_etcut;
   vector<int>     *trig_EF_ph_EF_g100_loose;
   vector<int>     *trig_EF_ph_EF_g10_NoCut_cosmic;
   vector<int>     *trig_EF_ph_EF_g11_etcut;
   vector<int>     *trig_EF_ph_EF_g11_etcut_larcalib;
   vector<int>     *trig_EF_ph_EF_g13_etcut_xs60_noMu;
   vector<int>     *trig_EF_ph_EF_g150_etcut;
   vector<int>     *trig_EF_ph_EF_g15_loose;
   vector<int>     *trig_EF_ph_EF_g15_loose_larcalib;
   vector<int>     *trig_EF_ph_EF_g17_etcut;
   vector<int>     *trig_EF_ph_EF_g17_etcut_EFxe20_noMu;
   vector<int>     *trig_EF_ph_EF_g17_etcut_EFxe30_noMu;
   vector<int>     *trig_EF_ph_EF_g20_etcut;
   vector<int>     *trig_EF_ph_EF_g20_etcut_xe30_noMu;
   vector<int>     *trig_EF_ph_EF_g20_loose;
   vector<int>     *trig_EF_ph_EF_g20_loose_cnv;
   vector<int>     *trig_EF_ph_EF_g20_loose_larcalib;
   vector<int>     *trig_EF_ph_EF_g20_loose_xe20_noMu;
   vector<int>     *trig_EF_ph_EF_g20_loose_xe30_noMu;
   vector<int>     *trig_EF_ph_EF_g20_tight;
   vector<int>     *trig_EF_ph_EF_g22_hiptrt;
   vector<int>     *trig_EF_ph_EF_g25_loose_xe30_noMu;
   vector<int>     *trig_EF_ph_EF_g27_etcut;
   vector<int>     *trig_EF_ph_EF_g27_etcut_EFxe30_noMu;
   vector<int>     *trig_EF_ph_EF_g30_loose_g20_loose;
   vector<int>     *trig_EF_ph_EF_g40_loose;
   vector<int>     *trig_EF_ph_EF_g40_loose_EFxe35_noMu;
   vector<int>     *trig_EF_ph_EF_g40_loose_EFxe40_noMu;
   vector<int>     *trig_EF_ph_EF_g40_loose_b10_medium;
   vector<int>     *trig_EF_ph_EF_g40_loose_larcalib;
   vector<int>     *trig_EF_ph_EF_g40_loose_xe40_noMu;
   vector<int>     *trig_EF_ph_EF_g40_loose_xe45_medium_noMu;
   vector<int>     *trig_EF_ph_EF_g40_loose_xe55_medium_noMu;
   vector<int>     *trig_EF_ph_EF_g40_loose_xs35_noMu;
   vector<int>     *trig_EF_ph_EF_g40_tight;
   vector<int>     *trig_EF_ph_EF_g40_tight_b10_medium;
   vector<int>     *trig_EF_ph_EF_g40_tight_b15_medium;
   vector<int>     *trig_EF_ph_EF_g50_loose;
   vector<int>     *trig_EF_ph_EF_g5_NoCut_cosmic;
   vector<int>     *trig_EF_ph_EF_g60_loose;
   vector<int>     *trig_EF_ph_EF_g60_loose_larcalib;
   vector<int>     *trig_EF_ph_EF_g80_loose;
   vector<int>     *trig_EF_ph_EF_g80_loose_larcalib;
   UInt_t          RunNumber;
   UInt_t          EventNumber;
   UInt_t          timestamp;
   UInt_t          timestamp_ns;
   UInt_t          lbn;
   UInt_t          bcid;
   UInt_t          detmask0;
   UInt_t          detmask1;
   Float_t         actualIntPerXing;
   Float_t         averageIntPerXing;
   UInt_t          mc_channel_number;
   UInt_t          mc_event_number;
   Float_t         mc_event_weight;
   UInt_t          pixelFlags;
   UInt_t          sctFlags;
   UInt_t          trtFlags;
   UInt_t          larFlags;
   UInt_t          tileFlags;
   UInt_t          muonFlags;
   UInt_t          fwdFlags;
   UInt_t          coreFlags;
   UInt_t          pixelError;
   UInt_t          sctError;
   UInt_t          trtError;
   UInt_t          larError;
   UInt_t          tileError;
   UInt_t          muonError;
   UInt_t          fwdError;
   UInt_t          coreError;
   Bool_t          isSimulation;
   Bool_t          isCalibration;
   Bool_t          isTestBeam;
   Int_t           mb_n;
   vector<float>   *mb_E;
   vector<float>   *mb_eta;
   vector<float>   *mb_phi;
   vector<float>   *mb_time;
   vector<int>     *mb_quality;
   vector<int>     *mb_type;
   vector<int>     *mb_module;
   vector<int>     *mb_channel;
   Float_t         mbtime_timeDiff;
   Float_t         mbtime_timeA;
   Float_t         mbtime_timeC;
   Int_t           mbtime_countA;
   Int_t           mbtime_countC;
   Bool_t          L1_MBTS_2;
   Bool_t          L1_MBTS_2_BGRP7;
   Bool_t          L1_MBTS_2_UNPAIRED_ISO;
   Bool_t          L1_MBTS_4_4;
   Bool_t          L1_MBTS_4_4_EMPTY;
   Bool_t          collcand_passCaloTime;
   Bool_t          collcand_passMBTSTime;
   Bool_t          collcand_passTrigger;
   Bool_t          collcand_pass;
   Int_t           trk_n;
   vector<float>   *trk_d0;
   vector<float>   *trk_z0;
   vector<float>   *trk_phi;
   vector<float>   *trk_theta;
   vector<float>   *trk_qoverp;
   vector<float>   *trk_pt;
   vector<float>   *trk_eta;
   vector<float>   *trk_d0_wrtPV;
   vector<float>   *trk_z0_wrtPV;
   vector<float>   *trk_phi_wrtPV;
   vector<float>   *trk_d0_wrtBS;
   vector<float>   *trk_z0_wrtBS;
   vector<float>   *trk_phi_wrtBS;
   vector<float>   *trk_chi2;
   vector<int>     *trk_ndof;
   vector<int>     *trk_nBLHits;
   vector<int>     *trk_nPixHits;
   vector<int>     *trk_nSCTHits;
   vector<int>     *trk_nTRTHits;
   vector<int>     *trk_nTRTHighTHits;
   vector<int>     *trk_nPixHoles;
   vector<int>     *trk_nSCTHoles;
   vector<int>     *trk_nTRTHoles;
   vector<int>     *trk_expectBLayerHit;
   vector<int>     *trk_nMDTHits;
   vector<int>     *trk_nCSCEtaHits;
   vector<int>     *trk_nCSCPhiHits;
   vector<int>     *trk_nRPCEtaHits;
   vector<int>     *trk_nRPCPhiHits;
   vector<int>     *trk_nTGCEtaHits;
   vector<int>     *trk_nTGCPhiHits;
   vector<int>     *trk_nHits;
   vector<int>     *trk_nHoles;
   vector<int>     *trk_hitPattern;
   vector<float>   *trk_TRTHighTHitsRatio;
   vector<float>   *trk_TRTHighTOutliersRatio;
   vector<float>   *trk_mc_probability;
   vector<int>     *trk_mc_barcode;
   vector<float>   *trk_conv_weight;
   Float_t         beamSpot_x;
   Float_t         beamSpot_y;
   Float_t         beamSpot_z;
   Float_t         beamSpot_sigma_x;
   Float_t         beamSpot_sigma_y;
   Float_t         beamSpot_sigma_z;
   Int_t           mu_n;
   vector<float>   *mu_E;
   vector<float>   *mu_pt;
   vector<float>   *mu_m;
   vector<float>   *mu_eta;
   vector<float>   *mu_phi;
   vector<float>   *mu_px;
   vector<float>   *mu_py;
   vector<float>   *mu_pz;
   vector<float>   *mu_charge;
   vector<unsigned short> *mu_allauthor;
   vector<int>     *mu_hastrack;
   vector<float>   *mu_truth_dr;
   vector<float>   *mu_truth_E;
   vector<float>   *mu_truth_pt;
   vector<float>   *mu_truth_eta;
   vector<float>   *mu_truth_phi;
   vector<int>     *mu_truth_type;
   vector<int>     *mu_truth_status;
   vector<int>     *mu_truth_barcode;
   vector<int>     *mu_truth_mothertype;
   vector<int>     *mu_truth_motherbarcode;
   vector<int>     *mu_truth_matched;
   vector<int>     *mu_author;
   vector<float>   *mu_beta;
   vector<float>   *mu_isMuonLikelihood;
   vector<float>   *mu_matchchi2;
   vector<int>     *mu_matchndof;
   vector<float>   *mu_etcone20;
   vector<float>   *mu_etcone30;
   vector<float>   *mu_etcone40;
   vector<float>   *mu_nucone20;
   vector<float>   *mu_nucone30;
   vector<float>   *mu_nucone40;
   vector<float>   *mu_ptcone20;
   vector<float>   *mu_ptcone30;
   vector<float>   *mu_ptcone40;
   vector<float>   *mu_energyLossPar;
   vector<float>   *mu_energyLossErr;
   vector<float>   *mu_etCore;
   vector<float>   *mu_energyLossType;
   vector<unsigned short> *mu_caloMuonIdTag;
   vector<double>  *mu_caloLRLikelihood;
   vector<int>     *mu_bestMatch;
   vector<int>     *mu_isStandAloneMuon;
   vector<int>     *mu_isCombinedMuon;
   vector<int>     *mu_isLowPtReconstructedMuon;
   vector<int>     *mu_isSegmentTaggedMuon;
   vector<int>     *mu_isCaloMuonId;
   vector<int>     *mu_alsoFoundByLowPt;
   vector<int>     *mu_alsoFoundByCaloMuonId;
   vector<int>     *mu_loose;
   vector<int>     *mu_medium;
   vector<int>     *mu_tight;
   Int_t           diphoton_n;
   vector<vector<float> > *diphoton_fit_etaLead_zcommon;
   vector<vector<float> > *diphoton_fit_etaSublead_zcommon;
   vector<vector<float> > *diphoton_fit_zcommon;
   vector<vector<float> > *diphoton_fit_sigma_zcommon;
   vector<vector<float> > *diphoton_fit_vtxLikelihood;
   vector<vector<float> > *diphoton_fit_mgg;
   vector<vector<float> > *diphoton_fit_mgg_trueDir;
   vector<vector<float> > *diphoton_fit_mgg_trueE;
   vector<vector<int> > *diphoton_fit_fitFlag;
   vector<vector<float> > *diphoton_fit_ptgg;
   vector<vector<float> > *diphoton_fit_detagg;
   vector<vector<float> > *diphoton_fit_cosThetaStar;
   vector<int>     *diphoton_onejet_cutStatus;
   vector<int>     *diphoton_onejet_ok;
   vector<float>   *diphoton_onejet_mgg;
   vector<float>   *diphoton_onejet_mggj;
   vector<int>     *diphoton_twojet_cutStatus;
   vector<int>     *diphoton_twojet_ok;
   vector<float>   *diphoton_twojet_mgg;
   vector<float>   *diphoton_twojet_mjj;
   vector<float>   *diphoton_hggZWjj_SumTracksPT;
   vector<float>   *diphoton_hggZWjj_mjjZW_tracks;
   vector<float>   *diphoton_hggZWjj_mjjZW;
   vector<float>   *diphoton_hggZWjj_ZW7Njet;
   vector<float>   *diphoton_hggZWjj_PTjjZW;
   vector<float>   *diphoton_hggZWjj_PTjjZW_tracks;
   vector<float>   *diphoton_hggZWjj_hggZWjj_ok;
   vector<float>   *diphoton_hggZWjj_hggZWdeltaRjj;
   vector<vector<float> > *diphoton_hggZWjj_PTjZW;
   vector<vector<float> > *diphoton_hggZWjj_PTjZWTracks;
   vector<vector<float> > *diphoton_hggZWjj_EtajZW;
   vector<float>   *diphoton_hggZWjj_SumTracksPT4;
   vector<float>   *diphoton_hggZWjj_mjjZW4_tracks;
   vector<float>   *diphoton_hggZWjj_mjjZW4;
   vector<float>   *diphoton_hggZWjj_ZW4Njet;
   vector<float>   *diphoton_hggZWjj_PTjjZW4;
   vector<float>   *diphoton_hggZWjj_PTjjZW4_tracks;
   vector<float>   *diphoton_hggZWjj_DeltaRphotons;
   vector<vector<float> > *diphoton_hggZWjj_PTjZW4;
   vector<vector<float> > *diphoton_hggZWjj_PTjZW4Tracks;
   vector<vector<float> > *diphoton_hggZWjj_EtajZW4;
   vector<int>     *diphoton_hggZWjj_hggetmiss_ok;
   vector<int>     *diphoton_hggZWjj_hgglepton_ok;
   vector<int>     *diphoton_hggZWjj_DeltaRmujet;
   vector<float>   *diphoton_HPV_zcommon;
   vector<float>   *diphoton_HPV_sigma_zcommon;
   vector<float>   *diphoton_HPV_zcommon_primVtxLH;
   vector<float>   *diphoton_HPV_vtxLikelihood;
   vector<float>   *diphoton_HPV_etaLead_zcommon;
   vector<float>   *diphoton_HPV_etaSublead_zcommon;
   vector<float>   *diphoton_HPV_mgg;
   vector<float>   *diphoton_HPV_etaLead_zcommon_primVtxLH;
   vector<float>   *diphoton_HPV_etaSublead_zcommon_primVtxLH;
   vector<float>   *diphoton_HPV_mgg_primVtxLH;
   vector<float>   *diphoton_HPV_mgg_Ztruth;
   vector<float>   *diphoton_HPV_ptgg;
   vector<float>   *diphoton_HPV_detagg;
   vector<float>   *diphoton_HPV_dphigg;
   vector<float>   *diphoton_HPV_cosTh;
   vector<float>   *diphoton_HPV_cosThCS;
   vector<int>     *diphoton_ph_n;
   vector<vector<int> > *diphoton_ph_index;
   Int_t           jet_AntiKt4TopoEMJets_n;
   vector<float>   *jet_AntiKt4TopoEMJets_E;
   vector<float>   *jet_AntiKt4TopoEMJets_pt;
   vector<float>   *jet_AntiKt4TopoEMJets_m;
   vector<float>   *jet_AntiKt4TopoEMJets_eta;
   vector<float>   *jet_AntiKt4TopoEMJets_phi;
   vector<float>   *jet_AntiKt4TopoEMJets_EtaOrigin;
   vector<float>   *jet_AntiKt4TopoEMJets_PhiOrigin;
   vector<float>   *jet_AntiKt4TopoEMJets_MOrigin;
   vector<float>   *jet_AntiKt4TopoEMJets_EtaOriginEM;
   vector<float>   *jet_AntiKt4TopoEMJets_PhiOriginEM;
   vector<float>   *jet_AntiKt4TopoEMJets_MOriginEM;
   vector<float>   *jet_AntiKt4TopoEMJets_WIDTH;
   vector<float>   *jet_AntiKt4TopoEMJets_n90;
   vector<float>   *jet_AntiKt4TopoEMJets_Timing;
   vector<float>   *jet_AntiKt4TopoEMJets_LArQuality;
   vector<float>   *jet_AntiKt4TopoEMJets_nTrk;
   vector<float>   *jet_AntiKt4TopoEMJets_sumPtTrk;
   vector<float>   *jet_AntiKt4TopoEMJets_OriginIndex;
   vector<float>   *jet_AntiKt4TopoEMJets_HECQuality;
   vector<float>   *jet_AntiKt4TopoEMJets_NegativeE;
   vector<float>   *jet_AntiKt4TopoEMJets_AverageLArQF;
   vector<float>   *jet_AntiKt4TopoEMJets_YFlip12;
   vector<float>   *jet_AntiKt4TopoEMJets_YFlip23;
   vector<float>   *jet_AntiKt4TopoEMJets_BCH_CORR_CELL;
   vector<float>   *jet_AntiKt4TopoEMJets_BCH_CORR_DOTX;
   vector<float>   *jet_AntiKt4TopoEMJets_BCH_CORR_JET;
   vector<float>   *jet_AntiKt4TopoEMJets_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_AntiKt4TopoEMJets_ENG_BAD_CELLS;
   vector<float>   *jet_AntiKt4TopoEMJets_N_BAD_CELLS;
   vector<float>   *jet_AntiKt4TopoEMJets_N_BAD_CELLS_CORR;
   vector<float>   *jet_AntiKt4TopoEMJets_BAD_CELLS_CORR_E;
   vector<float>   *jet_AntiKt4TopoEMJets_NumTowers;
   vector<int>     *jet_AntiKt4TopoEMJets_SamplingMax;
   vector<float>   *jet_AntiKt4TopoEMJets_fracSamplingMax;
   vector<float>   *jet_AntiKt4TopoEMJets_hecf;
   vector<float>   *jet_AntiKt4TopoEMJets_tgap3f;
   vector<int>     *jet_AntiKt4TopoEMJets_isUgly;
   vector<int>     *jet_AntiKt4TopoEMJets_isBadLooseMinus;
   vector<int>     *jet_AntiKt4TopoEMJets_isBadLoose;
   vector<int>     *jet_AntiKt4TopoEMJets_isBadMedium;
   vector<int>     *jet_AntiKt4TopoEMJets_isBadTight;
   vector<float>   *jet_AntiKt4TopoEMJets_emfrac;
   vector<float>   *jet_AntiKt4TopoEMJets_Offset;
   vector<float>   *jet_AntiKt4TopoEMJets_EMJES;
   vector<float>   *jet_AntiKt4TopoEMJets_EMJES_EtaCorr;
   vector<float>   *jet_AntiKt4TopoEMJets_EMJESnooffset;
   vector<float>   *jet_AntiKt4TopoEMJets_GCWJES;
   vector<float>   *jet_AntiKt4TopoEMJets_GCWJES_EtaCorr;
   vector<float>   *jet_AntiKt4TopoEMJets_CB;
   vector<float>   *jet_AntiKt4TopoEMJets_LCJES;
   vector<float>   *jet_AntiKt4TopoEMJets_emscale_E;
   vector<float>   *jet_AntiKt4TopoEMJets_emscale_pt;
   vector<float>   *jet_AntiKt4TopoEMJets_emscale_m;
   vector<float>   *jet_AntiKt4TopoEMJets_emscale_eta;
   vector<float>   *jet_AntiKt4TopoEMJets_emscale_phi;
   vector<float>   *jet_AntiKt4TopoEMJets_jvtx_x;
   vector<float>   *jet_AntiKt4TopoEMJets_jvtx_y;
   vector<float>   *jet_AntiKt4TopoEMJets_jvtx_z;
   vector<float>   *jet_AntiKt4TopoEMJets_jvtxf;
   vector<vector<float> > *jet_AntiKt4TopoEMJets_jvtxfFull;
   vector<float>   *jet_AntiKt4TopoEMJets_GSCFactorF;
   vector<float>   *jet_AntiKt4TopoEMJets_WidthFraction;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_weight_Comb;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_weight_IP2D;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_weight_IP3D;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_weight_SV0;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_weight_SV1;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_weight_SV2;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_weight_JetProb;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_weight_SoftMuonTag;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_weight_JetFitterTagNN;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_weight_JetFitterCOMBNN;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_weight_GbbNN;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_truth_label;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_truth_dRminToB;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_truth_dRminToC;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_truth_dRminToT;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_truth_BHadronpdg;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_truth_vx_x;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_truth_vx_y;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_truth_vx_z;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_ip2d_pu;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_ip2d_pb;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_ip2d_isValid;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_ip2d_ntrk;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_ip3d_pu;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_ip3d_pb;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_ip3d_isValid;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_ip3d_ntrk;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv1_pu;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv1_pb;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_sv1_isValid;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv2_pu;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv2_pb;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_sv2_isValid;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_jfit_pu;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_jfit_pb;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_jfit_pc;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_jfit_isValid;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pu;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pb;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pc;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_isValid;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx1t;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_jfit_ntrkAtVx;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_jfit_efrc;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_jfit_mass;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_jfit_sig3d;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaPhi;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaEta;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_svp_isValid;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkv;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkj;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_svp_n2t;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_mass;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_efrc;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_x;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_y;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_z;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_err_x;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_err_y;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_err_z;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xy;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xz;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_cov_yz;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_svp_chi2;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_svp_ndof;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_svp_ntrk;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_sv0p_isValid;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkv;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkj;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_sv0p_n2t;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_mass;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_efrc;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_x;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_y;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_z;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_x;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_y;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_z;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xy;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xz;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_yz;
   vector<float>   *jet_AntiKt4TopoEMJets_flavor_component_sv0p_chi2;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_sv0p_ndof;
   vector<int>     *jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrk;
   vector<float>   *jet_AntiKt4TopoEMJets_el_dr;
   vector<int>     *jet_AntiKt4TopoEMJets_el_matched;
   vector<float>   *jet_AntiKt4TopoEMJets_mu_dr;
   vector<int>     *jet_AntiKt4TopoEMJets_mu_matched;
   vector<float>   *jet_AntiKt4TopoEMJets_L1_dr;
   vector<int>     *jet_AntiKt4TopoEMJets_L1_matched;
   vector<float>   *jet_AntiKt4TopoEMJets_L2_dr;
   vector<int>     *jet_AntiKt4TopoEMJets_L2_matched;
   vector<float>   *jet_AntiKt4TopoEMJets_EF_dr;
   vector<int>     *jet_AntiKt4TopoEMJets_EF_matched;
   Int_t           jet_AntiKt6TopoEMJets_n;
   vector<float>   *jet_AntiKt6TopoEMJets_E;
   vector<float>   *jet_AntiKt6TopoEMJets_pt;
   vector<float>   *jet_AntiKt6TopoEMJets_m;
   vector<float>   *jet_AntiKt6TopoEMJets_eta;
   vector<float>   *jet_AntiKt6TopoEMJets_phi;
   vector<float>   *jet_AntiKt6TopoEMJets_EtaOrigin;
   vector<float>   *jet_AntiKt6TopoEMJets_PhiOrigin;
   vector<float>   *jet_AntiKt6TopoEMJets_MOrigin;
   vector<float>   *jet_AntiKt6TopoEMJets_EtaOriginEM;
   vector<float>   *jet_AntiKt6TopoEMJets_PhiOriginEM;
   vector<float>   *jet_AntiKt6TopoEMJets_MOriginEM;
   vector<float>   *jet_AntiKt6TopoEMJets_WIDTH;
   vector<float>   *jet_AntiKt6TopoEMJets_n90;
   vector<float>   *jet_AntiKt6TopoEMJets_Timing;
   vector<float>   *jet_AntiKt6TopoEMJets_LArQuality;
   vector<float>   *jet_AntiKt6TopoEMJets_nTrk;
   vector<float>   *jet_AntiKt6TopoEMJets_sumPtTrk;
   vector<float>   *jet_AntiKt6TopoEMJets_OriginIndex;
   vector<float>   *jet_AntiKt6TopoEMJets_HECQuality;
   vector<float>   *jet_AntiKt6TopoEMJets_NegativeE;
   vector<float>   *jet_AntiKt6TopoEMJets_AverageLArQF;
   vector<float>   *jet_AntiKt6TopoEMJets_YFlip12;
   vector<float>   *jet_AntiKt6TopoEMJets_YFlip23;
   vector<float>   *jet_AntiKt6TopoEMJets_BCH_CORR_CELL;
   vector<float>   *jet_AntiKt6TopoEMJets_BCH_CORR_DOTX;
   vector<float>   *jet_AntiKt6TopoEMJets_BCH_CORR_JET;
   vector<float>   *jet_AntiKt6TopoEMJets_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_AntiKt6TopoEMJets_ENG_BAD_CELLS;
   vector<float>   *jet_AntiKt6TopoEMJets_N_BAD_CELLS;
   vector<float>   *jet_AntiKt6TopoEMJets_N_BAD_CELLS_CORR;
   vector<float>   *jet_AntiKt6TopoEMJets_BAD_CELLS_CORR_E;
   vector<float>   *jet_AntiKt6TopoEMJets_NumTowers;
   vector<int>     *jet_AntiKt6TopoEMJets_SamplingMax;
   vector<float>   *jet_AntiKt6TopoEMJets_fracSamplingMax;
   vector<float>   *jet_AntiKt6TopoEMJets_hecf;
   vector<float>   *jet_AntiKt6TopoEMJets_tgap3f;
   vector<int>     *jet_AntiKt6TopoEMJets_isUgly;
   vector<int>     *jet_AntiKt6TopoEMJets_isBadLooseMinus;
   vector<int>     *jet_AntiKt6TopoEMJets_isBadLoose;
   vector<int>     *jet_AntiKt6TopoEMJets_isBadMedium;
   vector<int>     *jet_AntiKt6TopoEMJets_isBadTight;
   vector<float>   *jet_AntiKt6TopoEMJets_emfrac;
   vector<float>   *jet_AntiKt6TopoEMJets_Offset;
   vector<float>   *jet_AntiKt6TopoEMJets_EMJES;
   vector<float>   *jet_AntiKt6TopoEMJets_EMJES_EtaCorr;
   vector<float>   *jet_AntiKt6TopoEMJets_EMJESnooffset;
   vector<float>   *jet_AntiKt6TopoEMJets_GCWJES;
   vector<float>   *jet_AntiKt6TopoEMJets_GCWJES_EtaCorr;
   vector<float>   *jet_AntiKt6TopoEMJets_CB;
   vector<float>   *jet_AntiKt6TopoEMJets_LCJES;
   vector<float>   *jet_AntiKt6TopoEMJets_emscale_E;
   vector<float>   *jet_AntiKt6TopoEMJets_emscale_pt;
   vector<float>   *jet_AntiKt6TopoEMJets_emscale_m;
   vector<float>   *jet_AntiKt6TopoEMJets_emscale_eta;
   vector<float>   *jet_AntiKt6TopoEMJets_emscale_phi;
   vector<float>   *jet_AntiKt6TopoEMJets_jvtx_x;
   vector<float>   *jet_AntiKt6TopoEMJets_jvtx_y;
   vector<float>   *jet_AntiKt6TopoEMJets_jvtx_z;
   vector<float>   *jet_AntiKt6TopoEMJets_jvtxf;
   vector<vector<float> > *jet_AntiKt6TopoEMJets_jvtxfFull;
   vector<float>   *jet_AntiKt6TopoEMJets_GSCFactorF;
   vector<float>   *jet_AntiKt6TopoEMJets_WidthFraction;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_weight_Comb;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_weight_IP2D;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_weight_IP3D;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_weight_SV0;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_weight_SV1;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_weight_SV2;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_weight_JetProb;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_weight_SoftMuonTag;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_weight_JetFitterTagNN;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_weight_JetFitterCOMBNN;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_weight_GbbNN;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_truth_label;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_truth_dRminToB;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_truth_dRminToC;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_truth_dRminToT;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_truth_BHadronpdg;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_truth_vx_x;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_truth_vx_y;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_truth_vx_z;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_ip2d_pu;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_ip2d_pb;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_ip2d_isValid;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_ip2d_ntrk;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_ip3d_pu;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_ip3d_pb;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_ip3d_isValid;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_ip3d_ntrk;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv1_pu;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv1_pb;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_sv1_isValid;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv2_pu;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv2_pb;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_sv2_isValid;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_jfit_pu;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_jfit_pb;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_jfit_pc;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_jfit_isValid;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pu;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pb;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pc;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_isValid;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx1t;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_jfit_ntrkAtVx;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_jfit_efrc;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_jfit_mass;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_jfit_sig3d;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaPhi;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaEta;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_svp_isValid;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkv;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkj;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_svp_n2t;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_mass;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_efrc;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_x;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_y;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_z;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_err_x;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_err_y;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_err_z;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xy;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xz;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_cov_yz;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_svp_chi2;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_svp_ndof;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_svp_ntrk;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_sv0p_isValid;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkv;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkj;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_sv0p_n2t;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_mass;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_efrc;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_x;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_y;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_z;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_x;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_y;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_z;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xy;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xz;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_yz;
   vector<float>   *jet_AntiKt6TopoEMJets_flavor_component_sv0p_chi2;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_sv0p_ndof;
   vector<int>     *jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrk;
   vector<float>   *jet_AntiKt6TopoEMJets_el_dr;
   vector<int>     *jet_AntiKt6TopoEMJets_el_matched;
   vector<float>   *jet_AntiKt6TopoEMJets_mu_dr;
   vector<int>     *jet_AntiKt6TopoEMJets_mu_matched;
   vector<float>   *jet_AntiKt6TopoEMJets_L1_dr;
   vector<int>     *jet_AntiKt6TopoEMJets_L1_matched;
   vector<float>   *jet_AntiKt6TopoEMJets_L2_dr;
   vector<int>     *jet_AntiKt6TopoEMJets_L2_matched;
   vector<float>   *jet_AntiKt6TopoEMJets_EF_dr;
   vector<int>     *jet_AntiKt6TopoEMJets_EF_matched;
   UInt_t          bunch_configID;
   Int_t           el_as_unconv_ph_n;
   vector<float>   *el_as_unconv_ph_cl_E;
   vector<float>   *el_as_unconv_ph_cl_pt;
   vector<float>   *el_as_unconv_ph_cl_eta;
   vector<float>   *el_as_unconv_ph_cl_phi;
   vector<float>   *el_as_unconv_ph_Es0;
   vector<float>   *el_as_unconv_ph_etas0;
   vector<float>   *el_as_unconv_ph_phis0;
   vector<float>   *el_as_unconv_ph_Es1;
   vector<float>   *el_as_unconv_ph_etas1;
   vector<float>   *el_as_unconv_ph_phis1;
   vector<float>   *el_as_unconv_ph_Es2;
   vector<float>   *el_as_unconv_ph_etas2;
   vector<float>   *el_as_unconv_ph_phis2;
   vector<float>   *el_as_unconv_ph_Es3;
   vector<float>   *el_as_unconv_ph_etas3;
   vector<float>   *el_as_unconv_ph_phis3;
   vector<unsigned int> *el_as_unconv_ph_isEM;
   vector<unsigned int> *el_as_unconv_ph_isEMLoose;
   vector<unsigned int> *el_as_unconv_ph_isEMMedium;
   vector<unsigned int> *el_as_unconv_ph_isEMTight;
   vector<int>     *el_as_unconv_ph_loose;
   vector<int>     *el_as_unconv_ph_tight;
   vector<int>     *el_as_unconv_ph_tightIso;
   vector<float>   *el_as_unconv_ph_Ethad;
   vector<float>   *el_as_unconv_ph_Ethad1;
   vector<float>   *el_as_unconv_ph_f1;
   vector<float>   *el_as_unconv_ph_f1core;
   vector<float>   *el_as_unconv_ph_Emins1;
   vector<float>   *el_as_unconv_ph_fside;
   vector<float>   *el_as_unconv_ph_Emax2;
   vector<float>   *el_as_unconv_ph_ws3;
   vector<float>   *el_as_unconv_ph_wstot;
   vector<float>   *el_as_unconv_ph_E132;
   vector<float>   *el_as_unconv_ph_E1152;
   vector<float>   *el_as_unconv_ph_emaxs1;
   vector<float>   *el_as_unconv_ph_deltaEs;
   vector<float>   *el_as_unconv_ph_E233;
   vector<float>   *el_as_unconv_ph_E237;
   vector<float>   *el_as_unconv_ph_E277;
   vector<float>   *el_as_unconv_ph_weta2;
   Int_t           el_as_conv_ph_n;
   vector<float>   *el_as_conv_ph_cl_E;
   vector<float>   *el_as_conv_ph_cl_pt;
   vector<float>   *el_as_conv_ph_cl_eta;
   vector<float>   *el_as_conv_ph_cl_phi;
   vector<float>   *el_as_conv_ph_Es0;
   vector<float>   *el_as_conv_ph_etas0;
   vector<float>   *el_as_conv_ph_phis0;
   vector<float>   *el_as_conv_ph_Es1;
   vector<float>   *el_as_conv_ph_etas1;
   vector<float>   *el_as_conv_ph_phis1;
   vector<float>   *el_as_conv_ph_Es2;
   vector<float>   *el_as_conv_ph_etas2;
   vector<float>   *el_as_conv_ph_phis2;
   vector<float>   *el_as_conv_ph_Es3;
   vector<float>   *el_as_conv_ph_etas3;
   vector<float>   *el_as_conv_ph_phis3;
   vector<unsigned int> *el_as_conv_ph_isEM;
   vector<unsigned int> *el_as_conv_ph_isEMLoose;
   vector<unsigned int> *el_as_conv_ph_isEMMedium;
   vector<unsigned int> *el_as_conv_ph_isEMTight;
   vector<int>     *el_as_conv_ph_loose;
   vector<int>     *el_as_conv_ph_tight;
   vector<int>     *el_as_conv_ph_tightIso;
   vector<float>   *el_as_conv_ph_Ethad;
   vector<float>   *el_as_conv_ph_Ethad1;
   vector<float>   *el_as_conv_ph_f1;
   vector<float>   *el_as_conv_ph_f1core;
   vector<float>   *el_as_conv_ph_Emins1;
   vector<float>   *el_as_conv_ph_fside;
   vector<float>   *el_as_conv_ph_Emax2;
   vector<float>   *el_as_conv_ph_ws3;
   vector<float>   *el_as_conv_ph_wstot;
   vector<float>   *el_as_conv_ph_E132;
   vector<float>   *el_as_conv_ph_E1152;
   vector<float>   *el_as_conv_ph_emaxs1;
   vector<float>   *el_as_conv_ph_deltaEs;
   vector<float>   *el_as_conv_ph_E233;
   vector<float>   *el_as_conv_ph_E237;
   vector<float>   *el_as_conv_ph_E277;
   vector<float>   *el_as_conv_ph_weta2;
   Int_t           ph_n;
   vector<float>   *ph_E;
   vector<float>   *ph_Et;
   vector<float>   *ph_pt;
   vector<float>   *ph_m;
   vector<float>   *ph_eta;
   vector<float>   *ph_phi;
   vector<float>   *ph_px;
   vector<float>   *ph_py;
   vector<float>   *ph_pz;
   vector<int>     *ph_author;
   vector<int>     *ph_isRecovered;
   vector<unsigned int> *ph_isEM;
   vector<unsigned int> *ph_isEMLoose;
   vector<unsigned int> *ph_isEMMedium;
   vector<unsigned int> *ph_isEMTight;
   vector<unsigned int> *ph_OQ;
   vector<unsigned int> *ph_OQRecalc;
   vector<int>     *ph_convFlag;
   vector<int>     *ph_isConv;
   vector<int>     *ph_nConv;
   vector<int>     *ph_nSingleTrackConv;
   vector<int>     *ph_nDoubleTrackConv;
   vector<int>     *ph_type;
   vector<int>     *ph_origin;
   vector<float>   *ph_truth_deltaRRecPhoton;
   vector<float>   *ph_truth_E;
   vector<float>   *ph_truth_pt;
   vector<float>   *ph_truth_eta;
   vector<float>   *ph_truth_phi;
   vector<int>     *ph_truth_type;
   vector<int>     *ph_truth_status;
   vector<int>     *ph_truth_barcode;
   vector<int>     *ph_truth_mothertype;
   vector<int>     *ph_truth_motherbarcode;
   vector<int>     *ph_truth_index;
   vector<int>     *ph_truth_matched;
   vector<int>     *ph_loose;
   vector<int>     *ph_looseIso;
   vector<int>     *ph_tight;
   vector<int>     *ph_tightIso;
   vector<int>     *ph_looseAR;
   vector<int>     *ph_looseARIso;
   vector<int>     *ph_tightAR;
   vector<int>     *ph_tightARIso;
   vector<int>     *ph_goodOQ;
   vector<float>   *ph_Ethad;
   vector<float>   *ph_Ethad1;
   vector<float>   *ph_E033;
   vector<float>   *ph_f1;
   vector<float>   *ph_f1core;
   vector<float>   *ph_Emins1;
   vector<float>   *ph_fside;
   vector<float>   *ph_Emax2;
   vector<float>   *ph_ws3;
   vector<float>   *ph_wstot;
   vector<float>   *ph_E132;
   vector<float>   *ph_E1152;
   vector<float>   *ph_emaxs1;
   vector<float>   *ph_deltaEs;
   vector<float>   *ph_E233;
   vector<float>   *ph_E237;
   vector<float>   *ph_E277;
   vector<float>   *ph_weta2;
   vector<float>   *ph_f3;
   vector<float>   *ph_f3core;
   vector<float>   *ph_rphiallcalo;
   vector<float>   *ph_Etcone45;
   vector<float>   *ph_Etcone15;
   vector<float>   *ph_Etcone20;
   vector<float>   *ph_Etcone25;
   vector<float>   *ph_Etcone30;
   vector<float>   *ph_Etcone35;
   vector<float>   *ph_Etcone40;
   vector<float>   *ph_ptcone20;
   vector<float>   *ph_ptcone30;
   vector<float>   *ph_ptcone40;
   vector<float>   *ph_nucone20;
   vector<float>   *ph_nucone30;
   vector<float>   *ph_nucone40;
   vector<float>   *ph_Etcone15_pt_corrected;
   vector<float>   *ph_Etcone20_pt_corrected;
   vector<float>   *ph_Etcone25_pt_corrected;
   vector<float>   *ph_Etcone30_pt_corrected;
   vector<float>   *ph_Etcone35_pt_corrected;
   vector<float>   *ph_Etcone40_pt_corrected;
   vector<float>   *ph_convanglematch;
   vector<float>   *ph_convtrackmatch;
   vector<int>     *ph_hasconv;
   vector<float>   *ph_convvtxx;
   vector<float>   *ph_convvtxy;
   vector<float>   *ph_convvtxz;
   vector<float>   *ph_Rconv;
   vector<float>   *ph_zconv;
   vector<float>   *ph_convvtxchi2;
   vector<float>   *ph_pt1conv;
   vector<int>     *ph_convtrk1nBLHits;
   vector<int>     *ph_convtrk1nPixHits;
   vector<int>     *ph_convtrk1nSCTHits;
   vector<int>     *ph_convtrk1nTRTHits;
   vector<float>   *ph_pt2conv;
   vector<int>     *ph_convtrk2nBLHits;
   vector<int>     *ph_convtrk2nPixHits;
   vector<int>     *ph_convtrk2nSCTHits;
   vector<int>     *ph_convtrk2nTRTHits;
   vector<float>   *ph_ptconv;
   vector<float>   *ph_pzconv;
   vector<float>   *ph_reta;
   vector<float>   *ph_rphi;
   vector<float>   *ph_EtringnoisedR03sig2;
   vector<float>   *ph_EtringnoisedR03sig3;
   vector<float>   *ph_EtringnoisedR03sig4;
   vector<double>  *ph_isolationlikelihoodjets;
   vector<double>  *ph_isolationlikelihoodhqelectrons;
   vector<double>  *ph_loglikelihood;
   vector<double>  *ph_photonweight;
   vector<double>  *ph_photonbgweight;
   vector<double>  *ph_neuralnet;
   vector<double>  *ph_Hmatrix;
   vector<double>  *ph_Hmatrix5;
   vector<double>  *ph_adaboost;
   vector<float>   *ph_zvertex;
   vector<float>   *ph_errz;
   vector<float>   *ph_etap;
   vector<float>   *ph_depth;
   vector<float>   *ph_cl_E;
   vector<float>   *ph_cl_pt;
   vector<float>   *ph_cl_eta;
   vector<float>   *ph_cl_phi;
   vector<float>   *ph_Es0;
   vector<float>   *ph_etas0;
   vector<float>   *ph_phis0;
   vector<float>   *ph_Es1;
   vector<float>   *ph_etas1;
   vector<float>   *ph_phis1;
   vector<float>   *ph_Es2;
   vector<float>   *ph_etas2;
   vector<float>   *ph_phis2;
   vector<float>   *ph_Es3;
   vector<float>   *ph_etas3;
   vector<float>   *ph_phis3;
   vector<float>   *ph_time;
   vector<float>   *ph_rawcl_Es0;
   vector<float>   *ph_rawcl_etas0;
   vector<float>   *ph_rawcl_phis0;
   vector<float>   *ph_rawcl_Es1;
   vector<float>   *ph_rawcl_etas1;
   vector<float>   *ph_rawcl_phis1;
   vector<float>   *ph_rawcl_Es2;
   vector<float>   *ph_rawcl_etas2;
   vector<float>   *ph_rawcl_phis2;
   vector<float>   *ph_rawcl_Es3;
   vector<float>   *ph_rawcl_etas3;
   vector<float>   *ph_rawcl_phis3;
   vector<float>   *ph_rawcl_E;
   vector<float>   *ph_rawcl_pt;
   vector<float>   *ph_rawcl_eta;
   vector<float>   *ph_rawcl_phi;
   vector<int>     *ph_truth_isConv;
   vector<int>     *ph_truth_isBrem;
   vector<int>     *ph_truth_isFromHardProc;
   vector<int>     *ph_truth_isPhotonFromHardProc;
   vector<float>   *ph_truth_Rconv;
   vector<float>   *ph_truth_zconv;
   vector<float>   *ph_deltaEmax2;
   vector<float>   *ph_calibHitsShowerDepth;
   vector<unsigned int> *ph_isIso;
   vector<float>   *ph_mvaptcone20;
   vector<float>   *ph_mvaptcone30;
   vector<float>   *ph_mvaptcone40;
   vector<float>   *ph_topoEtcone20;
   vector<float>   *ph_topoEtcone40;
   vector<float>   *ph_topoEtcone60;
   vector<float>   *ph_jet_dr;
   vector<float>   *ph_jet_E;
   vector<float>   *ph_jet_pt;
   vector<float>   *ph_jet_m;
   vector<float>   *ph_jet_eta;
   vector<float>   *ph_jet_phi;
   vector<float>   *ph_jet_truth_dr;
   vector<float>   *ph_jet_truth_E;
   vector<float>   *ph_jet_truth_pt;
   vector<float>   *ph_jet_truth_m;
   vector<float>   *ph_jet_truth_eta;
   vector<float>   *ph_jet_truth_phi;
   vector<int>     *ph_jet_truth_matched;
   vector<int>     *ph_jet_matched;
   vector<float>   *ph_convIP;
   vector<float>   *ph_convIPRev;
   vector<float>   *ph_ptIsolationCone;
   vector<float>   *ph_ptIsolationConePhAngle;
   vector<float>   *ph_Etcone40_ED_corrected;
   vector<float>   *ph_Etcone40_corrected;
   vector<float>   *ph_ES0_real;
   vector<float>   *ph_ES1_real;
   vector<float>   *ph_ES2_real;
   vector<float>   *ph_ES3_real;
   vector<float>   *ph_EcellS0;
   vector<float>   *ph_etacellS0;
   vector<float>   *ph_HPV_eta;
   vector<float>   *ph_HPV_sigma_eta;
   vector<float>   *ph_HPV_convTrk1_zvertex;
   vector<float>   *ph_HPV_convTrk2_zvertex;
   vector<float>   *ph_HPV_convTrk1_sigma_zvertex;
   vector<float>   *ph_HPV_convTrk2_sigma_zvertex;
   vector<float>   *ph_CaloPointing_zvertex;
   vector<float>   *ph_CaloPointing_sigma_zvertex;
   vector<float>   *ph_CaloPointing_eta;
   vector<float>   *ph_CaloPointing_sigma_eta;
   vector<float>   *ph_HPV_zvertex;
   vector<float>   *ph_HPV_sigma_zvertex;
   vector<float>   *ph_HPV_zvertex_neutral;
   vector<float>   *ph_HPV_zvertex_charged;
   vector<float>   *ph_HPV_sigma_zvertex_neutral;
   vector<float>   *ph_HPV_sigma_zvertex_charged;
   vector<float>   *ph_ambiguityResult;
   vector<float>   *ph_itune1;
   vector<float>   *ph_itune2;
   vector<float>   *ph_itune3;
   vector<float>   *ph_trackIsol;
   vector<float>   *ph_PtIsolationCone_woIC;
   vector<float>   *ph_PtIsolationConePhAngle_woIC;
   vector<float>   *ph_trackIsol_woIC;
   vector<int>     *ph_selected;
   vector<float>   *ph_parton_pt_max_MC;
   vector<float>   *ph_parton_eta_MC;
   vector<float>   *ph_parton_phi_MC;
   vector<float>   *ph_parton_barcode_MC;
   vector<float>   *ph_parton_pdg_MC;
   vector<float>   *ph_etaS2_MC;
   vector<float>   *ph_phiS2_MC;
   vector<float>   *ph_XConv_MC;
   vector<float>   *ph_YConv_MC;
   vector<int>     *ph_isG4part;
   vector<float>   *ph_partonIsolation15_UE_MC;
   vector<float>   *ph_partonIsolation20_UE_MC;
   vector<float>   *ph_partonIsolation25_UE_MC;
   vector<float>   *ph_partonIsolation30_UE_MC;
   vector<float>   *ph_partonIsolation35_UE_MC;
   vector<float>   *ph_partonIsolation40_UE_MC;
   vector<float>   *ph_partonIsolation45_UE_MC;
   vector<float>   *ph_partonIsolation60_UE_MC;
   vector<float>   *ph_partonIsolation15_MC;
   vector<float>   *ph_partonIsolation20_MC;
   vector<float>   *ph_partonIsolation25_MC;
   vector<float>   *ph_partonIsolation30_MC;
   vector<float>   *ph_partonIsolation35_MC;
   vector<float>   *ph_partonIsolation40_MC;
   vector<float>   *ph_partonIsolation45_MC;
   vector<float>   *ph_partonIsolation60_MC;
   vector<float>   *ph_particleIsolation40_MC;
   vector<float>   *ph_particleIsolation40_ED_corrected_MC;
   vector<float>   *ph_particleIsolation40_ED_corrected_reco_MC;
   vector<unsigned int> *ph_isGoodOQbits;
   vector<int>     *ph_isGoodOQphoton;
   vector<int>     *ph_isGoodOQelectron;
   vector<float>   *ph_convTrk1_chi2;
   vector<float>   *ph_convTrk2_chi2;
   vector<float>   *ph_convTrk1_expectHitInBLayer;
   vector<float>   *ph_convTrk1_numTRTOutliers;
   vector<float>   *ph_convTrk1_numTRTHTHits;
   vector<float>   *ph_convTrk1_numTRTHTOutliers;
   vector<float>   *ph_convTrk2_expectHitInBLayer;
   vector<float>   *ph_convTrk2_numTRTOutliers;
   vector<float>   *ph_convTrk2_numTRTHTHits;
   vector<float>   *ph_convTrk2_numTRTHTOutliers;
   vector<float>   *ph_convTrk1_trtPID;
   vector<float>   *ph_convTrk2_trtPID;
   vector<float>   *ph_convTrk1_trtPIDHT;
   vector<float>   *ph_convTrk2_trtPIDHT;
   vector<float>   *ph_convTrk1_trtPIDToT;
   vector<float>   *ph_convTrk2_trtPIDToT;
   vector<float>   *ph_convTrk1_ToTvar;
   vector<float>   *ph_convTrk2_ToTvar;
   vector<float>   *ph_convTrk1_trtRatioHT;
   vector<float>   *ph_convTrk2_trtRatioHT;
   vector<float>   *ph_convTrk1_charge;
   vector<float>   *ph_convTrk2_charge;
   vector<float>   *ph_convTrk1_DeltaEta_track_calo;
   vector<float>   *ph_convTrk2_DeltaEta_track_calo;
   vector<float>   *ph_convTrk1_DeltaPhi_track_calo;
   vector<float>   *ph_convTrk2_DeltaPhi_track_calo;
   vector<float>   *ph_XConv;
   vector<float>   *ph_YConv;
   vector<float>   *ph_conv_chi2;
   vector<float>   *ph_conv_dcottheta;
   vector<float>   *ph_conv_dphi;
   vector<float>   *ph_conv_dist;
   vector<float>   *ph_conv_DR1R2;
   vector<float>   *ph_conv_p;
   vector<float>   *ph_conv_phi;
   vector<float>   *ph_conv_theta;
   vector<float>   *ph_conv_perr;
   vector<float>   *ph_conv_phierr;
   vector<float>   *ph_conv_thetaerr;
   vector<float>   *ph_conv_GSF_p;
   vector<float>   *ph_conv_GSF_phi;
   vector<float>   *ph_conv_GSF_theta;
   vector<float>   *ph_conv_GSF_perr;
   vector<float>   *ph_conv_GSF_phierr;
   vector<float>   *ph_conv_GSF_thetaerr;
   vector<float>   *ph_conv_DNA_p;
   vector<float>   *ph_conv_DNA_phi;
   vector<float>   *ph_conv_DNA_theta;
   vector<float>   *ph_conv_DNA_perr;
   vector<float>   *ph_conv_DNA_phierr;
   vector<float>   *ph_conv_DNA_thetaerr;
   vector<float>   *ph_Etcone10_ED_corrected;
   vector<float>   *ph_Etcone15_ED_corrected;
   vector<float>   *ph_Etcone20_ED_corrected;
   vector<float>   *ph_Etcone25_ED_corrected;
   vector<float>   *ph_Etcone30_ED_corrected;
   vector<float>   *ph_Etcone35_ED_corrected;
   vector<float>   *ph_Etcone10_corrected;
   vector<float>   *ph_Etcone15_corrected;
   vector<float>   *ph_Etcone20_corrected;
   vector<float>   *ph_Etcone25_corrected;
   vector<float>   *ph_Etcone30_corrected;
   vector<float>   *ph_Etcone35_corrected;
   vector<float>   *ph_Etcone10_ED_corrected_new;
   vector<float>   *ph_Etcone15_ED_corrected_new;
   vector<float>   *ph_Etcone20_ED_corrected_new;
   vector<float>   *ph_Etcone25_ED_corrected_new;
   vector<float>   *ph_Etcone30_ED_corrected_new;
   vector<float>   *ph_Etcone35_ED_corrected_new;
   vector<float>   *ph_Etcone40_ED_corrected_new;
   vector<float>   *ph_Etcone10_corrected_new;
   vector<float>   *ph_Etcone15_corrected_new;
   vector<float>   *ph_Etcone20_corrected_new;
   vector<float>   *ph_Etcone25_corrected_new;
   vector<float>   *ph_Etcone30_corrected_new;
   vector<float>   *ph_Etcone35_corrected_new;
   vector<float>   *ph_Etcone40_corrected_new;
   vector<float>   *ph_cells35_Etcone20;
   vector<float>   *ph_cells35_Etcone30;
   vector<float>   *ph_cells35_Etcone40;
   vector<float>   *ph_cells55_Etcone20;
   vector<float>   *ph_cells55_Etcone30;
   vector<float>   *ph_cells55_Etcone40;
   vector<float>   *ph_Etcone20Iso;
   vector<float>   *ph_Etcone30Iso;
   vector<float>   *ph_Etcone40Iso;
   vector<float>   *ph_cells35_Etcone20Iso;
   vector<float>   *ph_cells35_Etcone30Iso;
   vector<float>   *ph_cells35_Etcone40Iso;
   vector<float>   *ph_cells55_Etcone20Iso;
   vector<float>   *ph_cells55_Etcone30Iso;
   vector<float>   *ph_cells55_Etcone40Iso;
   vector<float>   *ph_ED_median;
   vector<float>   *ph_ED_sigma;
   vector<int>     *ph_ED_Njets;
   vector<float>   *ph_ED_median_new;
   vector<float>   *ph_ED_sigma_new;
   vector<int>     *ph_ED_Njets_new;
   vector<float>   *ph_transmin_etcone40;
   vector<float>   *ph_transmax_etcone40;
   vector<float>   *ph_transmin_etcone100;
   vector<float>   *ph_transmax_etcone100;
   vector<float>   *ph_transmin;
   vector<float>   *ph_transmax;
   vector<float>   *ph_transmin_loweta;
   vector<float>   *ph_transmax_loweta;
   vector<float>   *ph_topodr;
   vector<float>   *ph_topopt;
   vector<float>   *ph_topoeta;
   vector<float>   *ph_topophi;
   vector<float>   *ph_topoEMsamplings_E;
   vector<float>   *ph_topoEMsamplings_Et;
   vector<float>   *ph_topoEMsamplings_eta;
   vector<float>   *ph_topoEMsamplings_phi;
   vector<float>   *ph_topoEMsamplings_uncalibrated_E;
   vector<float>   *ph_topoEMsamplings_uncalibrated_Et;
   vector<float>   *ph_topoEMsamplings_uncalibrated_eta;
   vector<float>   *ph_topoEMsamplings_uncalibrated_phi;
   vector<int>     *ph_topomatched;
   vector<float>   *ph_topoEMdr;
   vector<float>   *ph_topoEMpt;
   vector<float>   *ph_topoEMeta;
   vector<float>   *ph_topoEMphi;
   vector<int>     *ph_topoEMmatched;
   vector<float>   *ph_EF_dr;
   vector<int>     *ph_EF_index;
   vector<float>   *ph_L2_dr;
   vector<int>     *ph_L2_index;
   vector<float>   *ph_L1_dr;
   vector<int>     *ph_L1_index;
   vector<float>   *ph_jet_AntiKt4TopoEMJets_dr;
   vector<int>     *ph_jet_AntiKt4TopoEMJets_index;
   vector<int>     *ph_jet_AntiKt4TopoEMJets_matched;
   vector<float>   *ph_jet_AntiKt6TopoEMJets_dr;
   vector<int>     *ph_jet_AntiKt6TopoEMJets_index;
   vector<int>     *ph_jet_AntiKt6TopoEMJets_matched;
   vector<int>     *ph_el_index;
   vector<float>   *ph_etconoisedR04Sig2;
   vector<float>   *ph_etconoisedR04Sig3;
   vector<float>   *ph_topoEtcone30;
   vector<float>   *ph_topoEtcone50;
   vector<float>   *ph_topoEMEtcone20;
   vector<float>   *ph_topoEMEtcone30;
   vector<float>   *ph_topoEMEtcone40;
   vector<float>   *ph_topoEMEtcone50;
   vector<float>   *ph_topoEMEtcone60;
   vector<int>     *ph_convTrk_n;
   vector<vector<int> > *ph_convTrk_index;
   vector<vector<int> > *ph_convTrk_fitter;
   vector<vector<int> > *ph_convTrk_patternReco1;
   vector<vector<int> > *ph_convTrk_patternReco2;
   vector<vector<int> > *ph_convTrk_seedFinder;
   vector<int>     *ph_vx_n;
   vector<vector<vector<float> > > *ph_vx_convTrk_weight;
   vector<vector<int> > *ph_vx_convTrk_n;
   vector<vector<vector<int> > > *ph_vx_convTrk_index;
   vector<vector<vector<int> > > *ph_vx_convTrk_fitter;
   vector<vector<vector<int> > > *ph_vx_convTrk_patternReco1;
   vector<vector<vector<int> > > *ph_vx_convTrk_patternReco2;
   vector<vector<vector<int> > > *ph_vx_convTrk_seedFinder;
   vector<float>   *ph_topoPosEtcone20;
   vector<float>   *ph_topoPosEtcone30;
   vector<float>   *ph_topoPosEtcone40;
   vector<float>   *ph_topoPosEtcone50;
   vector<float>   *ph_topoPosEtcone60;
   vector<float>   *ph_topoEMPosEtcone20;
   vector<float>   *ph_topoEMPosEtcone30;
   vector<float>   *ph_topoEMPosEtcone40;
   vector<float>   *ph_topoEMPosEtcone50;
   vector<float>   *ph_topoEMPosEtcone60;
   vector<float>   *ph_topoEtcone20_TileGap3;
   vector<float>   *ph_topoEtcone30_TileGap3;
   vector<float>   *ph_topoEtcone40_TileGap3;
   vector<float>   *ph_topoEtcone50_TileGap3;
   vector<float>   *ph_topoEtcone60_TileGap3;
   vector<float>   *ph_topoPosEtcone20_TileGap3;
   vector<float>   *ph_topoPosEtcone30_TileGap3;
   vector<float>   *ph_topoPosEtcone40_TileGap3;
   vector<float>   *ph_topoPosEtcone50_TileGap3;
   vector<float>   *ph_topoPosEtcone60_TileGap3;
   vector<float>   *ph_Eraw57;
   vector<float>   *ph_etaraw57;
   vector<int>     *ph_NN_passes;
   vector<float>   *ph_NN_discriminant;
   Int_t           el_n;
   vector<float>   *el_E;
   vector<float>   *el_Et;
   vector<float>   *el_pt;
   vector<float>   *el_m;
   vector<float>   *el_eta;
   vector<float>   *el_phi;
   vector<float>   *el_px;
   vector<float>   *el_py;
   vector<float>   *el_pz;
   vector<float>   *el_charge;
   vector<int>     *el_author;
   vector<unsigned int> *el_isEM;
   vector<unsigned int> *el_isEMLoose;
   vector<unsigned int> *el_isEMMedium;
   vector<unsigned int> *el_isEMTight;
   vector<unsigned int> *el_OQ;
   vector<int>     *el_convFlag;
   vector<int>     *el_isConv;
   vector<int>     *el_nConv;
   vector<int>     *el_nSingleTrackConv;
   vector<int>     *el_nDoubleTrackConv;
   vector<unsigned int> *el_OQRecalc;
   vector<int>     *el_type;
   vector<int>     *el_origin;
   vector<int>     *el_typebkg;
   vector<int>     *el_originbkg;
   vector<float>   *el_truth_E;
   vector<float>   *el_truth_pt;
   vector<float>   *el_truth_eta;
   vector<float>   *el_truth_phi;
   vector<int>     *el_truth_type;
   vector<int>     *el_truth_status;
   vector<int>     *el_truth_barcode;
   vector<int>     *el_truth_mothertype;
   vector<int>     *el_truth_motherbarcode;
   vector<int>     *el_truth_hasHardBrem;
   vector<int>     *el_truth_index;
   vector<int>     *el_truth_matched;
   vector<int>     *el_mediumWithoutTrack;
   vector<int>     *el_mediumIsoWithoutTrack;
   vector<int>     *el_tightWithoutTrack;
   vector<int>     *el_tightIsoWithoutTrack;
   vector<int>     *el_loose;
   vector<int>     *el_looseIso;
   vector<int>     *el_medium;
   vector<int>     *el_mediumIso;
   vector<int>     *el_tight;
   vector<int>     *el_tightIso;
   vector<int>     *el_loosePP;
   vector<int>     *el_loosePPIso;
   vector<int>     *el_mediumPP;
   vector<int>     *el_mediumPPIso;
   vector<int>     *el_tightPP;
   vector<int>     *el_tightPPIso;
   vector<int>     *el_goodOQ;
   vector<float>   *el_Ethad;
   vector<float>   *el_Ethad1;
   vector<float>   *el_f1;
   vector<float>   *el_f1core;
   vector<float>   *el_Emins1;
   vector<float>   *el_fside;
   vector<float>   *el_Emax2;
   vector<float>   *el_ws3;
   vector<float>   *el_wstot;
   vector<float>   *el_emaxs1;
   vector<float>   *el_deltaEs;
   vector<float>   *el_E233;
   vector<float>   *el_E237;
   vector<float>   *el_E277;
   vector<float>   *el_weta2;
   vector<float>   *el_f3;
   vector<float>   *el_f3core;
   vector<float>   *el_rphiallcalo;
   vector<float>   *el_Etcone45;
   vector<float>   *el_Etcone15;
   vector<float>   *el_Etcone20;
   vector<float>   *el_Etcone25;
   vector<float>   *el_Etcone30;
   vector<float>   *el_Etcone35;
   vector<float>   *el_Etcone40;
   vector<float>   *el_ptcone20;
   vector<float>   *el_ptcone30;
   vector<float>   *el_ptcone40;
   vector<float>   *el_nucone20;
   vector<float>   *el_nucone30;
   vector<float>   *el_nucone40;
   vector<float>   *el_convanglematch;
   vector<float>   *el_convtrackmatch;
   vector<int>     *el_hasconv;
   vector<float>   *el_convvtxx;
   vector<float>   *el_convvtxy;
   vector<float>   *el_convvtxz;
   vector<float>   *el_Rconv;
   vector<float>   *el_zconv;
   vector<float>   *el_convvtxchi2;
   vector<float>   *el_pt1conv;
   vector<int>     *el_convtrk1nBLHits;
   vector<int>     *el_convtrk1nPixHits;
   vector<int>     *el_convtrk1nSCTHits;
   vector<int>     *el_convtrk1nTRTHits;
   vector<float>   *el_pt2conv;
   vector<int>     *el_convtrk2nBLHits;
   vector<int>     *el_convtrk2nPixHits;
   vector<int>     *el_convtrk2nSCTHits;
   vector<int>     *el_convtrk2nTRTHits;
   vector<float>   *el_ptconv;
   vector<float>   *el_pzconv;
   vector<float>   *el_pos7;
   vector<float>   *el_etacorrmag;
   vector<float>   *el_deltaeta1;
   vector<float>   *el_deltaeta2;
   vector<float>   *el_deltaphi2;
   vector<float>   *el_deltaphiRescaled;
   vector<float>   *el_deltaPhiRot;
   vector<float>   *el_expectHitInBLayer;
   vector<float>   *el_trackd0_physics;
   vector<float>   *el_etaSampling1;
   vector<float>   *el_reta;
   vector<float>   *el_rphi;
   vector<int>     *el_refittedTrack_n;
   vector<float>   *el_firstEdens;
   vector<float>   *el_cellmaxfrac;
   vector<float>   *el_longitudinal;
   vector<float>   *el_secondlambda;
   vector<float>   *el_lateral;
   vector<float>   *el_secondR;
   vector<float>   *el_centerlambda;
   vector<float>   *el_Es0;
   vector<float>   *el_etas0;
   vector<float>   *el_phis0;
   vector<float>   *el_Es1;
   vector<float>   *el_etas1;
   vector<float>   *el_phis1;
   vector<float>   *el_Es2;
   vector<float>   *el_etas2;
   vector<float>   *el_phis2;
   vector<float>   *el_Es3;
   vector<float>   *el_etas3;
   vector<float>   *el_phis3;
   vector<float>   *el_E_PreSamplerB;
   vector<float>   *el_E_EMB1;
   vector<float>   *el_E_EMB2;
   vector<float>   *el_E_EMB3;
   vector<float>   *el_E_PreSamplerE;
   vector<float>   *el_E_EME1;
   vector<float>   *el_E_EME2;
   vector<float>   *el_E_EME3;
   vector<float>   *el_E_HEC0;
   vector<float>   *el_E_HEC1;
   vector<float>   *el_E_HEC2;
   vector<float>   *el_E_HEC3;
   vector<float>   *el_E_TileBar0;
   vector<float>   *el_E_TileBar1;
   vector<float>   *el_E_TileBar2;
   vector<float>   *el_E_TileGap1;
   vector<float>   *el_E_TileGap2;
   vector<float>   *el_E_TileGap3;
   vector<float>   *el_E_TileExt0;
   vector<float>   *el_E_TileExt1;
   vector<float>   *el_E_TileExt2;
   vector<float>   *el_E_FCAL0;
   vector<float>   *el_E_FCAL1;
   vector<float>   *el_E_FCAL2;
   vector<float>   *el_cl_E;
   vector<float>   *el_cl_pt;
   vector<float>   *el_cl_eta;
   vector<float>   *el_cl_phi;
   vector<float>   *el_time;
   vector<float>   *el_trackd0;
   vector<float>   *el_trackz0;
   vector<float>   *el_trackphi;
   vector<float>   *el_tracktheta;
   vector<float>   *el_trackqoverp;
   vector<float>   *el_trackpt;
   vector<float>   *el_tracketa;
   vector<int>     *el_nBLHits;
   vector<int>     *el_nPixHits;
   vector<int>     *el_nSCTHits;
   vector<int>     *el_nTRTHits;
   vector<int>     *el_nTRTHighTHits;
   vector<int>     *el_nPixHoles;
   vector<int>     *el_nSCTHoles;
   vector<int>     *el_nTRTHoles;
   vector<int>     *el_nBLSharedHits;
   vector<int>     *el_nPixSharedHits;
   vector<int>     *el_nSCTSharedHits;
   vector<int>     *el_nBLayerOutliers;
   vector<int>     *el_nPixelOutliers;
   vector<int>     *el_nSCTOutliers;
   vector<int>     *el_nTRTOutliers;
   vector<int>     *el_nTRTHighTOutliers;
   vector<int>     *el_expectBLayerHit;
   vector<int>     *el_nSiHits;
   vector<float>   *el_TRTHighTHitsRatio;
   vector<float>   *el_TRTHighTOutliersRatio;
   vector<float>   *el_pixeldEdx;
   vector<int>     *el_nGoodHitsPixeldEdx;
   vector<float>   *el_massPixeldEdx;
   vector<vector<float> > *el_likelihoodsPixeldEdx;
   vector<float>   *el_eProbabilityComb;
   vector<float>   *el_eProbabilityHT;
   vector<float>   *el_eProbabilityToT;
   vector<float>   *el_eProbabilityBrem;
   vector<float>   *el_vertweight;
   vector<float>   *el_trackd0beam;
   vector<float>   *el_trackz0beam;
   vector<float>   *el_tracksigd0beam;
   vector<float>   *el_tracksigz0beam;
   vector<float>   *el_trackd0pv;
   vector<float>   *el_trackz0pv;
   vector<float>   *el_tracksigd0pv;
   vector<float>   *el_tracksigz0pv;
   vector<float>   *el_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *el_trackd0pvunbiased;
   vector<float>   *el_trackz0pvunbiased;
   vector<float>   *el_tracksigd0pvunbiased;
   vector<float>   *el_tracksigz0pvunbiased;
   vector<int>     *el_hastrack;
   vector<float>   *el_deltaEmax2;
   vector<float>   *el_calibHitsShowerDepth;
   vector<unsigned int> *el_isIso;
   vector<float>   *el_mvaptcone20;
   vector<float>   *el_mvaptcone30;
   vector<float>   *el_mvaptcone40;
   vector<float>   *el_EF_dr;
   vector<int>     *el_EF_index;
   vector<float>   *el_L2_dr;
   vector<int>     *el_L2_index;
   vector<float>   *el_L1_dr;
   vector<int>     *el_L1_index;
   vector<float>   *el_jet_AntiKt4TopoEMJets_dr;
   vector<int>     *el_jet_AntiKt4TopoEMJets_index;
   vector<int>     *el_jet_AntiKt4TopoEMJets_matched;
   vector<float>   *el_jet_AntiKt6TopoEMJets_dr;
   vector<int>     *el_jet_AntiKt6TopoEMJets_index;
   vector<int>     *el_jet_AntiKt6TopoEMJets_matched;
   vector<float>   *el_EtringnoisedR03sig2;
   vector<float>   *el_EtringnoisedR03sig3;
   vector<float>   *el_EtringnoisedR03sig4;
   vector<float>   *el_zvertex;
   vector<float>   *el_errz;
   vector<float>   *el_etap;
   vector<float>   *el_depth;
   vector<float>   *el_Etcone15_pt_corrected;
   vector<float>   *el_Etcone20_pt_corrected;
   vector<float>   *el_Etcone25_pt_corrected;
   vector<float>   *el_Etcone30_pt_corrected;
   vector<float>   *el_Etcone35_pt_corrected;
   vector<float>   *el_Etcone40_pt_corrected;
   vector<float>   *el_ES0_real;
   vector<float>   *el_ES1_real;
   vector<float>   *el_ES2_real;
   vector<float>   *el_ES3_real;
   vector<float>   *el_EcellS0;
   vector<float>   *el_etacellS0;
   vector<float>   *el_CaloPointing_zvertex;
   vector<float>   *el_CaloPointing_sigma_zvertex;
   vector<float>   *el_CaloPointing_eta;
   vector<float>   *el_CaloPointing_sigma_eta;
   vector<float>   *el_ambiguityResult;
   vector<float>   *el_itune1;
   vector<float>   *el_itune2;
   vector<float>   *el_itune3;
   vector<float>   *el_trackIsol;
   vector<float>   *el_PtIsolationCone_woIC;
   vector<float>   *el_trackIsol_woIC;
   vector<unsigned int> *el_isGoodOQbits;
   vector<int>     *el_isGoodOQphoton;
   vector<int>     *el_isGoodOQelectron;
   vector<float>   *el_Etcone20_ED_corrected;
   vector<float>   *el_Etcone30_ED_corrected;
   vector<float>   *el_Etcone40_ED_corrected;
   vector<float>   *el_Etcone20_corrected;
   vector<float>   *el_Etcone30_corrected;
   vector<float>   *el_Etcone40_corrected;
   vector<float>   *el_Etcone20_ED_corrected_new;
   vector<float>   *el_Etcone30_ED_corrected_new;
   vector<float>   *el_Etcone40_ED_corrected_new;
   vector<float>   *el_Etcone20_corrected_new;
   vector<float>   *el_Etcone30_corrected_new;
   vector<float>   *el_Etcone40_corrected_new;
   vector<float>   *el_ED_median;
   vector<float>   *el_ED_sigma;
   vector<int>     *el_ED_Njets;
   vector<float>   *el_ED_median_new;
   vector<float>   *el_ED_sigma_new;
   vector<int>     *el_ED_Njets_new;
   vector<float>   *el_transmin_etcone40;
   vector<float>   *el_transmax_etcone40;
   vector<float>   *el_transmin_etcone100;
   vector<float>   *el_transmax_etcone100;
   vector<float>   *el_transmin;
   vector<float>   *el_transmax;
   vector<float>   *el_transmin_loweta;
   vector<float>   *el_transmax_loweta;
   vector<float>   *el_etconoisedR04Sig2;
   vector<float>   *el_etconoisedR04Sig3;
   vector<float>   *el_topoPosEtcone20;
   vector<float>   *el_topoPosEtcone30;
   vector<float>   *el_topoPosEtcone40;
   vector<float>   *el_topoPosEtcone50;
   vector<float>   *el_topoPosEtcone60;
   vector<float>   *el_topoEMPosEtcone20;
   vector<float>   *el_topoEMPosEtcone30;
   vector<float>   *el_topoEMPosEtcone40;
   vector<float>   *el_topoEMPosEtcone50;
   vector<float>   *el_topoEMPosEtcone60;
   vector<float>   *el_topoEtcone20_TileGap3;
   vector<float>   *el_topoEtcone30_TileGap3;
   vector<float>   *el_topoEtcone40_TileGap3;
   vector<float>   *el_topoEtcone50_TileGap3;
   vector<float>   *el_topoEtcone60_TileGap3;
   vector<float>   *el_topoPosEtcone20_TileGap3;
   vector<float>   *el_topoPosEtcone30_TileGap3;
   vector<float>   *el_topoPosEtcone40_TileGap3;
   vector<float>   *el_topoPosEtcone50_TileGap3;
   vector<float>   *el_topoPosEtcone60_TileGap3;
   vector<float>   *el_Eraw57;
   vector<float>   *el_etaraw57;
   vector<float>   *el_topodr;
   vector<float>   *el_topopt;
   vector<float>   *el_topoeta;
   vector<float>   *el_topophi;
   vector<float>   *el_topoEMsamplings_E;
   vector<float>   *el_topoEMsamplings_Et;
   vector<float>   *el_topoEMsamplings_eta;
   vector<float>   *el_topoEMsamplings_phi;
   vector<float>   *el_topoEMsamplings_uncalibrated_E;
   vector<float>   *el_topoEMsamplings_uncalibrated_Et;
   vector<float>   *el_topoEMsamplings_uncalibrated_eta;
   vector<float>   *el_topoEMsamplings_uncalibrated_phi;
   vector<int>     *el_topomatched;
   vector<float>   *el_topoEtcone20;
   vector<float>   *el_topoEtcone30;
   vector<float>   *el_topoEtcone40;
   vector<float>   *el_topoEtcone50;
   vector<float>   *el_topoEtcone60;
   vector<float>   *el_topoEMEtcone20;
   vector<float>   *el_topoEMEtcone30;
   vector<float>   *el_topoEMEtcone40;
   vector<float>   *el_topoEMEtcone50;
   vector<float>   *el_topoEMEtcone60;
   vector<int>     *el_trk_index;
   vector<unsigned int> *trig_L1_TAV;
   vector<short>   *trig_L2_passedPhysics;
   vector<short>   *trig_EF_passedPhysics;
   vector<unsigned int> *trig_L1_TBP;
   vector<unsigned int> *trig_L1_TAP;
   vector<short>   *trig_L2_passedRaw;
   vector<short>   *trig_EF_passedRaw;
   Bool_t          trig_L2_truncated;
   Bool_t          trig_EF_truncated;
   vector<short>   *trig_L2_resurrected;
   vector<short>   *trig_EF_resurrected;
   vector<short>   *trig_L2_passedThrough;
   vector<short>   *trig_EF_passedThrough;
   vector<short>   *trig_L2_wasPrescaled;
   vector<short>   *trig_L2_wasResurrected;
   vector<short>   *trig_EF_wasPrescaled;
   vector<short>   *trig_EF_wasResurrected;
   Int_t           trig_L1_emtau_n;
   vector<float>   *trig_L1_emtau_eta;
   vector<float>   *trig_L1_emtau_phi;
   vector<vector<string> > *trig_L1_emtau_thrNames;
   vector<vector<float> > *trig_L1_emtau_thrValues;
   vector<float>   *trig_L1_emtau_core;
   vector<float>   *trig_L1_emtau_EMClus;
   vector<float>   *trig_L1_emtau_tauClus;
   vector<float>   *trig_L1_emtau_EMIsol;
   vector<float>   *trig_L1_emtau_hadIsol;
   vector<float>   *trig_L1_emtau_hadCore;
   vector<unsigned int> *trig_L1_emtau_thrPattern;
   vector<int>     *trig_L1_emtau_L1_2EM10;
   vector<int>     *trig_L1_emtau_L1_2EM14;
   vector<int>     *trig_L1_emtau_L1_2EM3;
   vector<int>     *trig_L1_emtau_L1_2EM3_EM10;
   vector<int>     *trig_L1_emtau_L1_2EM3_EM12;
   vector<int>     *trig_L1_emtau_L1_2EM3_EM7;
   vector<int>     *trig_L1_emtau_L1_2EM5;
   vector<int>     *trig_L1_emtau_L1_2EM5_EM10;
   vector<int>     *trig_L1_emtau_L1_2EM5_EM12;
   vector<int>     *trig_L1_emtau_L1_2EM5_MU6;
   vector<int>     *trig_L1_emtau_L1_2EM5_NL;
   vector<int>     *trig_L1_emtau_L1_2EM7;
   vector<int>     *trig_L1_emtau_L1_2EM7_EM10;
   vector<int>     *trig_L1_emtau_L1_EM10;
   vector<int>     *trig_L1_emtau_L1_EM10_MU6;
   vector<int>     *trig_L1_emtau_L1_EM10_XE20;
   vector<int>     *trig_L1_emtau_L1_EM10_XE30;
   vector<int>     *trig_L1_emtau_L1_EM10_XS45;
   vector<int>     *trig_L1_emtau_L1_EM10_XS50;
   vector<int>     *trig_L1_emtau_L1_EM12;
   vector<int>     *trig_L1_emtau_L1_EM14;
   vector<int>     *trig_L1_emtau_L1_EM14_XE10;
   vector<int>     *trig_L1_emtau_L1_EM14_XE20;
   vector<int>     *trig_L1_emtau_L1_EM16;
   vector<int>     *trig_L1_emtau_L1_EM3;
   vector<int>     *trig_L1_emtau_L1_EM30;
   vector<int>     *trig_L1_emtau_L1_EM3_EMPTY;
   vector<int>     *trig_L1_emtau_L1_EM3_FIRSTEMPTY;
   vector<int>     *trig_L1_emtau_L1_EM3_MU0;
   vector<int>     *trig_L1_emtau_L1_EM3_MU6;
   vector<int>     *trig_L1_emtau_L1_EM3_UNPAIRED_ISO;
   vector<int>     *trig_L1_emtau_L1_EM3_UNPAIRED_NONISO;
   vector<int>     *trig_L1_emtau_L1_EM5;
   vector<int>     *trig_L1_emtau_L1_EM5_2MU6;
   vector<int>     *trig_L1_emtau_L1_EM5_EMPTY;
   vector<int>     *trig_L1_emtau_L1_EM5_MU10;
   vector<int>     *trig_L1_emtau_L1_EM5_MU6;
   vector<int>     *trig_L1_emtau_L1_EM7;
   Int_t           trig_L2_emcl_n;
   vector<unsigned int> *trig_L2_emcl_quality;
   vector<float>   *trig_L2_emcl_E;
   vector<float>   *trig_L2_emcl_Et;
   vector<float>   *trig_L2_emcl_eta;
   vector<float>   *trig_L2_emcl_phi;
   vector<float>   *trig_L2_emcl_E237;
   vector<float>   *trig_L2_emcl_E277;
   vector<float>   *trig_L2_emcl_fracs1;
   vector<float>   *trig_L2_emcl_weta2;
   vector<float>   *trig_L2_emcl_Ehad1;
   vector<float>   *trig_L2_emcl_eta1;
   vector<float>   *trig_L2_emcl_emaxs1;
   vector<float>   *trig_L2_emcl_e2tsts1;
   Int_t           trig_L2_trk_idscan_eGamma_n;
   vector<int>     *trig_L2_trk_idscan_eGamma_algorithmId;
   vector<short>   *trig_L2_trk_idscan_eGamma_trackStatus;
   vector<float>   *trig_L2_trk_idscan_eGamma_chi2Ndof;
   vector<int>     *trig_L2_trk_idscan_eGamma_nStrawHits;
   vector<int>     *trig_L2_trk_idscan_eGamma_nHighThrHits;
   vector<int>     *trig_L2_trk_idscan_eGamma_nPixelSpacePoints;
   vector<int>     *trig_L2_trk_idscan_eGamma_nSCT_SpacePoints;
   vector<float>   *trig_L2_trk_idscan_eGamma_param_a0;
   vector<float>   *trig_L2_trk_idscan_eGamma_param_z0;
   vector<float>   *trig_L2_trk_idscan_eGamma_param_phi0;
   vector<float>   *trig_L2_trk_idscan_eGamma_param_eta;
   vector<float>   *trig_L2_trk_idscan_eGamma_param_pt;
   Int_t           trig_L2_trk_sitrack_eGamma_n;
   vector<int>     *trig_L2_trk_sitrack_eGamma_algorithmId;
   vector<short>   *trig_L2_trk_sitrack_eGamma_trackStatus;
   vector<float>   *trig_L2_trk_sitrack_eGamma_chi2Ndof;
   vector<int>     *trig_L2_trk_sitrack_eGamma_nStrawHits;
   vector<int>     *trig_L2_trk_sitrack_eGamma_nHighThrHits;
   vector<int>     *trig_L2_trk_sitrack_eGamma_nPixelSpacePoints;
   vector<int>     *trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints;
   vector<float>   *trig_L2_trk_sitrack_eGamma_param_a0;
   vector<float>   *trig_L2_trk_sitrack_eGamma_param_z0;
   vector<float>   *trig_L2_trk_sitrack_eGamma_param_phi0;
   vector<float>   *trig_L2_trk_sitrack_eGamma_param_eta;
   vector<float>   *trig_L2_trk_sitrack_eGamma_param_pt;
   Int_t           trig_L2_el_n;
   vector<float>   *trig_L2_el_E;
   vector<float>   *trig_L2_el_Et;
   vector<float>   *trig_L2_el_pt;
   vector<float>   *trig_L2_el_eta;
   vector<float>   *trig_L2_el_phi;
   vector<int>     *trig_L2_el_RoIWord;
   vector<float>   *trig_L2_el_zvertex;
   vector<int>     *trig_L2_el_charge;
   vector<int>     *trig_L2_el_trackAlgo;
   vector<float>   *trig_L2_el_TRTHighTHitsRatio;
   vector<float>   *trig_L2_el_deltaeta1;
   vector<float>   *trig_L2_el_deltaphi2;
   vector<float>   *trig_L2_el_EtOverPt;
   vector<float>   *trig_L2_el_reta;
   vector<float>   *trig_L2_el_Eratio;
   vector<float>   *trig_L2_el_Ethad1;
   vector<int>     *trig_L2_el_nTRTHits;
   vector<int>     *trig_L2_el_nTRTHighTHits;
   vector<int>     *trig_L2_el_trackIndx;
   vector<float>   *trig_L2_el_trkPt;
   vector<float>   *trig_L2_el_trkEtaAtCalo;
   vector<float>   *trig_L2_el_trkPhiAtCalo;
   vector<float>   *trig_L2_el_caloEta;
   vector<float>   *trig_L2_el_caloPhi;
   vector<float>   *trig_L2_el_F1;
   Int_t           trig_L2_ph_n;
   vector<float>   *trig_L2_ph_E;
   vector<float>   *trig_L2_ph_Et;
   vector<float>   *trig_L2_ph_pt;
   vector<float>   *trig_L2_ph_eta;
   vector<float>   *trig_L2_ph_phi;
   vector<int>     *trig_L2_ph_RoIWord;
   vector<float>   *trig_L2_ph_HadEt1;
   vector<float>   *trig_L2_ph_Eratio;
   vector<float>   *trig_L2_ph_Reta;
   vector<float>   *trig_L2_ph_dPhi;
   vector<float>   *trig_L2_ph_dEta;
   vector<float>   *trig_L2_ph_F1;
   Int_t           trig_EF_emcl_n;
   vector<float>   *trig_EF_emcl_pt;
   vector<float>   *trig_EF_emcl_eta;
   vector<float>   *trig_EF_emcl_phi;
   vector<float>   *trig_EF_emcl_E_em;
   vector<float>   *trig_EF_emcl_E_had;
   vector<float>   *trig_EF_emcl_firstEdens;
   vector<float>   *trig_EF_emcl_cellmaxfrac;
   vector<float>   *trig_EF_emcl_longitudinal;
   vector<float>   *trig_EF_emcl_secondlambda;
   vector<float>   *trig_EF_emcl_lateral;
   vector<float>   *trig_EF_emcl_secondR;
   vector<float>   *trig_EF_emcl_centerlambda;
   vector<float>   *trig_EF_emcl_deltaTheta;
   vector<float>   *trig_EF_emcl_deltaPhi;
   vector<float>   *trig_EF_emcl_centermag;
   vector<float>   *trig_EF_emcl_time;
   Int_t           trig_EF_emcl_slw_n;
   vector<float>   *trig_EF_emcl_slw_pt;
   vector<float>   *trig_EF_emcl_slw_eta;
   vector<float>   *trig_EF_emcl_slw_phi;
   vector<float>   *trig_EF_emcl_slw_E_em;
   vector<float>   *trig_EF_emcl_slw_E_had;
   vector<float>   *trig_EF_emcl_slw_firstEdens;
   vector<float>   *trig_EF_emcl_slw_cellmaxfrac;
   vector<float>   *trig_EF_emcl_slw_longitudinal;
   vector<float>   *trig_EF_emcl_slw_secondlambda;
   vector<float>   *trig_EF_emcl_slw_lateral;
   vector<float>   *trig_EF_emcl_slw_secondR;
   vector<float>   *trig_EF_emcl_slw_centerlambda;
   vector<float>   *trig_EF_emcl_slw_deltaTheta;
   vector<float>   *trig_EF_emcl_slw_deltaPhi;
   vector<float>   *trig_EF_emcl_slw_centermag;
   vector<float>   *trig_EF_emcl_slw_time;
   Int_t           trig_EF_el_n;
   vector<float>   *trig_EF_el_E;
   vector<float>   *trig_EF_el_Et;
   vector<float>   *trig_EF_el_pt;
   vector<float>   *trig_EF_el_m;
   vector<float>   *trig_EF_el_eta;
   vector<float>   *trig_EF_el_phi;
   vector<float>   *trig_EF_el_px;
   vector<float>   *trig_EF_el_py;
   vector<float>   *trig_EF_el_pz;
   vector<float>   *trig_EF_el_charge;
   vector<int>     *trig_EF_el_author;
   vector<unsigned int> *trig_EF_el_isEM;
   vector<unsigned int> *trig_EF_el_isEMLoose;
   vector<unsigned int> *trig_EF_el_isEMMedium;
   vector<unsigned int> *trig_EF_el_isEMTight;
   vector<int>     *trig_EF_el_loose;
   vector<int>     *trig_EF_el_looseIso;
   vector<int>     *trig_EF_el_medium;
   vector<int>     *trig_EF_el_mediumIso;
   vector<int>     *trig_EF_el_mediumWithoutTrack;
   vector<int>     *trig_EF_el_mediumIsoWithoutTrack;
   vector<int>     *trig_EF_el_tight;
   vector<int>     *trig_EF_el_tightIso;
   vector<int>     *trig_EF_el_tightWithoutTrack;
   vector<int>     *trig_EF_el_tightIsoWithoutTrack;
   vector<int>     *trig_EF_el_loosePP;
   vector<int>     *trig_EF_el_loosePPIso;
   vector<int>     *trig_EF_el_mediumPP;
   vector<int>     *trig_EF_el_mediumPPIso;
   vector<int>     *trig_EF_el_tightPP;
   vector<int>     *trig_EF_el_tightPPIso;
   vector<float>   *trig_EF_el_Ethad;
   vector<float>   *trig_EF_el_Ethad1;
   vector<float>   *trig_EF_el_f1;
   vector<float>   *trig_EF_el_f1core;
   vector<float>   *trig_EF_el_Emins1;
   vector<float>   *trig_EF_el_fside;
   vector<float>   *trig_EF_el_Emax2;
   vector<float>   *trig_EF_el_ws3;
   vector<float>   *trig_EF_el_wstot;
   vector<float>   *trig_EF_el_emaxs1;
   vector<float>   *trig_EF_el_deltaEs;
   vector<float>   *trig_EF_el_E233;
   vector<float>   *trig_EF_el_E237;
   vector<float>   *trig_EF_el_E277;
   vector<float>   *trig_EF_el_weta2;
   vector<float>   *trig_EF_el_f3;
   vector<float>   *trig_EF_el_f3core;
   vector<float>   *trig_EF_el_rphiallcalo;
   vector<float>   *trig_EF_el_Etcone45;
   vector<float>   *trig_EF_el_Etcone15;
   vector<float>   *trig_EF_el_Etcone20;
   vector<float>   *trig_EF_el_Etcone25;
   vector<float>   *trig_EF_el_Etcone30;
   vector<float>   *trig_EF_el_Etcone35;
   vector<float>   *trig_EF_el_Etcone40;
   vector<float>   *trig_EF_el_ptcone20;
   vector<float>   *trig_EF_el_ptcone30;
   vector<float>   *trig_EF_el_ptcone40;
   vector<float>   *trig_EF_el_pos7;
   vector<float>   *trig_EF_el_etacorrmag;
   vector<float>   *trig_EF_el_deltaeta1;
   vector<float>   *trig_EF_el_deltaeta2;
   vector<float>   *trig_EF_el_deltaphi2;
   vector<float>   *trig_EF_el_expectHitInBLayer;
   vector<float>   *trig_EF_el_trackd0_physics;
   vector<float>   *trig_EF_el_reta;
   vector<float>   *trig_EF_el_rphi;
   vector<float>   *trig_EF_el_cl_E;
   vector<float>   *trig_EF_el_cl_pt;
   vector<float>   *trig_EF_el_cl_eta;
   vector<float>   *trig_EF_el_cl_phi;
   vector<float>   *trig_EF_el_cl_etas2;
   vector<float>   *trig_EF_el_trackd0;
   vector<float>   *trig_EF_el_trackz0;
   vector<float>   *trig_EF_el_trackphi;
   vector<float>   *trig_EF_el_tracktheta;
   vector<float>   *trig_EF_el_trackqoverp;
   vector<float>   *trig_EF_el_trackpt;
   vector<float>   *trig_EF_el_tracketa;
   vector<int>     *trig_EF_el_nBLHits;
   vector<int>     *trig_EF_el_nPixHits;
   vector<int>     *trig_EF_el_nSCTHits;
   vector<int>     *trig_EF_el_nTRTHits;
   vector<int>     *trig_EF_el_nTRTHighTHits;
   vector<int>     *trig_EF_el_nPixHoles;
   vector<int>     *trig_EF_el_nSCTHoles;
   vector<int>     *trig_EF_el_nTRTHoles;
   vector<int>     *trig_EF_el_nBLSharedHits;
   vector<int>     *trig_EF_el_nPixSharedHits;
   vector<int>     *trig_EF_el_nSCTSharedHits;
   vector<int>     *trig_EF_el_nBLayerOutliers;
   vector<int>     *trig_EF_el_nPixelOutliers;
   vector<int>     *trig_EF_el_nSCTOutliers;
   vector<int>     *trig_EF_el_nTRTOutliers;
   vector<int>     *trig_EF_el_nTRTHighTOutliers;
   vector<int>     *trig_EF_el_expectBLayerHit;
   vector<int>     *trig_EF_el_nSiHits;
   vector<float>   *trig_EF_el_TRTHighTHitsRatio;
   vector<float>   *trig_EF_el_TRTHighTOutliersRatio;
   vector<float>   *trig_EF_el_pixeldEdx;
   vector<int>     *trig_EF_el_nGoodHitsPixeldEdx;
   vector<float>   *trig_EF_el_massPixeldEdx;
   vector<vector<float> > *trig_EF_el_likelihoodsPixeldEdx;
   vector<float>   *trig_EF_el_eProbabilityComb;
   vector<float>   *trig_EF_el_eProbabilityHT;
   vector<float>   *trig_EF_el_eProbabilityToT;
   vector<float>   *trig_EF_el_eProbabilityBrem;
   vector<float>   *trig_EF_el_vertweight;
   vector<int>     *trig_EF_el_hastrack;
   Int_t           trig_EF_ph_n;
   vector<float>   *trig_EF_ph_E;
   vector<float>   *trig_EF_ph_Et;
   vector<float>   *trig_EF_ph_pt;
   vector<float>   *trig_EF_ph_m;
   vector<float>   *trig_EF_ph_eta;
   vector<float>   *trig_EF_ph_phi;
   vector<float>   *trig_EF_ph_px;
   vector<float>   *trig_EF_ph_py;
   vector<float>   *trig_EF_ph_pz;
   vector<int>     *trig_EF_ph_author;
   vector<int>     *trig_EF_ph_isRecovered;
   vector<unsigned int> *trig_EF_ph_isEM;
   vector<unsigned int> *trig_EF_ph_isEMLoose;
   vector<unsigned int> *trig_EF_ph_isEMMedium;
   vector<unsigned int> *trig_EF_ph_isEMTight;
   vector<int>     *trig_EF_ph_convFlag;
   vector<int>     *trig_EF_ph_isConv;
   vector<int>     *trig_EF_ph_nConv;
   vector<int>     *trig_EF_ph_nSingleTrackConv;
   vector<int>     *trig_EF_ph_nDoubleTrackConv;
   vector<int>     *trig_EF_ph_loose;
   vector<int>     *trig_EF_ph_looseIso;
   vector<int>     *trig_EF_ph_tight;
   vector<int>     *trig_EF_ph_tightIso;
   vector<int>     *trig_EF_ph_looseAR;
   vector<int>     *trig_EF_ph_looseARIso;
   vector<int>     *trig_EF_ph_tightAR;
   vector<int>     *trig_EF_ph_tightARIso;
   vector<float>   *trig_EF_ph_Ethad;
   vector<float>   *trig_EF_ph_Ethad1;
   vector<float>   *trig_EF_ph_E033;
   vector<float>   *trig_EF_ph_f1;
   vector<float>   *trig_EF_ph_f1core;
   vector<float>   *trig_EF_ph_Emins1;
   vector<float>   *trig_EF_ph_fside;
   vector<float>   *trig_EF_ph_Emax2;
   vector<float>   *trig_EF_ph_ws3;
   vector<float>   *trig_EF_ph_wstot;
   vector<float>   *trig_EF_ph_E132;
   vector<float>   *trig_EF_ph_E1152;
   vector<float>   *trig_EF_ph_emaxs1;
   vector<float>   *trig_EF_ph_deltaEs;
   vector<float>   *trig_EF_ph_E233;
   vector<float>   *trig_EF_ph_E237;
   vector<float>   *trig_EF_ph_E277;
   vector<float>   *trig_EF_ph_weta2;
   vector<float>   *trig_EF_ph_f3;
   vector<float>   *trig_EF_ph_f3core;
   vector<float>   *trig_EF_ph_rphiallcalo;
   vector<float>   *trig_EF_ph_Etcone45;
   vector<float>   *trig_EF_ph_Etcone15;
   vector<float>   *trig_EF_ph_Etcone20;
   vector<float>   *trig_EF_ph_Etcone25;
   vector<float>   *trig_EF_ph_Etcone30;
   vector<float>   *trig_EF_ph_Etcone35;
   vector<float>   *trig_EF_ph_Etcone40;
   vector<float>   *trig_EF_ph_ptcone20;
   vector<float>   *trig_EF_ph_ptcone30;
   vector<float>   *trig_EF_ph_ptcone40;
   vector<float>   *trig_EF_ph_convanglematch;
   vector<float>   *trig_EF_ph_convtrackmatch;
   vector<int>     *trig_EF_ph_hasconv;
   vector<float>   *trig_EF_ph_convvtxx;
   vector<float>   *trig_EF_ph_convvtxy;
   vector<float>   *trig_EF_ph_convvtxz;
   vector<float>   *trig_EF_ph_Rconv;
   vector<float>   *trig_EF_ph_zconv;
   vector<float>   *trig_EF_ph_convvtxchi2;
   vector<float>   *trig_EF_ph_pt1conv;
   vector<int>     *trig_EF_ph_convtrk1nBLHits;
   vector<int>     *trig_EF_ph_convtrk1nPixHits;
   vector<int>     *trig_EF_ph_convtrk1nSCTHits;
   vector<int>     *trig_EF_ph_convtrk1nTRTHits;
   vector<float>   *trig_EF_ph_pt2conv;
   vector<int>     *trig_EF_ph_convtrk2nBLHits;
   vector<int>     *trig_EF_ph_convtrk2nPixHits;
   vector<int>     *trig_EF_ph_convtrk2nSCTHits;
   vector<int>     *trig_EF_ph_convtrk2nTRTHits;
   vector<float>   *trig_EF_ph_ptconv;
   vector<float>   *trig_EF_ph_pzconv;
   vector<float>   *trig_EF_ph_reta;
   vector<float>   *trig_EF_ph_rphi;
   vector<float>   *trig_EF_ph_cl_E;
   vector<float>   *trig_EF_ph_cl_pt;
   vector<float>   *trig_EF_ph_cl_eta;
   vector<float>   *trig_EF_ph_cl_phi;
   vector<float>   *trig_EF_ph_cl_etas2;
   Int_t           trig_Nav_n;
   vector<short>   *trig_Nav_chain_ChainId;
   vector<vector<int> > *trig_Nav_chain_RoIType;
   vector<vector<int> > *trig_Nav_chain_RoIIndex;
   Int_t           trig_RoI_L2_e_n;
   vector<short>   *trig_RoI_L2_e_type;
   vector<short>   *trig_RoI_L2_e_active;
   vector<short>   *trig_RoI_L2_e_lastStep;
   vector<short>   *trig_RoI_L2_e_TENumber;
   vector<short>   *trig_RoI_L2_e_roiNumber;
   vector<int>     *trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma;
   vector<int>     *trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus;
   vector<int>     *trig_RoI_L2_e_TrigEMCluster;
   vector<int>     *trig_RoI_L2_e_TrigEMClusterStatus;
   vector<int>     *trig_RoI_L2_e_EmTau_ROI;
   vector<int>     *trig_RoI_L2_e_EmTau_ROIStatus;
   vector<vector<int> > *trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma;
   vector<vector<int> > *trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus;
   vector<vector<int> > *trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma;
   vector<vector<int> > *trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus;
   vector<vector<int> > *trig_RoI_L2_e_TrigElectronContainer;
   vector<vector<int> > *trig_RoI_L2_e_TrigElectronContainerStatus;
   vector<vector<int> > *trig_RoI_L2_e_TrigPhotonContainer;
   vector<vector<int> > *trig_RoI_L2_e_TrigPhotonContainerStatus;
   Int_t           trig_RoI_EF_e_n;
   vector<short>   *trig_RoI_EF_e_type;
   vector<short>   *trig_RoI_EF_e_active;
   vector<short>   *trig_RoI_EF_e_lastStep;
   vector<short>   *trig_RoI_EF_e_TENumber;
   vector<short>   *trig_RoI_EF_e_roiNumber;
   vector<int>     *trig_RoI_EF_e_EmTau_ROI;
   vector<int>     *trig_RoI_EF_e_EmTau_ROIStatus;
   vector<vector<int> > *trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID;
   vector<vector<int> > *trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_Electrons;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_Photons;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus;
   UInt_t          trig_DB_SMK;
   UInt_t          trig_DB_L1PSK;
   UInt_t          trig_DB_HLTPSK;
   Int_t           PV_n;
   vector<float>   *PV_x;
   vector<float>   *PV_y;
   vector<float>   *PV_z;
   vector<int>     *PV_type;
   vector<float>   *PV_px;
   vector<float>   *PV_py;
   vector<float>   *PV_pz;
   vector<float>   *PV_E;
   vector<float>   *PV_m;
   vector<int>     *PV_nTracks;
   vector<float>   *PV_sumPt;
   vector<vector<float> > *PV_trk_weight;
   vector<int>     *PV_trk_n;
   vector<vector<int> > *PV_trk_index;
   Int_t           PhotonPV_n;
   vector<float>   *PhotonPV_px;
   vector<float>   *PhotonPV_py;
   vector<float>   *PhotonPV_pz;
   vector<float>   *PhotonPV_E;
   vector<float>   *PhotonPV_m;
   vector<int>     *PhotonPV_nTracks;
   vector<float>   *PhotonPV_sumPt;
   vector<float>   *PhotonPV_sumPt2;
   vector<int>     *PhotonPV_type;
   vector<float>   *PhotonPV_missPt;
   vector<float>   *PhotonPV_meanPt;
   vector<int>     *PhotonPV_nTracks_05GeV;
   vector<int>     *PhotonPV_nTracks_07GeV;
   vector<int>     *PhotonPV_nTracks_1GeV;
   vector<int>     *PhotonPV_nTracks_2GeV;
   Int_t           mcevt_n;
   vector<int>     *mcevt_signal_process_id;
   vector<int>     *mcevt_event_number;
   vector<double>  *mcevt_event_scale;
   vector<double>  *mcevt_alphaQCD;
   vector<double>  *mcevt_alphaQED;
   vector<int>     *mcevt_pdf_id1;
   vector<int>     *mcevt_pdf_id2;
   vector<double>  *mcevt_pdf_x1;
   vector<double>  *mcevt_pdf_x2;
   vector<double>  *mcevt_pdf_scale;
   vector<double>  *mcevt_pdf1;
   vector<double>  *mcevt_pdf2;
   vector<vector<double> > *mcevt_weight;
   vector<int>     *mcevt_nparticle;
   vector<short>   *mcevt_pileUpType;
   Int_t           mc_n;
   vector<float>   *mc_pt;
   vector<float>   *mc_m;
   vector<float>   *mc_eta;
   vector<float>   *mc_phi;
   vector<int>     *mc_status;
   vector<int>     *mc_barcode;
   vector<vector<int> > *mc_parents;
   vector<vector<int> > *mc_children;
   vector<int>     *mc_pdgId;
   vector<float>   *mc_charge;
   vector<float>   *mc_vx_x;
   vector<float>   *mc_vx_y;
   vector<float>   *mc_vx_z;
   vector<int>     *mc_vx_barcode;
   vector<vector<int> > *mc_child_index;
   vector<vector<int> > *mc_parent_index;
   vector<float>   *mc_PartonIsolation15_UE;
   vector<float>   *mc_PartonIsolation20_UE;
   vector<float>   *mc_PartonIsolation25_UE;
   vector<float>   *mc_PartonIsolation30_UE;
   vector<float>   *mc_PartonIsolation35_UE;
   vector<float>   *mc_PartonIsolation40_UE;
   vector<float>   *mc_PartonIsolation45_UE;
   vector<float>   *mc_PartonIsolation60_UE;
   vector<float>   *mc_PartonIsolation15;
   vector<float>   *mc_PartonIsolation20;
   vector<float>   *mc_PartonIsolation25;
   vector<float>   *mc_PartonIsolation30;
   vector<float>   *mc_PartonIsolation35;
   vector<float>   *mc_PartonIsolation40;
   vector<float>   *mc_PartonIsolation45;
   vector<float>   *mc_PartonIsolation60;
   vector<float>   *mc_ParticleIsolation40;
   vector<float>   *mc_ParticleIsolation40_ED_corrected;
   vector<float>   *mc_ParticleIsolation40_ED_corrected_reco;
   vector<float>   *mc_ParticleIsolation40_ED_corrected_new;
   vector<float>   *mc_ParticleIsolation40_ED_corrected_reco_new;
   vector<int>     *mc_isBremPhoton;
   vector<int>     *mc_isHardProcPhoton;
   Int_t           jet_AntiKt4TruthJets_n;
   vector<float>   *jet_AntiKt4TruthJets_E;
   vector<float>   *jet_AntiKt4TruthJets_pt;
   vector<float>   *jet_AntiKt4TruthJets_m;
   vector<float>   *jet_AntiKt4TruthJets_eta;
   vector<float>   *jet_AntiKt4TruthJets_phi;
   vector<float>   *jet_AntiKt4TruthJets_EtaOrigin;
   vector<float>   *jet_AntiKt4TruthJets_PhiOrigin;
   vector<float>   *jet_AntiKt4TruthJets_MOrigin;
   vector<float>   *jet_AntiKt4TruthJets_EtaOriginEM;
   vector<float>   *jet_AntiKt4TruthJets_PhiOriginEM;
   vector<float>   *jet_AntiKt4TruthJets_MOriginEM;
   vector<vector<float> > *jet_AntiKt4TruthJets_shapeBins;
   vector<int>     *jet_AntiKt4TruthJets_flavor_truth_label;
   vector<float>   *jet_AntiKt4TruthJets_flavor_truth_dRminToB;
   vector<float>   *jet_AntiKt4TruthJets_flavor_truth_dRminToC;
   vector<float>   *jet_AntiKt4TruthJets_flavor_truth_dRminToT;
   vector<int>     *jet_AntiKt4TruthJets_flavor_truth_BHadronpdg;
   vector<float>   *jet_AntiKt4TruthJets_flavor_truth_vx_x;
   vector<float>   *jet_AntiKt4TruthJets_flavor_truth_vx_y;
   vector<float>   *jet_AntiKt4TruthJets_flavor_truth_vx_z;
   vector<float>   *jet_AntiKt4TruthJets_el_dr;
   vector<int>     *jet_AntiKt4TruthJets_el_matched;
   vector<float>   *jet_AntiKt4TruthJets_mu_dr;
   vector<int>     *jet_AntiKt4TruthJets_mu_matched;
   Int_t           jet_AntiKt6TruthJets_n;
   vector<float>   *jet_AntiKt6TruthJets_E;
   vector<float>   *jet_AntiKt6TruthJets_pt;
   vector<float>   *jet_AntiKt6TruthJets_m;
   vector<float>   *jet_AntiKt6TruthJets_eta;
   vector<float>   *jet_AntiKt6TruthJets_phi;
   vector<float>   *jet_AntiKt6TruthJets_EtaOrigin;
   vector<float>   *jet_AntiKt6TruthJets_PhiOrigin;
   vector<float>   *jet_AntiKt6TruthJets_MOrigin;
   vector<float>   *jet_AntiKt6TruthJets_EtaOriginEM;
   vector<float>   *jet_AntiKt6TruthJets_PhiOriginEM;
   vector<float>   *jet_AntiKt6TruthJets_MOriginEM;
   vector<vector<float> > *jet_AntiKt6TruthJets_shapeBins;
   vector<int>     *jet_AntiKt6TruthJets_flavor_truth_label;
   vector<float>   *jet_AntiKt6TruthJets_flavor_truth_dRminToB;
   vector<float>   *jet_AntiKt6TruthJets_flavor_truth_dRminToC;
   vector<float>   *jet_AntiKt6TruthJets_flavor_truth_dRminToT;
   vector<int>     *jet_AntiKt6TruthJets_flavor_truth_BHadronpdg;
   vector<float>   *jet_AntiKt6TruthJets_flavor_truth_vx_x;
   vector<float>   *jet_AntiKt6TruthJets_flavor_truth_vx_y;
   vector<float>   *jet_AntiKt6TruthJets_flavor_truth_vx_z;
   vector<float>   *jet_AntiKt6TruthJets_el_dr;
   vector<int>     *jet_AntiKt6TruthJets_el_matched;
   vector<float>   *jet_AntiKt6TruthJets_mu_dr;
   vector<int>     *jet_AntiKt6TruthJets_mu_matched;
   Int_t           jet_AntiKt4TruthWithMuNoIntJets_n;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_E;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_pt;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_m;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_eta;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_phi;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_EtaOrigin;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_PhiOrigin;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_MOrigin;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_EtaOriginEM;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_PhiOriginEM;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_MOriginEM;
   vector<vector<float> > *jet_AntiKt4TruthWithMuNoIntJets_shapeBins;
   vector<int>     *jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_label;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToB;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToC;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToT;
   vector<int>     *jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_BHadronpdg;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_x;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_y;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_z;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_el_dr;
   vector<int>     *jet_AntiKt4TruthWithMuNoIntJets_el_matched;
   vector<float>   *jet_AntiKt4TruthWithMuNoIntJets_mu_dr;
   vector<int>     *jet_AntiKt4TruthWithMuNoIntJets_mu_matched;
   Int_t           jet_AntiKt6TruthWithMuNoIntJets_n;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_E;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_pt;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_m;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_eta;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_phi;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_EtaOrigin;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_PhiOrigin;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_MOrigin;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_EtaOriginEM;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_PhiOriginEM;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_MOriginEM;
   vector<vector<float> > *jet_AntiKt6TruthWithMuNoIntJets_shapeBins;
   vector<int>     *jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_label;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToB;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToC;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToT;
   vector<int>     *jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_BHadronpdg;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_x;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_y;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_z;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_el_dr;
   vector<int>     *jet_AntiKt6TruthWithMuNoIntJets_el_matched;
   vector<float>   *jet_AntiKt6TruthWithMuNoIntJets_mu_dr;
   vector<int>     *jet_AntiKt6TruthWithMuNoIntJets_mu_matched;
   Float_t         met_etx;
   Float_t         met_ety;
   Float_t         MET_Cryo_etx;
   Float_t         MET_Cryo_ety;
   Float_t         MET_Cryo_phi;
   Float_t         MET_Cryo_et;
   Float_t         MET_Cryo_sumet;
   Float_t         MET_Cryo_etx_CentralReg;
   Float_t         MET_Cryo_ety_CentralReg;
   Float_t         MET_Cryo_sumet_CentralReg;
   Float_t         MET_Cryo_phi_CentralReg;
   Float_t         MET_Cryo_etx_EndcapRegion;
   Float_t         MET_Cryo_ety_EndcapRegion;
   Float_t         MET_Cryo_sumet_EndcapRegion;
   Float_t         MET_Cryo_phi_EndcapRegion;
   Float_t         MET_Cryo_etx_ForwardReg;
   Float_t         MET_Cryo_ety_ForwardReg;
   Float_t         MET_Cryo_sumet_ForwardReg;
   Float_t         MET_Cryo_phi_ForwardReg;
   Float_t         MET_RefFinal_etx;
   Float_t         MET_RefFinal_ety;
   Float_t         MET_RefFinal_phi;
   Float_t         MET_RefFinal_et;
   Float_t         MET_RefFinal_sumet;
   Float_t         MET_RefFinal_etx_CentralReg;
   Float_t         MET_RefFinal_ety_CentralReg;
   Float_t         MET_RefFinal_sumet_CentralReg;
   Float_t         MET_RefFinal_phi_CentralReg;
   Float_t         MET_RefFinal_etx_EndcapRegion;
   Float_t         MET_RefFinal_ety_EndcapRegion;
   Float_t         MET_RefFinal_sumet_EndcapRegion;
   Float_t         MET_RefFinal_phi_EndcapRegion;
   Float_t         MET_RefFinal_etx_ForwardReg;
   Float_t         MET_RefFinal_ety_ForwardReg;
   Float_t         MET_RefFinal_sumet_ForwardReg;
   Float_t         MET_RefFinal_phi_ForwardReg;
   Float_t         MET_RefEle_etx;
   Float_t         MET_RefEle_ety;
   Float_t         MET_RefEle_phi;
   Float_t         MET_RefEle_et;
   Float_t         MET_RefEle_sumet;
   Float_t         MET_RefEle_etx_CentralReg;
   Float_t         MET_RefEle_ety_CentralReg;
   Float_t         MET_RefEle_sumet_CentralReg;
   Float_t         MET_RefEle_phi_CentralReg;
   Float_t         MET_RefEle_etx_EndcapRegion;
   Float_t         MET_RefEle_ety_EndcapRegion;
   Float_t         MET_RefEle_sumet_EndcapRegion;
   Float_t         MET_RefEle_phi_EndcapRegion;
   Float_t         MET_RefEle_etx_ForwardReg;
   Float_t         MET_RefEle_ety_ForwardReg;
   Float_t         MET_RefEle_sumet_ForwardReg;
   Float_t         MET_RefEle_phi_ForwardReg;
   Float_t         MET_RefJet_etx;
   Float_t         MET_RefJet_ety;
   Float_t         MET_RefJet_phi;
   Float_t         MET_RefJet_et;
   Float_t         MET_RefJet_sumet;
   Float_t         MET_RefJet_etx_CentralReg;
   Float_t         MET_RefJet_ety_CentralReg;
   Float_t         MET_RefJet_sumet_CentralReg;
   Float_t         MET_RefJet_phi_CentralReg;
   Float_t         MET_RefJet_etx_EndcapRegion;
   Float_t         MET_RefJet_ety_EndcapRegion;
   Float_t         MET_RefJet_sumet_EndcapRegion;
   Float_t         MET_RefJet_phi_EndcapRegion;
   Float_t         MET_RefJet_etx_ForwardReg;
   Float_t         MET_RefJet_ety_ForwardReg;
   Float_t         MET_RefJet_sumet_ForwardReg;
   Float_t         MET_RefJet_phi_ForwardReg;
   Float_t         MET_RefMuon_etx;
   Float_t         MET_RefMuon_ety;
   Float_t         MET_RefMuon_phi;
   Float_t         MET_RefMuon_et;
   Float_t         MET_RefMuon_sumet;
   Float_t         MET_RefMuon_etx_CentralReg;
   Float_t         MET_RefMuon_ety_CentralReg;
   Float_t         MET_RefMuon_sumet_CentralReg;
   Float_t         MET_RefMuon_phi_CentralReg;
   Float_t         MET_RefMuon_etx_EndcapRegion;
   Float_t         MET_RefMuon_ety_EndcapRegion;
   Float_t         MET_RefMuon_sumet_EndcapRegion;
   Float_t         MET_RefMuon_phi_EndcapRegion;
   Float_t         MET_RefMuon_etx_ForwardReg;
   Float_t         MET_RefMuon_ety_ForwardReg;
   Float_t         MET_RefMuon_sumet_ForwardReg;
   Float_t         MET_RefMuon_phi_ForwardReg;
   Float_t         MET_RefMuon_Staco_etx;
   Float_t         MET_RefMuon_Staco_ety;
   Float_t         MET_RefMuon_Staco_phi;
   Float_t         MET_RefMuon_Staco_et;
   Float_t         MET_RefMuon_Staco_sumet;
   Float_t         MET_RefMuon_Staco_etx_CentralReg;
   Float_t         MET_RefMuon_Staco_ety_CentralReg;
   Float_t         MET_RefMuon_Staco_sumet_CentralReg;
   Float_t         MET_RefMuon_Staco_phi_CentralReg;
   Float_t         MET_RefMuon_Staco_etx_EndcapRegion;
   Float_t         MET_RefMuon_Staco_ety_EndcapRegion;
   Float_t         MET_RefMuon_Staco_sumet_EndcapRegion;
   Float_t         MET_RefMuon_Staco_phi_EndcapRegion;
   Float_t         MET_RefMuon_Staco_etx_ForwardReg;
   Float_t         MET_RefMuon_Staco_ety_ForwardReg;
   Float_t         MET_RefMuon_Staco_sumet_ForwardReg;
   Float_t         MET_RefMuon_Staco_phi_ForwardReg;
   Float_t         MET_RefMuon_Muid_etx;
   Float_t         MET_RefMuon_Muid_ety;
   Float_t         MET_RefMuon_Muid_phi;
   Float_t         MET_RefMuon_Muid_et;
   Float_t         MET_RefMuon_Muid_sumet;
   Float_t         MET_RefMuon_Muid_etx_CentralReg;
   Float_t         MET_RefMuon_Muid_ety_CentralReg;
   Float_t         MET_RefMuon_Muid_sumet_CentralReg;
   Float_t         MET_RefMuon_Muid_phi_CentralReg;
   Float_t         MET_RefMuon_Muid_etx_EndcapRegion;
   Float_t         MET_RefMuon_Muid_ety_EndcapRegion;
   Float_t         MET_RefMuon_Muid_sumet_EndcapRegion;
   Float_t         MET_RefMuon_Muid_phi_EndcapRegion;
   Float_t         MET_RefMuon_Muid_etx_ForwardReg;
   Float_t         MET_RefMuon_Muid_ety_ForwardReg;
   Float_t         MET_RefMuon_Muid_sumet_ForwardReg;
   Float_t         MET_RefMuon_Muid_phi_ForwardReg;
   Float_t         MET_RefGamma_etx;
   Float_t         MET_RefGamma_ety;
   Float_t         MET_RefGamma_phi;
   Float_t         MET_RefGamma_et;
   Float_t         MET_RefGamma_sumet;
   Float_t         MET_RefGamma_etx_CentralReg;
   Float_t         MET_RefGamma_ety_CentralReg;
   Float_t         MET_RefGamma_sumet_CentralReg;
   Float_t         MET_RefGamma_phi_CentralReg;
   Float_t         MET_RefGamma_etx_EndcapRegion;
   Float_t         MET_RefGamma_ety_EndcapRegion;
   Float_t         MET_RefGamma_sumet_EndcapRegion;
   Float_t         MET_RefGamma_phi_EndcapRegion;
   Float_t         MET_RefGamma_etx_ForwardReg;
   Float_t         MET_RefGamma_ety_ForwardReg;
   Float_t         MET_RefGamma_sumet_ForwardReg;
   Float_t         MET_RefGamma_phi_ForwardReg;
   Float_t         MET_RefTau_etx;
   Float_t         MET_RefTau_ety;
   Float_t         MET_RefTau_phi;
   Float_t         MET_RefTau_et;
   Float_t         MET_RefTau_sumet;
   Float_t         MET_RefTau_etx_CentralReg;
   Float_t         MET_RefTau_ety_CentralReg;
   Float_t         MET_RefTau_sumet_CentralReg;
   Float_t         MET_RefTau_phi_CentralReg;
   Float_t         MET_RefTau_etx_EndcapRegion;
   Float_t         MET_RefTau_ety_EndcapRegion;
   Float_t         MET_RefTau_sumet_EndcapRegion;
   Float_t         MET_RefTau_phi_EndcapRegion;
   Float_t         MET_RefTau_etx_ForwardReg;
   Float_t         MET_RefTau_ety_ForwardReg;
   Float_t         MET_RefTau_sumet_ForwardReg;
   Float_t         MET_RefTau_phi_ForwardReg;
   Float_t         MET_CellOut_etx;
   Float_t         MET_CellOut_ety;
   Float_t         MET_CellOut_phi;
   Float_t         MET_CellOut_et;
   Float_t         MET_CellOut_sumet;
   Float_t         MET_CellOut_etx_CentralReg;
   Float_t         MET_CellOut_ety_CentralReg;
   Float_t         MET_CellOut_sumet_CentralReg;
   Float_t         MET_CellOut_phi_CentralReg;
   Float_t         MET_CellOut_etx_EndcapRegion;
   Float_t         MET_CellOut_ety_EndcapRegion;
   Float_t         MET_CellOut_sumet_EndcapRegion;
   Float_t         MET_CellOut_phi_EndcapRegion;
   Float_t         MET_CellOut_etx_ForwardReg;
   Float_t         MET_CellOut_ety_ForwardReg;
   Float_t         MET_CellOut_sumet_ForwardReg;
   Float_t         MET_CellOut_phi_ForwardReg;
   Float_t         MET_MuonBoy_etx;
   Float_t         MET_MuonBoy_ety;
   Float_t         MET_MuonBoy_phi;
   Float_t         MET_MuonBoy_et;
   Float_t         MET_MuonBoy_sumet;
   Float_t         MET_MuonBoy_etx_CentralReg;
   Float_t         MET_MuonBoy_ety_CentralReg;
   Float_t         MET_MuonBoy_sumet_CentralReg;
   Float_t         MET_MuonBoy_phi_CentralReg;
   Float_t         MET_MuonBoy_etx_EndcapRegion;
   Float_t         MET_MuonBoy_ety_EndcapRegion;
   Float_t         MET_MuonBoy_sumet_EndcapRegion;
   Float_t         MET_MuonBoy_phi_EndcapRegion;
   Float_t         MET_MuonBoy_etx_ForwardReg;
   Float_t         MET_MuonBoy_ety_ForwardReg;
   Float_t         MET_MuonBoy_sumet_ForwardReg;
   Float_t         MET_MuonBoy_phi_ForwardReg;
   Float_t         MET_MuonBoy_Track_etx;
   Float_t         MET_MuonBoy_Track_ety;
   Float_t         MET_MuonBoy_Track_phi;
   Float_t         MET_MuonBoy_Track_et;
   Float_t         MET_MuonBoy_Track_sumet;
   Float_t         MET_MuonBoy_Track_etx_CentralReg;
   Float_t         MET_MuonBoy_Track_ety_CentralReg;
   Float_t         MET_MuonBoy_Track_sumet_CentralReg;
   Float_t         MET_MuonBoy_Track_phi_CentralReg;
   Float_t         MET_MuonBoy_Track_etx_EndcapRegion;
   Float_t         MET_MuonBoy_Track_ety_EndcapRegion;
   Float_t         MET_MuonBoy_Track_sumet_EndcapRegion;
   Float_t         MET_MuonBoy_Track_phi_EndcapRegion;
   Float_t         MET_MuonBoy_Track_etx_ForwardReg;
   Float_t         MET_MuonBoy_Track_ety_ForwardReg;
   Float_t         MET_MuonBoy_Track_sumet_ForwardReg;
   Float_t         MET_MuonBoy_Track_phi_ForwardReg;
   Float_t         MET_Final_etx;
   Float_t         MET_Final_ety;
   Float_t         MET_Final_phi;
   Float_t         MET_Final_et;
   Float_t         MET_Final_sumet;
   Float_t         MET_Final_etx_CentralReg;
   Float_t         MET_Final_ety_CentralReg;
   Float_t         MET_Final_sumet_CentralReg;
   Float_t         MET_Final_phi_CentralReg;
   Float_t         MET_Final_etx_EndcapRegion;
   Float_t         MET_Final_ety_EndcapRegion;
   Float_t         MET_Final_sumet_EndcapRegion;
   Float_t         MET_Final_phi_EndcapRegion;
   Float_t         MET_Final_etx_ForwardReg;
   Float_t         MET_Final_ety_ForwardReg;
   Float_t         MET_Final_sumet_ForwardReg;
   Float_t         MET_Final_phi_ForwardReg;
   Float_t         MET_Topo_etx;
   Float_t         MET_Topo_ety;
   Float_t         MET_Topo_phi;
   Float_t         MET_Topo_et;
   Float_t         MET_Topo_sumet;
   Float_t         MET_Topo_SUMET_EMFrac;
   Float_t         MET_Topo_etx_PEMB;
   Float_t         MET_Topo_ety_PEMB;
   Float_t         MET_Topo_sumet_PEMB;
   Float_t         MET_Topo_phi_PEMB;
   Float_t         MET_Topo_etx_EMB;
   Float_t         MET_Topo_ety_EMB;
   Float_t         MET_Topo_sumet_EMB;
   Float_t         MET_Topo_phi_EMB;
   Float_t         MET_Topo_etx_PEMEC;
   Float_t         MET_Topo_ety_PEMEC;
   Float_t         MET_Topo_sumet_PEMEC;
   Float_t         MET_Topo_phi_PEMEC;
   Float_t         MET_Topo_etx_EME;
   Float_t         MET_Topo_ety_EME;
   Float_t         MET_Topo_sumet_EME;
   Float_t         MET_Topo_phi_EME;
   Float_t         MET_Topo_etx_TILE;
   Float_t         MET_Topo_ety_TILE;
   Float_t         MET_Topo_sumet_TILE;
   Float_t         MET_Topo_phi_TILE;
   Float_t         MET_Topo_etx_HEC;
   Float_t         MET_Topo_ety_HEC;
   Float_t         MET_Topo_sumet_HEC;
   Float_t         MET_Topo_phi_HEC;
   Float_t         MET_Topo_etx_FCAL;
   Float_t         MET_Topo_ety_FCAL;
   Float_t         MET_Topo_sumet_FCAL;
   Float_t         MET_Topo_phi_FCAL;
   Float_t         MET_Topo_nCell_PEMB;
   Float_t         MET_Topo_nCell_EMB;
   Float_t         MET_Topo_nCell_PEMEC;
   Float_t         MET_Topo_nCell_EME;
   Float_t         MET_Topo_nCell_TILE;
   Float_t         MET_Topo_nCell_HEC;
   Float_t         MET_Topo_nCell_FCAL;
   Float_t         MET_Topo_etx_CentralReg;
   Float_t         MET_Topo_ety_CentralReg;
   Float_t         MET_Topo_sumet_CentralReg;
   Float_t         MET_Topo_phi_CentralReg;
   Float_t         MET_Topo_etx_EndcapRegion;
   Float_t         MET_Topo_ety_EndcapRegion;
   Float_t         MET_Topo_sumet_EndcapRegion;
   Float_t         MET_Topo_phi_EndcapRegion;
   Float_t         MET_Topo_etx_ForwardReg;
   Float_t         MET_Topo_ety_ForwardReg;
   Float_t         MET_Topo_sumet_ForwardReg;
   Float_t         MET_Topo_phi_ForwardReg;
   Float_t         MET_LocHadTopo_etx;
   Float_t         MET_LocHadTopo_ety;
   Float_t         MET_LocHadTopo_phi;
   Float_t         MET_LocHadTopo_et;
   Float_t         MET_LocHadTopo_sumet;
   Float_t         MET_LocHadTopo_SUMET_EMFrac;
   Float_t         MET_LocHadTopo_etx_PEMB;
   Float_t         MET_LocHadTopo_ety_PEMB;
   Float_t         MET_LocHadTopo_sumet_PEMB;
   Float_t         MET_LocHadTopo_phi_PEMB;
   Float_t         MET_LocHadTopo_etx_EMB;
   Float_t         MET_LocHadTopo_ety_EMB;
   Float_t         MET_LocHadTopo_sumet_EMB;
   Float_t         MET_LocHadTopo_phi_EMB;
   Float_t         MET_LocHadTopo_etx_PEMEC;
   Float_t         MET_LocHadTopo_ety_PEMEC;
   Float_t         MET_LocHadTopo_sumet_PEMEC;
   Float_t         MET_LocHadTopo_phi_PEMEC;
   Float_t         MET_LocHadTopo_etx_EME;
   Float_t         MET_LocHadTopo_ety_EME;
   Float_t         MET_LocHadTopo_sumet_EME;
   Float_t         MET_LocHadTopo_phi_EME;
   Float_t         MET_LocHadTopo_etx_TILE;
   Float_t         MET_LocHadTopo_ety_TILE;
   Float_t         MET_LocHadTopo_sumet_TILE;
   Float_t         MET_LocHadTopo_phi_TILE;
   Float_t         MET_LocHadTopo_etx_HEC;
   Float_t         MET_LocHadTopo_ety_HEC;
   Float_t         MET_LocHadTopo_sumet_HEC;
   Float_t         MET_LocHadTopo_phi_HEC;
   Float_t         MET_LocHadTopo_etx_FCAL;
   Float_t         MET_LocHadTopo_ety_FCAL;
   Float_t         MET_LocHadTopo_sumet_FCAL;
   Float_t         MET_LocHadTopo_phi_FCAL;
   Float_t         MET_LocHadTopo_nCell_PEMB;
   Float_t         MET_LocHadTopo_nCell_EMB;
   Float_t         MET_LocHadTopo_nCell_PEMEC;
   Float_t         MET_LocHadTopo_nCell_EME;
   Float_t         MET_LocHadTopo_nCell_TILE;
   Float_t         MET_LocHadTopo_nCell_HEC;
   Float_t         MET_LocHadTopo_nCell_FCAL;
   Float_t         MET_LocHadTopo_etx_CentralReg;
   Float_t         MET_LocHadTopo_ety_CentralReg;
   Float_t         MET_LocHadTopo_sumet_CentralReg;
   Float_t         MET_LocHadTopo_phi_CentralReg;
   Float_t         MET_LocHadTopo_etx_EndcapRegion;
   Float_t         MET_LocHadTopo_ety_EndcapRegion;
   Float_t         MET_LocHadTopo_sumet_EndcapRegion;
   Float_t         MET_LocHadTopo_phi_EndcapRegion;
   Float_t         MET_LocHadTopo_etx_ForwardReg;
   Float_t         MET_LocHadTopo_ety_ForwardReg;
   Float_t         MET_LocHadTopo_sumet_ForwardReg;
   Float_t         MET_LocHadTopo_phi_ForwardReg;
   Float_t         MET_Truth_NonInt_etx;
   Float_t         MET_Truth_NonInt_ety;
   Float_t         MET_Truth_NonInt_phi;
   Float_t         MET_Truth_NonInt_et;
   Float_t         MET_Truth_NonInt_sumet;
   Bool_t          EF_2e12Tvh_medium;
   Bool_t          EF_2e15vh_loose1_Zee;
   Bool_t          EF_2e15vh_loose_Zee;
   Bool_t          EF_2e15vh_medium;
   Bool_t          EF_2mu4T_xe30_noMu;
   Bool_t          EF_2mu4T_xe40_noMu;
   Bool_t          EF_e10_etcut_mu10;
   Bool_t          EF_e10_loose1;
   Bool_t          EF_e12Tvh_medium;
   Bool_t          EF_e12Tvh_medium_2e6T_medium;
   Bool_t          EF_e12Tvh_medium_mu6;
   Bool_t          EF_e12Tvh_medium_mu6_topo_medium;
   Bool_t          EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20;
   Bool_t          EF_e13_etcutTrk_xs60_noMu;
   Bool_t          EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07;
   Bool_t          EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20;
   Bool_t          EF_e14_tight_e4_etcut_Jpsi;
   Bool_t          EF_e15vh_loose1_e12Tvh_loose1_Zee;
   Bool_t          EF_e15vh_medium;
   Bool_t          EF_e15vh_medium_xe40_noMu;
   Bool_t          EF_e15vh_medium_xe50_noMu;
   Bool_t          EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20;
   Bool_t          EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07;
   Bool_t          EF_e22_etcut_e10_loose1;
   Bool_t          EF_e22_etcut_mu10;
   Bool_t          EF_e22_loose1_e10_etcut;
   Bool_t          EF_e22i6vh_medium2;
   Bool_t          EF_e22vh_loose;
   Bool_t          EF_e22vh_loose1;
   Bool_t          EF_e22vh_loose1_e10_loose1;
   Bool_t          EF_e22vh_looseTrk;
   Bool_t          EF_e22vh_loose_2j20_a4tc_EFFS;
   Bool_t          EF_e22vh_loose_3L1J10;
   Bool_t          EF_e22vh_loose_3j20_a4tc_EFFS;
   Bool_t          EF_e22vh_loose_4L1J10;
   Bool_t          EF_e22vh_loose_4j15_a4tc_EFFS;
   Bool_t          EF_e22vh_medium;
   Bool_t          EF_e22vh_medium1;
   Bool_t          EF_e22vh_medium1_3j10_a4tc_EFFS;
   Bool_t          EF_e22vh_medium1_3j15_a4tc_EFFS;
   Bool_t          EF_e22vh_medium1_4j10_a4tc_EFFS;
   Bool_t          EF_e22vh_medium1_EFxe20_noMu;
   Bool_t          EF_e22vh_medium1_EFxe30_noMu;
   Bool_t          EF_e22vh_medium1_EFxe40_noMu;
   Bool_t          EF_e22vh_medium1_mu10_EFFS;
   Bool_t          EF_e22vh_medium2;
   Bool_t          EF_e22vh_medium_IDTrkNoCut;
   Bool_t          EF_e22vh_medium_SiTrk;
   Bool_t          EF_e22vh_medium_TRT;
   Bool_t          EF_e25_loose2_xe20_noMu_recoil40;
   Bool_t          EF_e25i5vh_medium2;
   Bool_t          EF_e25i6vh_medium2;
   Bool_t          EF_e25vh_medium1;
   Bool_t          EF_e30vh_medium2;
   Bool_t          EF_e9_tight_e4_etcut_Jpsi;
   Bool_t          EF_g200_etcut;
   Bool_t          EF_j70_a4tc_EFFS_xe70_noMu_dphi2j30xe10;
   Bool_t          EF_j75_j45_a4tc_EFFS_xe55_noMu;
   Bool_t          EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu;
   Bool_t          EF_mu4T_j45_a4tc_EFFS_xe55_noMu;
   Bool_t          EF_tau29T_medium1_xe35_noMu_3L1J10;
   Bool_t          EF_tau29T_medium_xe35_noMu_3L1J10;
   Bool_t          EF_tau29T_medium_xe40_tight_noMu;
   Bool_t          EF_xe100_noMu;
   Bool_t          EF_xe100_tight_noMu;
   Bool_t          EF_xe110_noMu;
   Bool_t          EF_xe60_L2FEB_val;
   Bool_t          EF_xe60_tight_L2FEB_val;
   Bool_t          EF_xe80_tight_noMu;
   Bool_t          EF_xe90_tight_noMu;
   Bool_t          L1_2EM10VH;
   Bool_t          L1_2EM12;
   Bool_t          L1_2EM5_EM16VH;
   Bool_t          L1_2MU4;
   Bool_t          L1_EM10VH;
   Bool_t          L1_EM10VH_MU6;
   Bool_t          L1_EM10VH_XE20;
   Bool_t          L1_EM10VH_XE30;
   Bool_t          L1_EM10VH_XE35;
   Bool_t          L1_EM12_3J10;
   Bool_t          L1_EM12_4J10;
   Bool_t          L1_EM12_XE20;
   Bool_t          L1_EM12_XE30;
   Bool_t          L1_EM12_XS30;
   Bool_t          L1_EM12_XS45;
   Bool_t          L1_EM16VH;
   Bool_t          L1_EM18VH;
   Bool_t          L1_EM7_XS30;
   Bool_t          L1_EM7_XS45;
   Bool_t          L1_MU10_XE25;
   Bool_t          L1_MU4_J20_XE20;
   Bool_t          L1_MU4_J20_XE35;
   Bool_t          L1_TAU15_XE25_3J10;
   Bool_t          L1_TAU15_XE25_3J10_J30;
   Bool_t          L1_TAU15_XE35;
   Bool_t          L2_2e12Tvh_medium;
   Bool_t          L2_2e15vh_loose1_Zee;
   Bool_t          L2_2e15vh_loose_Zee;
   Bool_t          L2_2e15vh_medium;
   Bool_t          L2_2mu4T_xe20_noMu;
   Bool_t          L2_2mu4T_xe25_noMu;
   Bool_t          L2_e10_etcut_mu10;
   Bool_t          L2_e10_loose1;
   Bool_t          L2_e12Tvh_medium;
   Bool_t          L2_e12Tvh_medium_2e6T_medium;
   Bool_t          L2_e12Tvh_medium_mu6;
   Bool_t          L2_e12Tvh_medium_mu6_topo_medium;
   Bool_t          L2_e13_etcutTrk_xs30_noMu;
   Bool_t          L2_e13_etcutTrk_xs45_noMu;
   Bool_t          L2_e14_tight_e4_etcut_Jpsi;
   Bool_t          L2_e15vh_loose1_e12Tvh_loose1_Zee;
   Bool_t          L2_e15vh_medium;
   Bool_t          L2_e15vh_medium_xe30_noMu;
   Bool_t          L2_e15vh_medium_xe35_noMu;
   Bool_t          L2_e20_etcutTrk_xe25_noMu;
   Bool_t          L2_e20_etcutTrk_xs45_noMu;
   Bool_t          L2_e22_etcut_e10_loose1;
   Bool_t          L2_e22_etcut_mu10;
   Bool_t          L2_e22_loose1_e10_etcut;
   Bool_t          L2_e22i6vh_medium2;
   Bool_t          L2_e22vh_loose;
   Bool_t          L2_e22vh_loose1;
   Bool_t          L2_e22vh_loose1_e10_loose1;
   Bool_t          L2_e22vh_looseTrk;
   Bool_t          L2_e22vh_loose_2j20_a4tc_EFFS;
   Bool_t          L2_e22vh_loose_3L1J10;
   Bool_t          L2_e22vh_loose_3j20_a4tc_EFFS;
   Bool_t          L2_e22vh_loose_4L1J10;
   Bool_t          L2_e22vh_loose_4j15_a4tc_EFFS;
   Bool_t          L2_e22vh_medium;
   Bool_t          L2_e22vh_medium1;
   Bool_t          L2_e22vh_medium1_EFxe20_noMu;
   Bool_t          L2_e22vh_medium1_EFxe30_noMu;
   Bool_t          L2_e22vh_medium1_EFxe40_noMu;
   Bool_t          L2_e22vh_medium1_mu10_EFFS;
   Bool_t          L2_e22vh_medium2;
   Bool_t          L2_e22vh_medium_IDTrkNoCut;
   Bool_t          L2_e22vh_medium_SiTrk;
   Bool_t          L2_e22vh_medium_TRT;
   Bool_t          L2_e25_loose2_xe20_noL2;
   Bool_t          L2_e25i5vh_medium2;
   Bool_t          L2_e25i6vh_medium2;
   Bool_t          L2_e25vh_medium1;
   Bool_t          L2_e30vh_medium2;
   Bool_t          L2_e9_tight_e4_etcut_Jpsi;
   Bool_t          L2_g200_etcut;
   Bool_t          L2_j65_xe50_noMu;
   Bool_t          L2_j70_j40_xe35_noMu;
   Bool_t          L2_mu4T_j40_xe20_loose_noMu;
   Bool_t          L2_mu4T_j40_xe35_noMu;
   Bool_t          L2_tau29T_medium1_xe25_noMu_3L1J10;
   Bool_t          L2_tau29T_medium_xe25_noMu_3L1J10;
   Bool_t          L2_tau29T_medium_xe35_tight_noMu;
   Bool_t          L2_xe40_L2FEB_val;
   Bool_t          L2_xe50_L2FEB_val;
   Bool_t          L2_xe65_noMu;
   Bool_t          L2_xe75_noMu;
   Bool_t          L2_xe80_noMu;
   Bool_t          L2_xe85_noMu;
   Bool_t          L2_xe90_noMu;
   vector<int>     *trig_L2_el_L2_2e12Tvh_medium;
   vector<int>     *trig_L2_el_L2_2e15vh_loose1_Zee;
   vector<int>     *trig_L2_el_L2_2e15vh_loose_Zee;
   vector<int>     *trig_L2_el_L2_2e15vh_medium;
   vector<int>     *trig_L2_el_L2_e10_etcut_mu10;
   vector<int>     *trig_L2_el_L2_e10_loose1;
   vector<int>     *trig_L2_el_L2_e12Tvh_medium;
   vector<int>     *trig_L2_el_L2_e12Tvh_medium_2e6T_medium;
   vector<int>     *trig_L2_el_L2_e12Tvh_medium_mu6;
   vector<int>     *trig_L2_el_L2_e12Tvh_medium_mu6_topo_medium;
   vector<int>     *trig_L2_el_L2_e13_etcutTrk_xs30_noMu;
   vector<int>     *trig_L2_el_L2_e13_etcutTrk_xs45_noMu;
   vector<int>     *trig_L2_el_L2_e14_tight_e4_etcut_Jpsi;
   vector<int>     *trig_L2_el_L2_e15vh_loose1_e12Tvh_loose1_Zee;
   vector<int>     *trig_L2_el_L2_e15vh_medium;
   vector<int>     *trig_L2_el_L2_e15vh_medium_xe30_noMu;
   vector<int>     *trig_L2_el_L2_e15vh_medium_xe35_noMu;
   vector<int>     *trig_L2_el_L2_e20_etcutTrk_xe25_noMu;
   vector<int>     *trig_L2_el_L2_e20_etcutTrk_xs45_noMu;
   vector<int>     *trig_L2_el_L2_e22_etcut_e10_loose1;
   vector<int>     *trig_L2_el_L2_e22_etcut_mu10;
   vector<int>     *trig_L2_el_L2_e22_loose1_e10_etcut;
   vector<int>     *trig_L2_el_L2_e22i6vh_medium2;
   vector<int>     *trig_L2_el_L2_e22vh_loose;
   vector<int>     *trig_L2_el_L2_e22vh_loose1;
   vector<int>     *trig_L2_el_L2_e22vh_loose1_e10_loose1;
   vector<int>     *trig_L2_el_L2_e22vh_looseTrk;
   vector<int>     *trig_L2_el_L2_e22vh_loose_2j20_a4tc_EFFS;
   vector<int>     *trig_L2_el_L2_e22vh_loose_3L1J10;
   vector<int>     *trig_L2_el_L2_e22vh_loose_3j20_a4tc_EFFS;
   vector<int>     *trig_L2_el_L2_e22vh_loose_4L1J10;
   vector<int>     *trig_L2_el_L2_e22vh_loose_4j15_a4tc_EFFS;
   vector<int>     *trig_L2_el_L2_e22vh_medium;
   vector<int>     *trig_L2_el_L2_e22vh_medium1;
   vector<int>     *trig_L2_el_L2_e22vh_medium1_EFxe20_noMu;
   vector<int>     *trig_L2_el_L2_e22vh_medium1_EFxe30_noMu;
   vector<int>     *trig_L2_el_L2_e22vh_medium1_EFxe40_noMu;
   vector<int>     *trig_L2_el_L2_e22vh_medium1_mu10_EFFS;
   vector<int>     *trig_L2_el_L2_e22vh_medium2;
   vector<int>     *trig_L2_el_L2_e22vh_medium_IDTrkNoCut;
   vector<int>     *trig_L2_el_L2_e22vh_medium_SiTrk;
   vector<int>     *trig_L2_el_L2_e22vh_medium_TRT;
   vector<int>     *trig_L2_el_L2_e25_loose2_xe20_noL2;
   vector<int>     *trig_L2_el_L2_e25i5vh_medium2;
   vector<int>     *trig_L2_el_L2_e25i6vh_medium2;
   vector<int>     *trig_L2_el_L2_e25vh_medium1;
   vector<int>     *trig_L2_el_L2_e30vh_medium2;
   vector<int>     *trig_L2_el_L2_e9_tight_e4_etcut_Jpsi;
   vector<int>     *trig_L2_ph_L2_g200_etcut;
   vector<int>     *trig_EF_el_EF_2e12Tvh_medium;
   vector<int>     *trig_EF_el_EF_2e15vh_loose1_Zee;
   vector<int>     *trig_EF_el_EF_2e15vh_loose_Zee;
   vector<int>     *trig_EF_el_EF_2e15vh_medium;
   vector<int>     *trig_EF_el_EF_e10_etcut_mu10;
   vector<int>     *trig_EF_el_EF_e10_loose1;
   vector<int>     *trig_EF_el_EF_e12Tvh_medium;
   vector<int>     *trig_EF_el_EF_e12Tvh_medium_2e6T_medium;
   vector<int>     *trig_EF_el_EF_e12Tvh_medium_mu6;
   vector<int>     *trig_EF_el_EF_e12Tvh_medium_mu6_topo_medium;
   vector<int>     *trig_EF_el_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20;
   vector<int>     *trig_EF_el_EF_e13_etcutTrk_xs60_noMu;
   vector<int>     *trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07;
   vector<int>     *trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20;
   vector<int>     *trig_EF_el_EF_e14_tight_e4_etcut_Jpsi;
   vector<int>     *trig_EF_el_EF_e15vh_loose1_e12Tvh_loose1_Zee;
   vector<int>     *trig_EF_el_EF_e15vh_medium;
   vector<int>     *trig_EF_el_EF_e15vh_medium_xe40_noMu;
   vector<int>     *trig_EF_el_EF_e15vh_medium_xe50_noMu;
   vector<int>     *trig_EF_el_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20;
   vector<int>     *trig_EF_el_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07;
   vector<int>     *trig_EF_el_EF_e22_etcut_e10_loose1;
   vector<int>     *trig_EF_el_EF_e22_etcut_mu10;
   vector<int>     *trig_EF_el_EF_e22_loose1_e10_etcut;
   vector<int>     *trig_EF_el_EF_e22i6vh_medium2;
   vector<int>     *trig_EF_el_EF_e22vh_loose;
   vector<int>     *trig_EF_el_EF_e22vh_loose1;
   vector<int>     *trig_EF_el_EF_e22vh_loose1_e10_loose1;
   vector<int>     *trig_EF_el_EF_e22vh_looseTrk;
   vector<int>     *trig_EF_el_EF_e22vh_loose_2j20_a4tc_EFFS;
   vector<int>     *trig_EF_el_EF_e22vh_loose_3L1J10;
   vector<int>     *trig_EF_el_EF_e22vh_loose_3j20_a4tc_EFFS;
   vector<int>     *trig_EF_el_EF_e22vh_loose_4L1J10;
   vector<int>     *trig_EF_el_EF_e22vh_loose_4j15_a4tc_EFFS;
   vector<int>     *trig_EF_el_EF_e22vh_medium;
   vector<int>     *trig_EF_el_EF_e22vh_medium1;
   vector<int>     *trig_EF_el_EF_e22vh_medium1_3j10_a4tc_EFFS;
   vector<int>     *trig_EF_el_EF_e22vh_medium1_3j15_a4tc_EFFS;
   vector<int>     *trig_EF_el_EF_e22vh_medium1_4j10_a4tc_EFFS;
   vector<int>     *trig_EF_el_EF_e22vh_medium1_EFxe20_noMu;
   vector<int>     *trig_EF_el_EF_e22vh_medium1_EFxe30_noMu;
   vector<int>     *trig_EF_el_EF_e22vh_medium1_EFxe40_noMu;
   vector<int>     *trig_EF_el_EF_e22vh_medium1_mu10_EFFS;
   vector<int>     *trig_EF_el_EF_e22vh_medium2;
   vector<int>     *trig_EF_el_EF_e22vh_medium_IDTrkNoCut;
   vector<int>     *trig_EF_el_EF_e22vh_medium_SiTrk;
   vector<int>     *trig_EF_el_EF_e22vh_medium_TRT;
   vector<int>     *trig_EF_el_EF_e25_loose2_xe20_noMu_recoil40;
   vector<int>     *trig_EF_el_EF_e25i5vh_medium2;
   vector<int>     *trig_EF_el_EF_e25i6vh_medium2;
   vector<int>     *trig_EF_el_EF_e25vh_medium1;
   vector<int>     *trig_EF_el_EF_e30vh_medium2;
   vector<int>     *trig_EF_el_EF_e9_tight_e4_etcut_Jpsi;
   vector<int>     *trig_EF_ph_EF_g200_etcut;

   // List of branches
   TBranch        *b_EF_2e10_medium;   //!
   TBranch        *b_EF_2e10_medium_mu6;   //!
   TBranch        *b_EF_2e11T_medium;   //!
   TBranch        *b_EF_2e12T_medium;   //!
   TBranch        *b_EF_2e12_medium;   //!
   TBranch        *b_EF_2e15_loose;   //!
   TBranch        *b_EF_2e15_medium;   //!
   TBranch        *b_EF_2e5_medium;   //!
   TBranch        *b_EF_2e5_medium_SiTrk;   //!
   TBranch        *b_EF_2e5_medium_TRT;   //!
   TBranch        *b_EF_2e5_tight;   //!
   TBranch        *b_EF_2e5_tight_Jpsi;   //!
   TBranch        *b_EF_2g10_loose;   //!
   TBranch        *b_EF_2g15_loose;   //!
   TBranch        *b_EF_2g20_loose;   //!
   TBranch        *b_EF_2g50_etcut;   //!
   TBranch        *b_EF_2j45_a4tc_EFFS_leadingmct100_xe40_medium_noMu;   //!
   TBranch        *b_EF_2j55_a4tc_EFFS_leadingmct100_xe40_medium_noMu;   //!
   TBranch        *b_EF_2mu10;   //!
   TBranch        *b_EF_2mu4;   //!
   TBranch        *b_EF_2mu4_xe30_noMu;   //!
   TBranch        *b_EF_2mu4_xe40_noMu;   //!
   TBranch        *b_EF_MU0_j45_a4tc_EFFS_xe45_loose_noMu;   //!
   TBranch        *b_EF_e10_NoCut;   //!
   TBranch        *b_EF_e10_loose;   //!
   TBranch        *b_EF_e10_loose_mu10;   //!
   TBranch        *b_EF_e10_loose_mu6;   //!
   TBranch        *b_EF_e10_medium;   //!
   TBranch        *b_EF_e10_medium_2mu6;   //!
   TBranch        *b_EF_e10_medium_mu10;   //!
   TBranch        *b_EF_e10_medium_mu6;   //!
   TBranch        *b_EF_e10_medium_mu6_topo_medium;   //!
   TBranch        *b_EF_e11T_medium;   //!
   TBranch        *b_EF_e11T_medium_2e6T_medium;   //!
   TBranch        *b_EF_e11_etcut;   //!
   TBranch        *b_EF_e12T_medium_mu6_topo_medium;   //!
   TBranch        *b_EF_e12_medium;   //!
   TBranch        *b_EF_e13_etcutTRT_xs60_noMu;   //!
   TBranch        *b_EF_e13_etcut_xs60_noMu;   //!
   TBranch        *b_EF_e13_etcut_xs70_noMu;   //!
   TBranch        *b_EF_e15_HLTtighter;   //!
   TBranch        *b_EF_e15_loose;   //!
   TBranch        *b_EF_e15_medium;   //!
   TBranch        *b_EF_e15_medium_e12_medium;   //!
   TBranch        *b_EF_e15_medium_mu6;   //!
   TBranch        *b_EF_e15_medium_xe30_noMu;   //!
   TBranch        *b_EF_e15_medium_xe35_loose_noMu;   //!
   TBranch        *b_EF_e15_medium_xe35_noMu;   //!
   TBranch        *b_EF_e15_medium_xe40_loose_noMu;   //!
   TBranch        *b_EF_e15_medium_xe40_noMu;   //!
   TBranch        *b_EF_e15_medium_xe50_noMu;   //!
   TBranch        *b_EF_e15_tight;   //!
   TBranch        *b_EF_e15_tight1;   //!
   TBranch        *b_EF_e15_tight_xe30_noMu;   //!
   TBranch        *b_EF_e18_medium;   //!
   TBranch        *b_EF_e18_medium_xe30_noMu;   //!
   TBranch        *b_EF_e18_tight;   //!
   TBranch        *b_EF_e20_L2Star_IDTrkNoCut;   //!
   TBranch        *b_EF_e20_etcut_xs60_noMu;   //!
   TBranch        *b_EF_e20_loose;   //!
   TBranch        *b_EF_e20_loose1;   //!
   TBranch        *b_EF_e20_looseTrk;   //!
   TBranch        *b_EF_e20_loose_2j10_a4tc_EFFS;   //!
   TBranch        *b_EF_e20_loose_3j10_a4tc_EFFS;   //!
   TBranch        *b_EF_e20_loose_4j10_a4tc_EFFS;   //!
   TBranch        *b_EF_e20_loose_IDTrkNoCut;   //!
   TBranch        *b_EF_e20_loose_TRT;   //!
   TBranch        *b_EF_e20_loose_xe20;   //!
   TBranch        *b_EF_e20_loose_xe20_noMu;   //!
   TBranch        *b_EF_e20_loose_xe30;   //!
   TBranch        *b_EF_e20_loose_xe30_noMu;   //!
   TBranch        *b_EF_e20_medium;   //!
   TBranch        *b_EF_e20_medium1;   //!
   TBranch        *b_EF_e20_medium2;   //!
   TBranch        *b_EF_e20_medium_IDTrkNoCut;   //!
   TBranch        *b_EF_e20_medium_SiTrk;   //!
   TBranch        *b_EF_e20_medium_TRT;   //!
   TBranch        *b_EF_e20_tight;   //!
   TBranch        *b_EF_e20_tight_e15_NoCut_Zee;   //!
   TBranch        *b_EF_e22_etcut_xs60_noMu;   //!
   TBranch        *b_EF_e22_loose;   //!
   TBranch        *b_EF_e22_loose1;   //!
   TBranch        *b_EF_e22_looseTrk;   //!
   TBranch        *b_EF_e22_medium;   //!
   TBranch        *b_EF_e22_medium1;   //!
   TBranch        *b_EF_e22_medium2;   //!
   TBranch        *b_EF_e22_medium_IDTrkNoCut;   //!
   TBranch        *b_EF_e22_medium_SiTrk;   //!
   TBranch        *b_EF_e22_medium_TRT;   //!
   TBranch        *b_EF_e22_tight;   //!
   TBranch        *b_EF_e25_loose;   //!
   TBranch        *b_EF_e25_medium;   //!
   TBranch        *b_EF_e30_loose;   //!
   TBranch        *b_EF_e30_medium;   //!
   TBranch        *b_EF_e33_medium;   //!
   TBranch        *b_EF_e35_medium;   //!
   TBranch        *b_EF_e40_medium;   //!
   TBranch        *b_EF_e45_medium;   //!
   TBranch        *b_EF_e45_medium1;   //!
   TBranch        *b_EF_e5_NoCut_L2SW;   //!
   TBranch        *b_EF_e5_NoCut_Ringer;   //!
   TBranch        *b_EF_e5_NoCut_firstempty;   //!
   TBranch        *b_EF_e5_medium_mu4;   //!
   TBranch        *b_EF_e5_medium_mu6;   //!
   TBranch        *b_EF_e5_medium_mu6_topo_loose;   //!
   TBranch        *b_EF_e5_medium_mu6_topo_medium;   //!
   TBranch        *b_EF_e5_tight;   //!
   TBranch        *b_EF_e5_tight_TRT;   //!
   TBranch        *b_EF_e5_tight_e14_etcut_Jpsi;   //!
   TBranch        *b_EF_e5_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_EF_e5_tight_e4_etcut_Jpsi_SiTrk;   //!
   TBranch        *b_EF_e5_tight_e4_etcut_Jpsi_TRT;   //!
   TBranch        *b_EF_e5_tight_e5_NoCut;   //!
   TBranch        *b_EF_e5_tight_e5_NoCut_Jpsi;   //!
   TBranch        *b_EF_e5_tight_e7_etcut_Jpsi;   //!
   TBranch        *b_EF_e5_tight_e9_etcut_Jpsi;   //!
   TBranch        *b_EF_e60_loose;   //!
   TBranch        *b_EF_e6T_medium;   //!
   TBranch        *b_EF_e7_tight_e14_etcut_Jpsi;   //!
   TBranch        *b_EF_e9_tight_e5_tight_Jpsi;   //!
   TBranch        *b_EF_eb_physics;   //!
   TBranch        *b_EF_eb_physics_empty;   //!
   TBranch        *b_EF_eb_physics_firstempty;   //!
   TBranch        *b_EF_eb_physics_noL1PS;   //!
   TBranch        *b_EF_eb_physics_unpaired_iso;   //!
   TBranch        *b_EF_eb_physics_unpaired_noniso;   //!
   TBranch        *b_EF_eb_random;   //!
   TBranch        *b_EF_eb_random_empty;   //!
   TBranch        *b_EF_eb_random_firstempty;   //!
   TBranch        *b_EF_eb_random_unpaired_iso;   //!
   TBranch        *b_EF_em105_passHLT;   //!
   TBranch        *b_EF_g100_etcut_g50_etcut;   //!
   TBranch        *b_EF_g100_loose;   //!
   TBranch        *b_EF_g10_NoCut_cosmic;   //!
   TBranch        *b_EF_g11_etcut;   //!
   TBranch        *b_EF_g11_etcut_larcalib;   //!
   TBranch        *b_EF_g13_etcut_xs60_noMu;   //!
   TBranch        *b_EF_g150_etcut;   //!
   TBranch        *b_EF_g15_loose;   //!
   TBranch        *b_EF_g15_loose_larcalib;   //!
   TBranch        *b_EF_g17_etcut;   //!
   TBranch        *b_EF_g17_etcut_EFxe20_noMu;   //!
   TBranch        *b_EF_g17_etcut_EFxe30_noMu;   //!
   TBranch        *b_EF_g20_etcut;   //!
   TBranch        *b_EF_g20_etcut_xe30_noMu;   //!
   TBranch        *b_EF_g20_loose;   //!
   TBranch        *b_EF_g20_loose_cnv;   //!
   TBranch        *b_EF_g20_loose_larcalib;   //!
   TBranch        *b_EF_g20_loose_xe20_noMu;   //!
   TBranch        *b_EF_g20_loose_xe30_noMu;   //!
   TBranch        *b_EF_g20_tight;   //!
   TBranch        *b_EF_g22_hiptrt;   //!
   TBranch        *b_EF_g25_loose_xe30_noMu;   //!
   TBranch        *b_EF_g27_etcut;   //!
   TBranch        *b_EF_g27_etcut_EFxe30_noMu;   //!
   TBranch        *b_EF_g30_loose_g20_loose;   //!
   TBranch        *b_EF_g40_loose;   //!
   TBranch        *b_EF_g40_loose_EFxe35_noMu;   //!
   TBranch        *b_EF_g40_loose_EFxe40_noMu;   //!
   TBranch        *b_EF_g40_loose_b10_medium;   //!
   TBranch        *b_EF_g40_loose_larcalib;   //!
   TBranch        *b_EF_g40_loose_xe40_noMu;   //!
   TBranch        *b_EF_g40_loose_xe45_medium_noMu;   //!
   TBranch        *b_EF_g40_loose_xe55_medium_noMu;   //!
   TBranch        *b_EF_g40_loose_xs35_noMu;   //!
   TBranch        *b_EF_g40_tight;   //!
   TBranch        *b_EF_g40_tight_b10_medium;   //!
   TBranch        *b_EF_g40_tight_b15_medium;   //!
   TBranch        *b_EF_g50_loose;   //!
   TBranch        *b_EF_g5_NoCut_cosmic;   //!
   TBranch        *b_EF_g60_loose;   //!
   TBranch        *b_EF_g60_loose_larcalib;   //!
   TBranch        *b_EF_g80_loose;   //!
   TBranch        *b_EF_g80_loose_larcalib;   //!
   TBranch        *b_EF_j55_a4tc_EFFS_xe55_medium_noMu_dphi2j30xe10;   //!
   TBranch        *b_EF_j55_a4tc_EFFS_xe55_medium_noMu_dphi2j30xe10_l2cleancons;   //!
   TBranch        *b_EF_j65_a4tc_EFFS_xe65_noMu_dphi2j30xe10;   //!
   TBranch        *b_EF_j75_a4tc_EFFS_xe40_loose_noMu;   //!
   TBranch        *b_EF_j75_a4tc_EFFS_xe40_loose_noMu_dphijxe03;   //!
   TBranch        *b_EF_j75_a4tc_EFFS_xe45_loose_noMu;   //!
   TBranch        *b_EF_j75_a4tc_EFFS_xe55_loose_noMu;   //!
   TBranch        *b_EF_j75_a4tc_EFFS_xe55_noMu;   //!
   TBranch        *b_EF_j75_a4tc_EFFS_xe55_noMu_l2cleancons;   //!
   TBranch        *b_EF_j80_a4tc_EFFS_xe60_noMu;   //!
   TBranch        *b_EF_mu10;   //!
   TBranch        *b_EF_mu13;   //!
   TBranch        *b_EF_mu15_xe30_noMu;   //!
   TBranch        *b_EF_mu15_xe35_noMu;   //!
   TBranch        *b_EF_mu20;   //!
   TBranch        *b_EF_mu20_MSonly;   //!
   TBranch        *b_EF_mu4;   //!
   TBranch        *b_EF_mu4_j45_a4tc_EFFS_xe45_loose_noMu;   //!
   TBranch        *b_EF_mu6;   //!
   TBranch        *b_EF_tau16_j75_a4tc_EFFS_xe40_loose_noMu;   //!
   TBranch        *b_EF_tau16_loose_xe20_noMu;   //!
   TBranch        *b_EF_tau16_loose_xe25_noMu;   //!
   TBranch        *b_EF_tau16_loose_xe30_noMu;   //!
   TBranch        *b_EF_tau16_medium_xe22_noMu;   //!
   TBranch        *b_EF_tau16_medium_xe25_noMu;   //!
   TBranch        *b_EF_tau16_medium_xe25_tight_noMu;   //!
   TBranch        *b_EF_tau29_loose_j45_a4tc_EFFS_xe40_noMu;   //!
   TBranch        *b_EF_tau29_medium_xe35_noMu;   //!
   TBranch        *b_EF_tau29_medium_xe40_loose_noMu;   //!
   TBranch        *b_EF_xe20_noMu;   //!
   TBranch        *b_EF_xe30_noMu;   //!
   TBranch        *b_EF_xe35_noMu;   //!
   TBranch        *b_EF_xe40_noMu;   //!
   TBranch        *b_EF_xe50_noMu;   //!
   TBranch        *b_EF_xe60_noMu;   //!
   TBranch        *b_EF_xe60_tight_noMu;   //!
   TBranch        *b_EF_xe60_verytight_noMu;   //!
   TBranch        *b_EF_xe70_noMu;   //!
   TBranch        *b_EF_xe70_tight_noMu;   //!
   TBranch        *b_EF_xe80_noMu;   //!
   TBranch        *b_EF_xe90_noMu;   //!
   TBranch        *b_L1_2EM10;   //!
   TBranch        *b_L1_2EM14;   //!
   TBranch        *b_L1_2EM3;   //!
   TBranch        *b_L1_2EM3_EM10;   //!
   TBranch        *b_L1_2EM3_EM12;   //!
   TBranch        *b_L1_2EM3_EM7;   //!
   TBranch        *b_L1_2EM5;   //!
   TBranch        *b_L1_2EM5_EM10;   //!
   TBranch        *b_L1_2EM5_EM12;   //!
   TBranch        *b_L1_2EM5_MU6;   //!
   TBranch        *b_L1_2EM5_NL;   //!
   TBranch        *b_L1_2EM7;   //!
   TBranch        *b_L1_2EM7_EM10;   //!
   TBranch        *b_L1_2J20_XE20;   //!
   TBranch        *b_L1_2J30_XE20;   //!
   TBranch        *b_L1_2MU0_XE20;   //!
   TBranch        *b_L1_2MU0_XE25;   //!
   TBranch        *b_L1_EM10;   //!
   TBranch        *b_L1_EM10_MU6;   //!
   TBranch        *b_L1_EM10_XE20;   //!
   TBranch        *b_L1_EM10_XE30;   //!
   TBranch        *b_L1_EM10_XS45;   //!
   TBranch        *b_L1_EM10_XS50;   //!
   TBranch        *b_L1_EM12;   //!
   TBranch        *b_L1_EM14;   //!
   TBranch        *b_L1_EM14_XE10;   //!
   TBranch        *b_L1_EM14_XE20;   //!
   TBranch        *b_L1_EM16;   //!
   TBranch        *b_L1_EM3;   //!
   TBranch        *b_L1_EM30;   //!
   TBranch        *b_L1_EM3_EMPTY;   //!
   TBranch        *b_L1_EM3_FIRSTEMPTY;   //!
   TBranch        *b_L1_EM3_MU0;   //!
   TBranch        *b_L1_EM3_MU6;   //!
   TBranch        *b_L1_EM3_UNPAIRED_ISO;   //!
   TBranch        *b_L1_EM3_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_EM5;   //!
   TBranch        *b_L1_EM5_2MU6;   //!
   TBranch        *b_L1_EM5_EMPTY;   //!
   TBranch        *b_L1_EM5_MU10;   //!
   TBranch        *b_L1_EM5_MU6;   //!
   TBranch        *b_L1_EM7;   //!
   TBranch        *b_L1_J30_XE35;   //!
   TBranch        *b_L1_J30_XE40;   //!
   TBranch        *b_L1_J50_XE20;   //!
   TBranch        *b_L1_J50_XE30;   //!
   TBranch        *b_L1_J50_XE35;   //!
   TBranch        *b_L1_J50_XE40;   //!
   TBranch        *b_L1_MU0;   //!
   TBranch        *b_L1_MU0_J20_XE20;   //!
   TBranch        *b_L1_MU10;   //!
   TBranch        *b_L1_MU10_XE20;   //!
   TBranch        *b_L1_MU20;   //!
   TBranch        *b_L1_MU6;   //!
   TBranch        *b_L1_TAU11_2J10_J20_XE20;   //!
   TBranch        *b_L1_TAU11_XE10_3J10;   //!
   TBranch        *b_L1_TAU11_XE20;   //!
   TBranch        *b_L1_TAU15_XE10_3J10;   //!
   TBranch        *b_L1_TAU15_XE20;   //!
   TBranch        *b_L1_TAU6_J50_XE20;   //!
   TBranch        *b_L1_TAU6_XE10;   //!
   TBranch        *b_L1_XE10;   //!
   TBranch        *b_L1_XE20;   //!
   TBranch        *b_L1_XE25;   //!
   TBranch        *b_L1_XE30;   //!
   TBranch        *b_L1_XE35;   //!
   TBranch        *b_L1_XE40;   //!
   TBranch        *b_L1_XE50;   //!
   TBranch        *b_L1_XE60;   //!
   TBranch        *b_L2_2e10_medium;   //!
   TBranch        *b_L2_2e10_medium_mu6;   //!
   TBranch        *b_L2_2e11T_medium;   //!
   TBranch        *b_L2_2e12T_medium;   //!
   TBranch        *b_L2_2e12_medium;   //!
   TBranch        *b_L2_2e15_loose;   //!
   TBranch        *b_L2_2e15_medium;   //!
   TBranch        *b_L2_2e5_medium;   //!
   TBranch        *b_L2_2e5_medium_SiTrk;   //!
   TBranch        *b_L2_2e5_medium_TRT;   //!
   TBranch        *b_L2_2e5_tight;   //!
   TBranch        *b_L2_2e5_tight_Jpsi;   //!
   TBranch        *b_L2_2g10_loose;   //!
   TBranch        *b_L2_2g15_loose;   //!
   TBranch        *b_L2_2g20_loose;   //!
   TBranch        *b_L2_2g50_etcut;   //!
   TBranch        *b_L2_2j40_anymct100_xe20_medium_noMu;   //!
   TBranch        *b_L2_2j50_anymct100_xe20_medium_noMu;   //!
   TBranch        *b_L2_2mu4;   //!
   TBranch        *b_L2_2mu4_xe20_noMu;   //!
   TBranch        *b_L2_2mu4_xe25_noMu;   //!
   TBranch        *b_L2_MU0_j40_xe20_loose_noMu;   //!
   TBranch        *b_L2_e10_NoCut;   //!
   TBranch        *b_L2_e10_loose;   //!
   TBranch        *b_L2_e10_loose_mu10;   //!
   TBranch        *b_L2_e10_loose_mu6;   //!
   TBranch        *b_L2_e10_medium;   //!
   TBranch        *b_L2_e10_medium_2mu6;   //!
   TBranch        *b_L2_e10_medium_mu10;   //!
   TBranch        *b_L2_e10_medium_mu6;   //!
   TBranch        *b_L2_e10_medium_mu6_topo_medium;   //!
   TBranch        *b_L2_e11T_medium;   //!
   TBranch        *b_L2_e11T_medium_2e6T_medium;   //!
   TBranch        *b_L2_e11_etcut;   //!
   TBranch        *b_L2_e12T_medium_mu6_topo_medium;   //!
   TBranch        *b_L2_e12_medium;   //!
   TBranch        *b_L2_e13_etcut_xs45_noMu;   //!
   TBranch        *b_L2_e15_HLTtighter;   //!
   TBranch        *b_L2_e15_loose;   //!
   TBranch        *b_L2_e15_medium;   //!
   TBranch        *b_L2_e15_medium_e12_medium;   //!
   TBranch        *b_L2_e15_medium_mu6;   //!
   TBranch        *b_L2_e15_medium_xe20_noMu;   //!
   TBranch        *b_L2_e15_medium_xe25_noMu;   //!
   TBranch        *b_L2_e15_medium_xe30_noMu;   //!
   TBranch        *b_L2_e15_medium_xe35_noMu;   //!
   TBranch        *b_L2_e15_medium_xe40_loose_noMu;   //!
   TBranch        *b_L2_e15_tight;   //!
   TBranch        *b_L2_e15_tight1;   //!
   TBranch        *b_L2_e15_tight_xe30_noMu;   //!
   TBranch        *b_L2_e18_medium;   //!
   TBranch        *b_L2_e18_medium_xe20_noMu;   //!
   TBranch        *b_L2_e18_tight;   //!
   TBranch        *b_L2_e20_L2Star_IDTrkNoCut;   //!
   TBranch        *b_L2_e20_etcut_xs45_noMu;   //!
   TBranch        *b_L2_e20_loose;   //!
   TBranch        *b_L2_e20_loose1;   //!
   TBranch        *b_L2_e20_looseTrk;   //!
   TBranch        *b_L2_e20_loose_2j10_a4tc_EFFS;   //!
   TBranch        *b_L2_e20_loose_3j10_a4tc_EFFS;   //!
   TBranch        *b_L2_e20_loose_4j10_a4tc_EFFS;   //!
   TBranch        *b_L2_e20_loose_IDTrkNoCut;   //!
   TBranch        *b_L2_e20_loose_TRT;   //!
   TBranch        *b_L2_e20_loose_xe20;   //!
   TBranch        *b_L2_e20_loose_xe20_noMu;   //!
   TBranch        *b_L2_e20_loose_xe30;   //!
   TBranch        *b_L2_e20_loose_xe30_noMu;   //!
   TBranch        *b_L2_e20_medium;   //!
   TBranch        *b_L2_e20_medium1;   //!
   TBranch        *b_L2_e20_medium2;   //!
   TBranch        *b_L2_e20_medium_IDTrkNoCut;   //!
   TBranch        *b_L2_e20_medium_SiTrk;   //!
   TBranch        *b_L2_e20_medium_TRT;   //!
   TBranch        *b_L2_e20_tight;   //!
   TBranch        *b_L2_e20_tight_e15_NoCut_Zee;   //!
   TBranch        *b_L2_e22_etcut_xs45_noMu;   //!
   TBranch        *b_L2_e22_loose;   //!
   TBranch        *b_L2_e22_loose1;   //!
   TBranch        *b_L2_e22_looseTrk;   //!
   TBranch        *b_L2_e22_medium;   //!
   TBranch        *b_L2_e22_medium1;   //!
   TBranch        *b_L2_e22_medium2;   //!
   TBranch        *b_L2_e22_medium_IDTrkNoCut;   //!
   TBranch        *b_L2_e22_medium_SiTrk;   //!
   TBranch        *b_L2_e22_medium_TRT;   //!
   TBranch        *b_L2_e22_tight;   //!
   TBranch        *b_L2_e25_loose;   //!
   TBranch        *b_L2_e25_medium;   //!
   TBranch        *b_L2_e30_loose;   //!
   TBranch        *b_L2_e30_medium;   //!
   TBranch        *b_L2_e33_medium;   //!
   TBranch        *b_L2_e35_medium;   //!
   TBranch        *b_L2_e40_medium;   //!
   TBranch        *b_L2_e45_medium;   //!
   TBranch        *b_L2_e45_medium1;   //!
   TBranch        *b_L2_e5_NoCut_L2SW;   //!
   TBranch        *b_L2_e5_NoCut_Ringer;   //!
   TBranch        *b_L2_e5_NoCut_firstempty;   //!
   TBranch        *b_L2_e5_medium_mu4;   //!
   TBranch        *b_L2_e5_medium_mu6;   //!
   TBranch        *b_L2_e5_medium_mu6_topo_loose;   //!
   TBranch        *b_L2_e5_medium_mu6_topo_medium;   //!
   TBranch        *b_L2_e5_tight;   //!
   TBranch        *b_L2_e5_tight_TRT;   //!
   TBranch        *b_L2_e5_tight_e14_etcut_Jpsi;   //!
   TBranch        *b_L2_e5_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_L2_e5_tight_e4_etcut_Jpsi_SiTrk;   //!
   TBranch        *b_L2_e5_tight_e4_etcut_Jpsi_TRT;   //!
   TBranch        *b_L2_e5_tight_e5_NoCut;   //!
   TBranch        *b_L2_e5_tight_e5_NoCut_Jpsi;   //!
   TBranch        *b_L2_e5_tight_e7_etcut_Jpsi;   //!
   TBranch        *b_L2_e5_tight_e9_etcut_Jpsi;   //!
   TBranch        *b_L2_e60_loose;   //!
   TBranch        *b_L2_e6T_medium;   //!
   TBranch        *b_L2_e7_tight_e14_etcut_Jpsi;   //!
   TBranch        *b_L2_e9_tight_e5_tight_Jpsi;   //!
   TBranch        *b_L2_eb_physics;   //!
   TBranch        *b_L2_eb_physics_empty;   //!
   TBranch        *b_L2_eb_physics_firstempty;   //!
   TBranch        *b_L2_eb_physics_noL1PS;   //!
   TBranch        *b_L2_eb_physics_unpaired_iso;   //!
   TBranch        *b_L2_eb_physics_unpaired_noniso;   //!
   TBranch        *b_L2_eb_random;   //!
   TBranch        *b_L2_eb_random_empty;   //!
   TBranch        *b_L2_eb_random_firstempty;   //!
   TBranch        *b_L2_eb_random_unpaired_iso;   //!
   TBranch        *b_L2_em105_passHLT;   //!
   TBranch        *b_L2_em3_empty_larcalib;   //!
   TBranch        *b_L2_em5_empty_larcalib;   //!
   TBranch        *b_L2_g100_etcut_g50_etcut;   //!
   TBranch        *b_L2_g100_loose;   //!
   TBranch        *b_L2_g10_NoCut_cosmic;   //!
   TBranch        *b_L2_g11_etcut;   //!
   TBranch        *b_L2_g13_etcut_xs45_noMu;   //!
   TBranch        *b_L2_g150_etcut;   //!
   TBranch        *b_L2_g15_loose;   //!
   TBranch        *b_L2_g17_etcut;   //!
   TBranch        *b_L2_g17_etcut_EFxe20_noMu;   //!
   TBranch        *b_L2_g17_etcut_EFxe30_noMu;   //!
   TBranch        *b_L2_g20_etcut;   //!
   TBranch        *b_L2_g20_etcut_xe30_noMu;   //!
   TBranch        *b_L2_g20_loose;   //!
   TBranch        *b_L2_g20_loose_cnv;   //!
   TBranch        *b_L2_g20_loose_xe20_noMu;   //!
   TBranch        *b_L2_g20_loose_xe30_noMu;   //!
   TBranch        *b_L2_g20_tight;   //!
   TBranch        *b_L2_g22_hiptrt;   //!
   TBranch        *b_L2_g25_loose_xe30_noMu;   //!
   TBranch        *b_L2_g27_etcut;   //!
   TBranch        *b_L2_g27_etcut_EFxe30_noMu;   //!
   TBranch        *b_L2_g30_loose_g20_loose;   //!
   TBranch        *b_L2_g40_loose;   //!
   TBranch        *b_L2_g40_loose_EFxe35_noMu;   //!
   TBranch        *b_L2_g40_loose_EFxe40_noMu;   //!
   TBranch        *b_L2_g40_loose_b10_medium;   //!
   TBranch        *b_L2_g40_loose_xe30_medium_noMu;   //!
   TBranch        *b_L2_g40_loose_xe35_medium_noMu;   //!
   TBranch        *b_L2_g40_loose_xe40_noMu;   //!
   TBranch        *b_L2_g40_loose_xs35_noMu;   //!
   TBranch        *b_L2_g40_tight;   //!
   TBranch        *b_L2_g40_tight_b10_medium;   //!
   TBranch        *b_L2_g40_tight_b15_medium;   //!
   TBranch        *b_L2_g50_loose;   //!
   TBranch        *b_L2_g5_NoCut_cosmic;   //!
   TBranch        *b_L2_g60_loose;   //!
   TBranch        *b_L2_g80_loose;   //!
   TBranch        *b_L2_j50_xe35_medium_noMu;   //!
   TBranch        *b_L2_j50_xe35_medium_noMu_l2cleancons;   //!
   TBranch        *b_L2_j60_xe45_noMu;   //!
   TBranch        *b_L2_j70_xe20_loose_noMu;   //!
   TBranch        *b_L2_j70_xe25_loose_noMu;   //!
   TBranch        *b_L2_j70_xe35_noMu;   //!
   TBranch        *b_L2_j70_xe35_noMu_l2cleancons;   //!
   TBranch        *b_L2_j75_xe40_noMu;   //!
   TBranch        *b_L2_mu10;   //!
   TBranch        *b_L2_mu13;   //!
   TBranch        *b_L2_mu15_xe20_noMu;   //!
   TBranch        *b_L2_mu20;   //!
   TBranch        *b_L2_mu20_MSonly;   //!
   TBranch        *b_L2_mu4;   //!
   TBranch        *b_L2_mu4_j40_xe20_loose_noMu;   //!
   TBranch        *b_L2_mu6;   //!
   TBranch        *b_L2_tau16_j70_xe20_loose_noMu;   //!
   TBranch        *b_L2_tau16_loose_xe20_noMu;   //!
   TBranch        *b_L2_tau16_loose_xe25_noMu;   //!
   TBranch        *b_L2_tau16_loose_xe30_noMu;   //!
   TBranch        *b_L2_tau16_medium_xe22_noMu;   //!
   TBranch        *b_L2_tau16_medium_xe25_noMu;   //!
   TBranch        *b_L2_tau16_medium_xe25_tight_noMu;   //!
   TBranch        *b_L2_tau29_loose_j40_xe20_noMu;   //!
   TBranch        *b_L2_tau29_medium_xe25_noMu;   //!
   TBranch        *b_L2_tau29_medium_xe30_loose_noMu;   //!
   TBranch        *b_L2_xe10_noMu;   //!
   TBranch        *b_L2_xe20_noMu;   //!
   TBranch        *b_L2_xe25_noMu;   //!
   TBranch        *b_L2_xe30_noMu;   //!
   TBranch        *b_L2_xe35_noMu;   //!
   TBranch        *b_L2_xe40_noMu;   //!
   TBranch        *b_L2_xe45_noMu;   //!
   TBranch        *b_L2_xe50_noMu;   //!
   TBranch        *b_L2_xe55_noMu;   //!
   TBranch        *b_L2_xe60_noMu;   //!
   TBranch        *b_L2_xe70_noMu;   //!
   TBranch        *b_trig_L2_el_L2_2e10_medium;   //!
   TBranch        *b_trig_L2_el_L2_2e10_medium_mu6;   //!
   TBranch        *b_trig_L2_el_L2_2e11T_medium;   //!
   TBranch        *b_trig_L2_el_L2_2e12T_medium;   //!
   TBranch        *b_trig_L2_el_L2_2e12_medium;   //!
   TBranch        *b_trig_L2_el_L2_2e15_loose;   //!
   TBranch        *b_trig_L2_el_L2_2e15_medium;   //!
   TBranch        *b_trig_L2_el_L2_2e5_medium;   //!
   TBranch        *b_trig_L2_el_L2_2e5_medium_SiTrk;   //!
   TBranch        *b_trig_L2_el_L2_2e5_medium_TRT;   //!
   TBranch        *b_trig_L2_el_L2_2e5_tight;   //!
   TBranch        *b_trig_L2_el_L2_2e5_tight_Jpsi;   //!
   TBranch        *b_trig_L2_el_L2_e10_NoCut;   //!
   TBranch        *b_trig_L2_el_L2_e10_loose;   //!
   TBranch        *b_trig_L2_el_L2_e10_loose_mu10;   //!
   TBranch        *b_trig_L2_el_L2_e10_loose_mu6;   //!
   TBranch        *b_trig_L2_el_L2_e10_medium;   //!
   TBranch        *b_trig_L2_el_L2_e10_medium_2mu6;   //!
   TBranch        *b_trig_L2_el_L2_e10_medium_mu10;   //!
   TBranch        *b_trig_L2_el_L2_e10_medium_mu6;   //!
   TBranch        *b_trig_L2_el_L2_e10_medium_mu6_topo_medium;   //!
   TBranch        *b_trig_L2_el_L2_e11T_medium;   //!
   TBranch        *b_trig_L2_el_L2_e11T_medium_2e6T_medium;   //!
   TBranch        *b_trig_L2_el_L2_e11_etcut;   //!
   TBranch        *b_trig_L2_el_L2_e12T_medium_mu6_topo_medium;   //!
   TBranch        *b_trig_L2_el_L2_e12_medium;   //!
   TBranch        *b_trig_L2_el_L2_e13_etcut_xs45_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e15_HLTtighter;   //!
   TBranch        *b_trig_L2_el_L2_e15_loose;   //!
   TBranch        *b_trig_L2_el_L2_e15_medium;   //!
   TBranch        *b_trig_L2_el_L2_e15_medium_e12_medium;   //!
   TBranch        *b_trig_L2_el_L2_e15_medium_mu6;   //!
   TBranch        *b_trig_L2_el_L2_e15_medium_xe20_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e15_medium_xe25_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e15_medium_xe30_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e15_medium_xe35_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e15_medium_xe40_loose_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e15_tight;   //!
   TBranch        *b_trig_L2_el_L2_e15_tight1;   //!
   TBranch        *b_trig_L2_el_L2_e15_tight_xe30_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e18_medium;   //!
   TBranch        *b_trig_L2_el_L2_e18_medium_xe20_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e18_tight;   //!
   TBranch        *b_trig_L2_el_L2_e20_L2Star_IDTrkNoCut;   //!
   TBranch        *b_trig_L2_el_L2_e20_etcut_xs45_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e20_loose;   //!
   TBranch        *b_trig_L2_el_L2_e20_loose1;   //!
   TBranch        *b_trig_L2_el_L2_e20_looseTrk;   //!
   TBranch        *b_trig_L2_el_L2_e20_loose_2j10_a4tc_EFFS;   //!
   TBranch        *b_trig_L2_el_L2_e20_loose_3j10_a4tc_EFFS;   //!
   TBranch        *b_trig_L2_el_L2_e20_loose_4j10_a4tc_EFFS;   //!
   TBranch        *b_trig_L2_el_L2_e20_loose_IDTrkNoCut;   //!
   TBranch        *b_trig_L2_el_L2_e20_loose_TRT;   //!
   TBranch        *b_trig_L2_el_L2_e20_loose_xe20;   //!
   TBranch        *b_trig_L2_el_L2_e20_loose_xe20_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e20_loose_xe30;   //!
   TBranch        *b_trig_L2_el_L2_e20_loose_xe30_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e20_medium;   //!
   TBranch        *b_trig_L2_el_L2_e20_medium1;   //!
   TBranch        *b_trig_L2_el_L2_e20_medium2;   //!
   TBranch        *b_trig_L2_el_L2_e20_medium_IDTrkNoCut;   //!
   TBranch        *b_trig_L2_el_L2_e20_medium_SiTrk;   //!
   TBranch        *b_trig_L2_el_L2_e20_medium_TRT;   //!
   TBranch        *b_trig_L2_el_L2_e20_tight;   //!
   TBranch        *b_trig_L2_el_L2_e20_tight_e15_NoCut_Zee;   //!
   TBranch        *b_trig_L2_el_L2_e22_etcut_xs45_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e22_loose;   //!
   TBranch        *b_trig_L2_el_L2_e22_loose1;   //!
   TBranch        *b_trig_L2_el_L2_e22_looseTrk;   //!
   TBranch        *b_trig_L2_el_L2_e22_medium;   //!
   TBranch        *b_trig_L2_el_L2_e22_medium1;   //!
   TBranch        *b_trig_L2_el_L2_e22_medium2;   //!
   TBranch        *b_trig_L2_el_L2_e22_medium_IDTrkNoCut;   //!
   TBranch        *b_trig_L2_el_L2_e22_medium_SiTrk;   //!
   TBranch        *b_trig_L2_el_L2_e22_medium_TRT;   //!
   TBranch        *b_trig_L2_el_L2_e22_tight;   //!
   TBranch        *b_trig_L2_el_L2_e25_loose;   //!
   TBranch        *b_trig_L2_el_L2_e25_medium;   //!
   TBranch        *b_trig_L2_el_L2_e30_loose;   //!
   TBranch        *b_trig_L2_el_L2_e30_medium;   //!
   TBranch        *b_trig_L2_el_L2_e33_medium;   //!
   TBranch        *b_trig_L2_el_L2_e35_medium;   //!
   TBranch        *b_trig_L2_el_L2_e40_medium;   //!
   TBranch        *b_trig_L2_el_L2_e45_medium;   //!
   TBranch        *b_trig_L2_el_L2_e45_medium1;   //!
   TBranch        *b_trig_L2_el_L2_e5_NoCut_L2SW;   //!
   TBranch        *b_trig_L2_el_L2_e5_NoCut_Ringer;   //!
   TBranch        *b_trig_L2_el_L2_e5_NoCut_firstempty;   //!
   TBranch        *b_trig_L2_el_L2_e5_medium_mu4;   //!
   TBranch        *b_trig_L2_el_L2_e5_medium_mu6;   //!
   TBranch        *b_trig_L2_el_L2_e5_medium_mu6_topo_loose;   //!
   TBranch        *b_trig_L2_el_L2_e5_medium_mu6_topo_medium;   //!
   TBranch        *b_trig_L2_el_L2_e5_tight;   //!
   TBranch        *b_trig_L2_el_L2_e5_tight_TRT;   //!
   TBranch        *b_trig_L2_el_L2_e5_tight_e14_etcut_Jpsi;   //!
   TBranch        *b_trig_L2_el_L2_e5_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_SiTrk;   //!
   TBranch        *b_trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_TRT;   //!
   TBranch        *b_trig_L2_el_L2_e5_tight_e5_NoCut;   //!
   TBranch        *b_trig_L2_el_L2_e5_tight_e5_NoCut_Jpsi;   //!
   TBranch        *b_trig_L2_el_L2_e5_tight_e7_etcut_Jpsi;   //!
   TBranch        *b_trig_L2_el_L2_e5_tight_e9_etcut_Jpsi;   //!
   TBranch        *b_trig_L2_el_L2_e60_loose;   //!
   TBranch        *b_trig_L2_el_L2_e6T_medium;   //!
   TBranch        *b_trig_L2_el_L2_e7_tight_e14_etcut_Jpsi;   //!
   TBranch        *b_trig_L2_el_L2_e9_tight_e5_tight_Jpsi;   //!
   TBranch        *b_trig_L2_el_L2_eb_physics;   //!
   TBranch        *b_trig_L2_el_L2_eb_physics_empty;   //!
   TBranch        *b_trig_L2_el_L2_eb_physics_firstempty;   //!
   TBranch        *b_trig_L2_el_L2_eb_physics_noL1PS;   //!
   TBranch        *b_trig_L2_el_L2_eb_physics_unpaired_iso;   //!
   TBranch        *b_trig_L2_el_L2_eb_physics_unpaired_noniso;   //!
   TBranch        *b_trig_L2_el_L2_eb_random;   //!
   TBranch        *b_trig_L2_el_L2_eb_random_empty;   //!
   TBranch        *b_trig_L2_el_L2_eb_random_firstempty;   //!
   TBranch        *b_trig_L2_el_L2_eb_random_unpaired_iso;   //!
   TBranch        *b_trig_L2_el_L2_em105_passHLT;   //!
   TBranch        *b_trig_L2_el_L2_em3_empty_larcalib;   //!
   TBranch        *b_trig_L2_el_L2_em5_empty_larcalib;   //!
   TBranch        *b_trig_L2_ph_L2_2g10_loose;   //!
   TBranch        *b_trig_L2_ph_L2_2g15_loose;   //!
   TBranch        *b_trig_L2_ph_L2_2g20_loose;   //!
   TBranch        *b_trig_L2_ph_L2_2g50_etcut;   //!
   TBranch        *b_trig_L2_ph_L2_g100_etcut_g50_etcut;   //!
   TBranch        *b_trig_L2_ph_L2_g100_loose;   //!
   TBranch        *b_trig_L2_ph_L2_g10_NoCut_cosmic;   //!
   TBranch        *b_trig_L2_ph_L2_g11_etcut;   //!
   TBranch        *b_trig_L2_ph_L2_g13_etcut_xs45_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g150_etcut;   //!
   TBranch        *b_trig_L2_ph_L2_g15_loose;   //!
   TBranch        *b_trig_L2_ph_L2_g17_etcut;   //!
   TBranch        *b_trig_L2_ph_L2_g17_etcut_EFxe20_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g17_etcut_EFxe30_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g20_etcut;   //!
   TBranch        *b_trig_L2_ph_L2_g20_etcut_xe30_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g20_loose;   //!
   TBranch        *b_trig_L2_ph_L2_g20_loose_cnv;   //!
   TBranch        *b_trig_L2_ph_L2_g20_loose_xe20_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g20_loose_xe30_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g20_tight;   //!
   TBranch        *b_trig_L2_ph_L2_g22_hiptrt;   //!
   TBranch        *b_trig_L2_ph_L2_g25_loose_xe30_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g27_etcut;   //!
   TBranch        *b_trig_L2_ph_L2_g27_etcut_EFxe30_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g30_loose_g20_loose;   //!
   TBranch        *b_trig_L2_ph_L2_g40_loose;   //!
   TBranch        *b_trig_L2_ph_L2_g40_loose_EFxe35_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g40_loose_EFxe40_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g40_loose_b10_medium;   //!
   TBranch        *b_trig_L2_ph_L2_g40_loose_xe30_medium_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g40_loose_xe35_medium_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g40_loose_xe40_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g40_loose_xs35_noMu;   //!
   TBranch        *b_trig_L2_ph_L2_g40_tight;   //!
   TBranch        *b_trig_L2_ph_L2_g40_tight_b10_medium;   //!
   TBranch        *b_trig_L2_ph_L2_g40_tight_b15_medium;   //!
   TBranch        *b_trig_L2_ph_L2_g50_loose;   //!
   TBranch        *b_trig_L2_ph_L2_g5_NoCut_cosmic;   //!
   TBranch        *b_trig_L2_ph_L2_g60_loose;   //!
   TBranch        *b_trig_L2_ph_L2_g80_loose;   //!
   TBranch        *b_trig_EF_el_EF_2e10_medium;   //!
   TBranch        *b_trig_EF_el_EF_2e10_medium_mu6;   //!
   TBranch        *b_trig_EF_el_EF_2e11T_medium;   //!
   TBranch        *b_trig_EF_el_EF_2e12T_medium;   //!
   TBranch        *b_trig_EF_el_EF_2e12_medium;   //!
   TBranch        *b_trig_EF_el_EF_2e15_loose;   //!
   TBranch        *b_trig_EF_el_EF_2e15_medium;   //!
   TBranch        *b_trig_EF_el_EF_2e5_medium;   //!
   TBranch        *b_trig_EF_el_EF_2e5_medium_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_2e5_medium_TRT;   //!
   TBranch        *b_trig_EF_el_EF_2e5_tight;   //!
   TBranch        *b_trig_EF_el_EF_2e5_tight_Jpsi;   //!
   TBranch        *b_trig_EF_el_EF_e10_NoCut;   //!
   TBranch        *b_trig_EF_el_EF_e10_loose;   //!
   TBranch        *b_trig_EF_el_EF_e10_loose_mu10;   //!
   TBranch        *b_trig_EF_el_EF_e10_loose_mu6;   //!
   TBranch        *b_trig_EF_el_EF_e10_medium;   //!
   TBranch        *b_trig_EF_el_EF_e10_medium_2mu6;   //!
   TBranch        *b_trig_EF_el_EF_e10_medium_mu10;   //!
   TBranch        *b_trig_EF_el_EF_e10_medium_mu6;   //!
   TBranch        *b_trig_EF_el_EF_e10_medium_mu6_topo_medium;   //!
   TBranch        *b_trig_EF_el_EF_e11T_medium;   //!
   TBranch        *b_trig_EF_el_EF_e11T_medium_2e6T_medium;   //!
   TBranch        *b_trig_EF_el_EF_e11_etcut;   //!
   TBranch        *b_trig_EF_el_EF_e12T_medium_mu6_topo_medium;   //!
   TBranch        *b_trig_EF_el_EF_e12_medium;   //!
   TBranch        *b_trig_EF_el_EF_e13_etcutTRT_xs60_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e13_etcut_xs60_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e13_etcut_xs70_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e15_HLTtighter;   //!
   TBranch        *b_trig_EF_el_EF_e15_loose;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium_e12_medium;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium_mu6;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium_xe30_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium_xe35_loose_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium_xe35_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium_xe40_loose_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium_xe40_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium_xe50_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e15_tight;   //!
   TBranch        *b_trig_EF_el_EF_e15_tight1;   //!
   TBranch        *b_trig_EF_el_EF_e15_tight_xe30_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e18_medium;   //!
   TBranch        *b_trig_EF_el_EF_e18_medium_xe30_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e18_tight;   //!
   TBranch        *b_trig_EF_el_EF_e20_L2Star_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_el_EF_e20_etcut_xs60_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose1;   //!
   TBranch        *b_trig_EF_el_EF_e20_looseTrk;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_2j10_a4tc_EFFS;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_3j10_a4tc_EFFS;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_4j10_a4tc_EFFS;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_xe20;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_xe20_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_xe30;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_xe30_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e20_medium;   //!
   TBranch        *b_trig_EF_el_EF_e20_medium1;   //!
   TBranch        *b_trig_EF_el_EF_e20_medium2;   //!
   TBranch        *b_trig_EF_el_EF_e20_medium_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_el_EF_e20_medium_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_e20_medium_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e20_tight;   //!
   TBranch        *b_trig_EF_el_EF_e20_tight_e15_NoCut_Zee;   //!
   TBranch        *b_trig_EF_el_EF_e22_etcut_xs60_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e22_loose;   //!
   TBranch        *b_trig_EF_el_EF_e22_loose1;   //!
   TBranch        *b_trig_EF_el_EF_e22_looseTrk;   //!
   TBranch        *b_trig_EF_el_EF_e22_medium;   //!
   TBranch        *b_trig_EF_el_EF_e22_medium1;   //!
   TBranch        *b_trig_EF_el_EF_e22_medium2;   //!
   TBranch        *b_trig_EF_el_EF_e22_medium_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_el_EF_e22_medium_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_e22_medium_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e22_tight;   //!
   TBranch        *b_trig_EF_el_EF_e25_loose;   //!
   TBranch        *b_trig_EF_el_EF_e25_medium;   //!
   TBranch        *b_trig_EF_el_EF_e30_loose;   //!
   TBranch        *b_trig_EF_el_EF_e30_medium;   //!
   TBranch        *b_trig_EF_el_EF_e33_medium;   //!
   TBranch        *b_trig_EF_el_EF_e35_medium;   //!
   TBranch        *b_trig_EF_el_EF_e40_medium;   //!
   TBranch        *b_trig_EF_el_EF_e45_medium;   //!
   TBranch        *b_trig_EF_el_EF_e45_medium1;   //!
   TBranch        *b_trig_EF_el_EF_e5_NoCut_L2SW;   //!
   TBranch        *b_trig_EF_el_EF_e5_NoCut_Ringer;   //!
   TBranch        *b_trig_EF_el_EF_e5_NoCut_firstempty;   //!
   TBranch        *b_trig_EF_el_EF_e5_medium_mu4;   //!
   TBranch        *b_trig_EF_el_EF_e5_medium_mu6;   //!
   TBranch        *b_trig_EF_el_EF_e5_medium_mu6_topo_loose;   //!
   TBranch        *b_trig_EF_el_EF_e5_medium_mu6_topo_medium;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_e14_etcut_Jpsi;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_e5_NoCut;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_e5_NoCut_Jpsi;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_e7_etcut_Jpsi;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_e9_etcut_Jpsi;   //!
   TBranch        *b_trig_EF_el_EF_e60_loose;   //!
   TBranch        *b_trig_EF_el_EF_e6T_medium;   //!
   TBranch        *b_trig_EF_el_EF_e7_tight_e14_etcut_Jpsi;   //!
   TBranch        *b_trig_EF_el_EF_e9_tight_e5_tight_Jpsi;   //!
   TBranch        *b_trig_EF_el_EF_eb_physics;   //!
   TBranch        *b_trig_EF_el_EF_eb_physics_empty;   //!
   TBranch        *b_trig_EF_el_EF_eb_physics_firstempty;   //!
   TBranch        *b_trig_EF_el_EF_eb_physics_noL1PS;   //!
   TBranch        *b_trig_EF_el_EF_eb_physics_unpaired_iso;   //!
   TBranch        *b_trig_EF_el_EF_eb_physics_unpaired_noniso;   //!
   TBranch        *b_trig_EF_el_EF_eb_random;   //!
   TBranch        *b_trig_EF_el_EF_eb_random_empty;   //!
   TBranch        *b_trig_EF_el_EF_eb_random_firstempty;   //!
   TBranch        *b_trig_EF_el_EF_eb_random_unpaired_iso;   //!
   TBranch        *b_trig_EF_el_EF_em105_passHLT;   //!
   TBranch        *b_trig_EF_ph_EF_2g10_loose;   //!
   TBranch        *b_trig_EF_ph_EF_2g15_loose;   //!
   TBranch        *b_trig_EF_ph_EF_2g20_loose;   //!
   TBranch        *b_trig_EF_ph_EF_2g50_etcut;   //!
   TBranch        *b_trig_EF_ph_EF_g100_etcut_g50_etcut;   //!
   TBranch        *b_trig_EF_ph_EF_g100_loose;   //!
   TBranch        *b_trig_EF_ph_EF_g10_NoCut_cosmic;   //!
   TBranch        *b_trig_EF_ph_EF_g11_etcut;   //!
   TBranch        *b_trig_EF_ph_EF_g11_etcut_larcalib;   //!
   TBranch        *b_trig_EF_ph_EF_g13_etcut_xs60_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g150_etcut;   //!
   TBranch        *b_trig_EF_ph_EF_g15_loose;   //!
   TBranch        *b_trig_EF_ph_EF_g15_loose_larcalib;   //!
   TBranch        *b_trig_EF_ph_EF_g17_etcut;   //!
   TBranch        *b_trig_EF_ph_EF_g17_etcut_EFxe20_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g17_etcut_EFxe30_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g20_etcut;   //!
   TBranch        *b_trig_EF_ph_EF_g20_etcut_xe30_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g20_loose;   //!
   TBranch        *b_trig_EF_ph_EF_g20_loose_cnv;   //!
   TBranch        *b_trig_EF_ph_EF_g20_loose_larcalib;   //!
   TBranch        *b_trig_EF_ph_EF_g20_loose_xe20_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g20_loose_xe30_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g20_tight;   //!
   TBranch        *b_trig_EF_ph_EF_g22_hiptrt;   //!
   TBranch        *b_trig_EF_ph_EF_g25_loose_xe30_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g27_etcut;   //!
   TBranch        *b_trig_EF_ph_EF_g27_etcut_EFxe30_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g30_loose_g20_loose;   //!
   TBranch        *b_trig_EF_ph_EF_g40_loose;   //!
   TBranch        *b_trig_EF_ph_EF_g40_loose_EFxe35_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g40_loose_EFxe40_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g40_loose_b10_medium;   //!
   TBranch        *b_trig_EF_ph_EF_g40_loose_larcalib;   //!
   TBranch        *b_trig_EF_ph_EF_g40_loose_xe40_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g40_loose_xe45_medium_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g40_loose_xe55_medium_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g40_loose_xs35_noMu;   //!
   TBranch        *b_trig_EF_ph_EF_g40_tight;   //!
   TBranch        *b_trig_EF_ph_EF_g40_tight_b10_medium;   //!
   TBranch        *b_trig_EF_ph_EF_g40_tight_b15_medium;   //!
   TBranch        *b_trig_EF_ph_EF_g50_loose;   //!
   TBranch        *b_trig_EF_ph_EF_g5_NoCut_cosmic;   //!
   TBranch        *b_trig_EF_ph_EF_g60_loose;   //!
   TBranch        *b_trig_EF_ph_EF_g60_loose_larcalib;   //!
   TBranch        *b_trig_EF_ph_EF_g80_loose;   //!
   TBranch        *b_trig_EF_ph_EF_g80_loose_larcalib;   //!
   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_timestamp;   //!
   TBranch        *b_timestamp_ns;   //!
   TBranch        *b_lbn;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_detmask0;   //!
   TBranch        *b_detmask1;   //!
   TBranch        *b_actualIntPerXing;   //!
   TBranch        *b_averageIntPerXing;   //!
   TBranch        *b_mc_channel_number;   //!
   TBranch        *b_mc_event_number;   //!
   TBranch        *b_mc_event_weight;   //!
   TBranch        *b_pixelFlags;   //!
   TBranch        *b_sctFlags;   //!
   TBranch        *b_trtFlags;   //!
   TBranch        *b_larFlags;   //!
   TBranch        *b_tileFlags;   //!
   TBranch        *b_muonFlags;   //!
   TBranch        *b_fwdFlags;   //!
   TBranch        *b_coreFlags;   //!
   TBranch        *b_pixelError;   //!
   TBranch        *b_sctError;   //!
   TBranch        *b_trtError;   //!
   TBranch        *b_larError;   //!
   TBranch        *b_tileError;   //!
   TBranch        *b_muonError;   //!
   TBranch        *b_fwdError;   //!
   TBranch        *b_coreError;   //!
   TBranch        *b_isSimulation;   //!
   TBranch        *b_isCalibration;   //!
   TBranch        *b_isTestBeam;   //!
   TBranch        *b_mb_n;   //!
   TBranch        *b_mb_E;   //!
   TBranch        *b_mb_eta;   //!
   TBranch        *b_mb_phi;   //!
   TBranch        *b_mb_time;   //!
   TBranch        *b_mb_quality;   //!
   TBranch        *b_mb_type;   //!
   TBranch        *b_mb_module;   //!
   TBranch        *b_mb_channel;   //!
   TBranch        *b_mbtime_timeDiff;   //!
   TBranch        *b_mbtime_timeA;   //!
   TBranch        *b_mbtime_timeC;   //!
   TBranch        *b_mbtime_countA;   //!
   TBranch        *b_mbtime_countC;   //!
   TBranch        *b_L1_MBTS_2;   //!
   TBranch        *b_L1_MBTS_2_BGRP7;   //!
   TBranch        *b_L1_MBTS_2_UNPAIRED_ISO;   //!
   TBranch        *b_L1_MBTS_4_4;   //!
   TBranch        *b_L1_MBTS_4_4_EMPTY;   //!
   TBranch        *b_collcand_passCaloTime;   //!
   TBranch        *b_collcand_passMBTSTime;   //!
   TBranch        *b_collcand_passTrigger;   //!
   TBranch        *b_collcand_pass;   //!
   TBranch        *b_trk_n;   //!
   TBranch        *b_trk_d0;   //!
   TBranch        *b_trk_z0;   //!
   TBranch        *b_trk_phi;   //!
   TBranch        *b_trk_theta;   //!
   TBranch        *b_trk_qoverp;   //!
   TBranch        *b_trk_pt;   //!
   TBranch        *b_trk_eta;   //!
   TBranch        *b_trk_d0_wrtPV;   //!
   TBranch        *b_trk_z0_wrtPV;   //!
   TBranch        *b_trk_phi_wrtPV;   //!
   TBranch        *b_trk_d0_wrtBS;   //!
   TBranch        *b_trk_z0_wrtBS;   //!
   TBranch        *b_trk_phi_wrtBS;   //!
   TBranch        *b_trk_chi2;   //!
   TBranch        *b_trk_ndof;   //!
   TBranch        *b_trk_nBLHits;   //!
   TBranch        *b_trk_nPixHits;   //!
   TBranch        *b_trk_nSCTHits;   //!
   TBranch        *b_trk_nTRTHits;   //!
   TBranch        *b_trk_nTRTHighTHits;   //!
   TBranch        *b_trk_nPixHoles;   //!
   TBranch        *b_trk_nSCTHoles;   //!
   TBranch        *b_trk_nTRTHoles;   //!
   TBranch        *b_trk_expectBLayerHit;   //!
   TBranch        *b_trk_nMDTHits;   //!
   TBranch        *b_trk_nCSCEtaHits;   //!
   TBranch        *b_trk_nCSCPhiHits;   //!
   TBranch        *b_trk_nRPCEtaHits;   //!
   TBranch        *b_trk_nRPCPhiHits;   //!
   TBranch        *b_trk_nTGCEtaHits;   //!
   TBranch        *b_trk_nTGCPhiHits;   //!
   TBranch        *b_trk_nHits;   //!
   TBranch        *b_trk_nHoles;   //!
   TBranch        *b_trk_hitPattern;   //!
   TBranch        *b_trk_TRTHighTHitsRatio;   //!
   TBranch        *b_trk_TRTHighTOutliersRatio;   //!
   TBranch        *b_trk_mc_probability;   //!
   TBranch        *b_trk_mc_barcode;   //!
   TBranch        *b_trk_conv_weight;   //!
   TBranch        *b_beamSpot_x;   //!
   TBranch        *b_beamSpot_y;   //!
   TBranch        *b_beamSpot_z;   //!
   TBranch        *b_beamSpot_sigma_x;   //!
   TBranch        *b_beamSpot_sigma_y;   //!
   TBranch        *b_beamSpot_sigma_z;   //!
   TBranch        *b_mu_n;   //!
   TBranch        *b_mu_E;   //!
   TBranch        *b_mu_pt;   //!
   TBranch        *b_mu_m;   //!
   TBranch        *b_mu_eta;   //!
   TBranch        *b_mu_phi;   //!
   TBranch        *b_mu_px;   //!
   TBranch        *b_mu_py;   //!
   TBranch        *b_mu_pz;   //!
   TBranch        *b_mu_charge;   //!
   TBranch        *b_mu_allauthor;   //!
   TBranch        *b_mu_hastrack;   //!
   TBranch        *b_mu_truth_dr;   //!
   TBranch        *b_mu_truth_E;   //!
   TBranch        *b_mu_truth_pt;   //!
   TBranch        *b_mu_truth_eta;   //!
   TBranch        *b_mu_truth_phi;   //!
   TBranch        *b_mu_truth_type;   //!
   TBranch        *b_mu_truth_status;   //!
   TBranch        *b_mu_truth_barcode;   //!
   TBranch        *b_mu_truth_mothertype;   //!
   TBranch        *b_mu_truth_motherbarcode;   //!
   TBranch        *b_mu_truth_matched;   //!
   TBranch        *b_mu_author;   //!
   TBranch        *b_mu_beta;   //!
   TBranch        *b_mu_isMuonLikelihood;   //!
   TBranch        *b_mu_matchchi2;   //!
   TBranch        *b_mu_matchndof;   //!
   TBranch        *b_mu_etcone20;   //!
   TBranch        *b_mu_etcone30;   //!
   TBranch        *b_mu_etcone40;   //!
   TBranch        *b_mu_nucone20;   //!
   TBranch        *b_mu_nucone30;   //!
   TBranch        *b_mu_nucone40;   //!
   TBranch        *b_mu_ptcone20;   //!
   TBranch        *b_mu_ptcone30;   //!
   TBranch        *b_mu_ptcone40;   //!
   TBranch        *b_mu_energyLossPar;   //!
   TBranch        *b_mu_energyLossErr;   //!
   TBranch        *b_mu_etCore;   //!
   TBranch        *b_mu_energyLossType;   //!
   TBranch        *b_mu_caloMuonIdTag;   //!
   TBranch        *b_mu_caloLRLikelihood;   //!
   TBranch        *b_mu_bestMatch;   //!
   TBranch        *b_mu_isStandAloneMuon;   //!
   TBranch        *b_mu_isCombinedMuon;   //!
   TBranch        *b_mu_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_isSegmentTaggedMuon;   //!
   TBranch        *b_mu_isCaloMuonId;   //!
   TBranch        *b_mu_alsoFoundByLowPt;   //!
   TBranch        *b_mu_alsoFoundByCaloMuonId;   //!
   TBranch        *b_mu_loose;   //!
   TBranch        *b_mu_medium;   //!
   TBranch        *b_mu_tight;   //!
   TBranch        *b_diphoton_n;   //!
   TBranch        *b_diphoton_fit_etaLead_zcommon;   //!
   TBranch        *b_diphoton_fit_etaSublead_zcommon;   //!
   TBranch        *b_diphoton_fit_zcommon;   //!
   TBranch        *b_diphoton_fit_sigma_zcommon;   //!
   TBranch        *b_diphoton_fit_vtxLikelihood;   //!
   TBranch        *b_diphoton_fit_mgg;   //!
   TBranch        *b_diphoton_fit_mgg_trueDir;   //!
   TBranch        *b_diphoton_fit_mgg_trueE;   //!
   TBranch        *b_diphoton_fit_fitFlag;   //!
   TBranch        *b_diphoton_fit_ptgg;   //!
   TBranch        *b_diphoton_fit_detagg;   //!
   TBranch        *b_diphoton_fit_cosThetaStar;   //!
   TBranch        *b_diphoton_onejet_cutStatus;   //!
   TBranch        *b_diphoton_onejet_ok;   //!
   TBranch        *b_diphoton_onejet_mgg;   //!
   TBranch        *b_diphoton_onejet_mggj;   //!
   TBranch        *b_diphoton_twojet_cutStatus;   //!
   TBranch        *b_diphoton_twojet_ok;   //!
   TBranch        *b_diphoton_twojet_mgg;   //!
   TBranch        *b_diphoton_twojet_mjj;   //!
   TBranch        *b_diphoton_hggZWjj_SumTracksPT;   //!
   TBranch        *b_diphoton_hggZWjj_mjjZW_tracks;   //!
   TBranch        *b_diphoton_hggZWjj_mjjZW;   //!
   TBranch        *b_diphoton_hggZWjj_ZW7Njet;   //!
   TBranch        *b_diphoton_hggZWjj_PTjjZW;   //!
   TBranch        *b_diphoton_hggZWjj_PTjjZW_tracks;   //!
   TBranch        *b_diphoton_hggZWjj_hggZWjj_ok;   //!
   TBranch        *b_diphoton_hggZWjj_hggZWdeltaRjj;   //!
   TBranch        *b_diphoton_hggZWjj_PTjZW;   //!
   TBranch        *b_diphoton_hggZWjj_PTjZWTracks;   //!
   TBranch        *b_diphoton_hggZWjj_EtajZW;   //!
   TBranch        *b_diphoton_hggZWjj_SumTracksPT4;   //!
   TBranch        *b_diphoton_hggZWjj_mjjZW4_tracks;   //!
   TBranch        *b_diphoton_hggZWjj_mjjZW4;   //!
   TBranch        *b_diphoton_hggZWjj_ZW4Njet;   //!
   TBranch        *b_diphoton_hggZWjj_PTjjZW4;   //!
   TBranch        *b_diphoton_hggZWjj_PTjjZW4_tracks;   //!
   TBranch        *b_diphoton_hggZWjj_DeltaRphotons;   //!
   TBranch        *b_diphoton_hggZWjj_PTjZW4;   //!
   TBranch        *b_diphoton_hggZWjj_PTjZW4Tracks;   //!
   TBranch        *b_diphoton_hggZWjj_EtajZW4;   //!
   TBranch        *b_diphoton_hggZWjj_hggetmiss_ok;   //!
   TBranch        *b_diphoton_hggZWjj_hgglepton_ok;   //!
   TBranch        *b_diphoton_hggZWjj_DeltaRmujet;   //!
   TBranch        *b_diphoton_HPV_zcommon;   //!
   TBranch        *b_diphoton_HPV_sigma_zcommon;   //!
   TBranch        *b_diphoton_HPV_zcommon_primVtxLH;   //!
   TBranch        *b_diphoton_HPV_vtxLikelihood;   //!
   TBranch        *b_diphoton_HPV_etaLead_zcommon;   //!
   TBranch        *b_diphoton_HPV_etaSublead_zcommon;   //!
   TBranch        *b_diphoton_HPV_mgg;   //!
   TBranch        *b_diphoton_HPV_etaLead_zcommon_primVtxLH;   //!
   TBranch        *b_diphoton_HPV_etaSublead_zcommon_primVtxLH;   //!
   TBranch        *b_diphoton_HPV_mgg_primVtxLH;   //!
   TBranch        *b_diphoton_HPV_mgg_Ztruth;   //!
   TBranch        *b_diphoton_HPV_ptgg;   //!
   TBranch        *b_diphoton_HPV_detagg;   //!
   TBranch        *b_diphoton_HPV_dphigg;   //!
   TBranch        *b_diphoton_HPV_cosTh;   //!
   TBranch        *b_diphoton_HPV_cosThCS;   //!
   TBranch        *b_diphoton_ph_n;   //!
   TBranch        *b_diphoton_ph_index;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_n;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_E;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_pt;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_m;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_eta;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_phi;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_EtaOrigin;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_PhiOrigin;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_MOrigin;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_EtaOriginEM;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_PhiOriginEM;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_MOriginEM;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_WIDTH;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_n90;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_Timing;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_LArQuality;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_nTrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_sumPtTrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_OriginIndex;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_HECQuality;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_NegativeE;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_AverageLArQF;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_YFlip12;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_YFlip23;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_BCH_CORR_CELL;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_BCH_CORR_JET;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_ENG_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_N_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_N_BAD_CELLS_CORR;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_BAD_CELLS_CORR_E;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_NumTowers;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_SamplingMax;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_fracSamplingMax;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_hecf;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_tgap3f;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_isUgly;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_isBadLooseMinus;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_isBadLoose;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_isBadMedium;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_isBadTight;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_emfrac;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_Offset;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_EMJES;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_EMJES_EtaCorr;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_EMJESnooffset;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_GCWJES;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_GCWJES_EtaCorr;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_CB;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_LCJES;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_emscale_E;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_emscale_pt;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_emscale_m;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_emscale_eta;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_emscale_phi;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_jvtx_x;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_jvtx_y;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_jvtx_z;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_jvtxf;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_jvtxfFull;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_GSCFactorF;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_WidthFraction;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_weight_Comb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_weight_IP2D;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_weight_IP3D;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_weight_SV0;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_weight_SV1;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_weight_SV2;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_weight_JetProb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_weight_GbbNN;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_truth_label;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_truth_dRminToB;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_truth_dRminToC;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_truth_dRminToT;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_truth_BHadronpdg;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_truth_vx_x;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_truth_vx_y;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_truth_vx_z;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_ip2d_pu;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_ip2d_pb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_ip2d_isValid;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_ip2d_ntrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_ip3d_pu;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_ip3d_pb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_ip3d_isValid;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_ip3d_ntrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv1_pu;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv1_pb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv1_isValid;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv2_pu;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv2_pb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv2_isValid;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_pu;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_pb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_pc;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_isValid;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pu;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pc;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_isValid;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx1t;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_ntrkAtVx;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_efrc;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_mass;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_sig3d;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaPhi;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaEta;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_isValid;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkv;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkj;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_n2t;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_mass;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_efrc;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_x;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_y;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_z;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_err_x;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_err_y;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_err_z;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xy;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xz;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_cov_yz;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_chi2;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_ndof;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_svp_ntrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_isValid;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkv;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkj;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_n2t;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_mass;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_efrc;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_x;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_y;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_z;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_x;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_y;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_z;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xy;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xz;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_yz;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_chi2;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_ndof;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_el_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_el_matched;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_mu_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_mu_matched;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_L1_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_L1_matched;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_L2_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_L2_matched;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_EF_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEMJets_EF_matched;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_n;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_E;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_pt;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_m;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_eta;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_phi;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_EtaOrigin;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_PhiOrigin;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_MOrigin;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_EtaOriginEM;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_PhiOriginEM;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_MOriginEM;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_WIDTH;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_n90;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_Timing;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_LArQuality;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_nTrk;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_sumPtTrk;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_OriginIndex;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_HECQuality;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_NegativeE;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_AverageLArQF;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_YFlip12;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_YFlip23;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_BCH_CORR_CELL;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_BCH_CORR_JET;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_ENG_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_N_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_N_BAD_CELLS_CORR;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_BAD_CELLS_CORR_E;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_NumTowers;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_SamplingMax;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_fracSamplingMax;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_hecf;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_tgap3f;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_isUgly;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_isBadLooseMinus;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_isBadLoose;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_isBadMedium;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_isBadTight;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_emfrac;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_Offset;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_EMJES;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_EMJES_EtaCorr;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_EMJESnooffset;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_GCWJES;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_GCWJES_EtaCorr;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_CB;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_LCJES;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_emscale_E;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_emscale_pt;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_emscale_m;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_emscale_eta;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_emscale_phi;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_jvtx_x;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_jvtx_y;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_jvtx_z;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_jvtxf;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_jvtxfFull;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_GSCFactorF;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_WidthFraction;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_weight_Comb;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_weight_IP2D;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_weight_IP3D;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_weight_SV0;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_weight_SV1;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_weight_SV2;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_weight_JetProb;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_weight_GbbNN;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_truth_label;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_truth_dRminToB;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_truth_dRminToC;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_truth_dRminToT;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_truth_BHadronpdg;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_truth_vx_x;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_truth_vx_y;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_truth_vx_z;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_ip2d_pu;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_ip2d_pb;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_ip2d_isValid;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_ip2d_ntrk;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_ip3d_pu;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_ip3d_pb;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_ip3d_isValid;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_ip3d_ntrk;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv1_pu;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv1_pb;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv1_isValid;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv2_pu;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv2_pb;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv2_isValid;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_pu;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_pb;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_pc;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_isValid;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pu;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pb;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pc;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_isValid;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx1t;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_ntrkAtVx;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_efrc;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_mass;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_sig3d;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaPhi;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaEta;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_isValid;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkv;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkj;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_n2t;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_mass;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_efrc;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_x;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_y;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_z;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_err_x;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_err_y;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_err_z;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xy;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xz;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_cov_yz;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_chi2;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_ndof;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_svp_ntrk;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_isValid;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkv;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkj;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_n2t;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_mass;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_efrc;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_x;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_y;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_z;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_x;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_y;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_z;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xy;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xz;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_yz;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_chi2;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_ndof;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrk;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_el_dr;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_el_matched;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_mu_dr;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_mu_matched;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_L1_dr;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_L1_matched;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_L2_dr;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_L2_matched;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_EF_dr;   //!
   TBranch        *b_jet_AntiKt6TopoEMJets_EF_matched;   //!
   TBranch        *b_bunch_configID;   //!
   TBranch        *b_el_as_unconv_ph_n;   //!
   TBranch        *b_el_as_unconv_ph_cl_E;   //!
   TBranch        *b_el_as_unconv_ph_cl_pt;   //!
   TBranch        *b_el_as_unconv_ph_cl_eta;   //!
   TBranch        *b_el_as_unconv_ph_cl_phi;   //!
   TBranch        *b_el_as_unconv_ph_Es0;   //!
   TBranch        *b_el_as_unconv_ph_etas0;   //!
   TBranch        *b_el_as_unconv_ph_phis0;   //!
   TBranch        *b_el_as_unconv_ph_Es1;   //!
   TBranch        *b_el_as_unconv_ph_etas1;   //!
   TBranch        *b_el_as_unconv_ph_phis1;   //!
   TBranch        *b_el_as_unconv_ph_Es2;   //!
   TBranch        *b_el_as_unconv_ph_etas2;   //!
   TBranch        *b_el_as_unconv_ph_phis2;   //!
   TBranch        *b_el_as_unconv_ph_Es3;   //!
   TBranch        *b_el_as_unconv_ph_etas3;   //!
   TBranch        *b_el_as_unconv_ph_phis3;   //!
   TBranch        *b_el_as_unconv_ph_isEM;   //!
   TBranch        *b_el_as_unconv_ph_isEMLoose;   //!
   TBranch        *b_el_as_unconv_ph_isEMMedium;   //!
   TBranch        *b_el_as_unconv_ph_isEMTight;   //!
   TBranch        *b_el_as_unconv_ph_loose;   //!
   TBranch        *b_el_as_unconv_ph_tight;   //!
   TBranch        *b_el_as_unconv_ph_tightIso;   //!
   TBranch        *b_el_as_unconv_ph_Ethad;   //!
   TBranch        *b_el_as_unconv_ph_Ethad1;   //!
   TBranch        *b_el_as_unconv_ph_f1;   //!
   TBranch        *b_el_as_unconv_ph_f1core;   //!
   TBranch        *b_el_as_unconv_ph_Emins1;   //!
   TBranch        *b_el_as_unconv_ph_fside;   //!
   TBranch        *b_el_as_unconv_ph_Emax2;   //!
   TBranch        *b_el_as_unconv_ph_ws3;   //!
   TBranch        *b_el_as_unconv_ph_wstot;   //!
   TBranch        *b_el_as_unconv_ph_E132;   //!
   TBranch        *b_el_as_unconv_ph_E1152;   //!
   TBranch        *b_el_as_unconv_ph_emaxs1;   //!
   TBranch        *b_el_as_unconv_ph_deltaEs;   //!
   TBranch        *b_el_as_unconv_ph_E233;   //!
   TBranch        *b_el_as_unconv_ph_E237;   //!
   TBranch        *b_el_as_unconv_ph_E277;   //!
   TBranch        *b_el_as_unconv_ph_weta2;   //!
   TBranch        *b_el_as_conv_ph_n;   //!
   TBranch        *b_el_as_conv_ph_cl_E;   //!
   TBranch        *b_el_as_conv_ph_cl_pt;   //!
   TBranch        *b_el_as_conv_ph_cl_eta;   //!
   TBranch        *b_el_as_conv_ph_cl_phi;   //!
   TBranch        *b_el_as_conv_ph_Es0;   //!
   TBranch        *b_el_as_conv_ph_etas0;   //!
   TBranch        *b_el_as_conv_ph_phis0;   //!
   TBranch        *b_el_as_conv_ph_Es1;   //!
   TBranch        *b_el_as_conv_ph_etas1;   //!
   TBranch        *b_el_as_conv_ph_phis1;   //!
   TBranch        *b_el_as_conv_ph_Es2;   //!
   TBranch        *b_el_as_conv_ph_etas2;   //!
   TBranch        *b_el_as_conv_ph_phis2;   //!
   TBranch        *b_el_as_conv_ph_Es3;   //!
   TBranch        *b_el_as_conv_ph_etas3;   //!
   TBranch        *b_el_as_conv_ph_phis3;   //!
   TBranch        *b_el_as_conv_ph_isEM;   //!
   TBranch        *b_el_as_conv_ph_isEMLoose;   //!
   TBranch        *b_el_as_conv_ph_isEMMedium;   //!
   TBranch        *b_el_as_conv_ph_isEMTight;   //!
   TBranch        *b_el_as_conv_ph_loose;   //!
   TBranch        *b_el_as_conv_ph_tight;   //!
   TBranch        *b_el_as_conv_ph_tightIso;   //!
   TBranch        *b_el_as_conv_ph_Ethad;   //!
   TBranch        *b_el_as_conv_ph_Ethad1;   //!
   TBranch        *b_el_as_conv_ph_f1;   //!
   TBranch        *b_el_as_conv_ph_f1core;   //!
   TBranch        *b_el_as_conv_ph_Emins1;   //!
   TBranch        *b_el_as_conv_ph_fside;   //!
   TBranch        *b_el_as_conv_ph_Emax2;   //!
   TBranch        *b_el_as_conv_ph_ws3;   //!
   TBranch        *b_el_as_conv_ph_wstot;   //!
   TBranch        *b_el_as_conv_ph_E132;   //!
   TBranch        *b_el_as_conv_ph_E1152;   //!
   TBranch        *b_el_as_conv_ph_emaxs1;   //!
   TBranch        *b_el_as_conv_ph_deltaEs;   //!
   TBranch        *b_el_as_conv_ph_E233;   //!
   TBranch        *b_el_as_conv_ph_E237;   //!
   TBranch        *b_el_as_conv_ph_E277;   //!
   TBranch        *b_el_as_conv_ph_weta2;   //!
   TBranch        *b_ph_n;   //!
   TBranch        *b_ph_E;   //!
   TBranch        *b_ph_Et;   //!
   TBranch        *b_ph_pt;   //!
   TBranch        *b_ph_m;   //!
   TBranch        *b_ph_eta;   //!
   TBranch        *b_ph_phi;   //!
   TBranch        *b_ph_px;   //!
   TBranch        *b_ph_py;   //!
   TBranch        *b_ph_pz;   //!
   TBranch        *b_ph_author;   //!
   TBranch        *b_ph_isRecovered;   //!
   TBranch        *b_ph_isEM;   //!
   TBranch        *b_ph_isEMLoose;   //!
   TBranch        *b_ph_isEMMedium;   //!
   TBranch        *b_ph_isEMTight;   //!
   TBranch        *b_ph_OQ;   //!
   TBranch        *b_ph_OQRecalc;   //!
   TBranch        *b_ph_convFlag;   //!
   TBranch        *b_ph_isConv;   //!
   TBranch        *b_ph_nConv;   //!
   TBranch        *b_ph_nSingleTrackConv;   //!
   TBranch        *b_ph_nDoubleTrackConv;   //!
   TBranch        *b_ph_type;   //!
   TBranch        *b_ph_origin;   //!
   TBranch        *b_ph_truth_deltaRRecPhoton;   //!
   TBranch        *b_ph_truth_E;   //!
   TBranch        *b_ph_truth_pt;   //!
   TBranch        *b_ph_truth_eta;   //!
   TBranch        *b_ph_truth_phi;   //!
   TBranch        *b_ph_truth_type;   //!
   TBranch        *b_ph_truth_status;   //!
   TBranch        *b_ph_truth_barcode;   //!
   TBranch        *b_ph_truth_mothertype;   //!
   TBranch        *b_ph_truth_motherbarcode;   //!
   TBranch        *b_ph_truth_index;   //!
   TBranch        *b_ph_truth_matched;   //!
   TBranch        *b_ph_loose;   //!
   TBranch        *b_ph_looseIso;   //!
   TBranch        *b_ph_tight;   //!
   TBranch        *b_ph_tightIso;   //!
   TBranch        *b_ph_looseAR;   //!
   TBranch        *b_ph_looseARIso;   //!
   TBranch        *b_ph_tightAR;   //!
   TBranch        *b_ph_tightARIso;   //!
   TBranch        *b_ph_goodOQ;   //!
   TBranch        *b_ph_Ethad;   //!
   TBranch        *b_ph_Ethad1;   //!
   TBranch        *b_ph_E033;   //!
   TBranch        *b_ph_f1;   //!
   TBranch        *b_ph_f1core;   //!
   TBranch        *b_ph_Emins1;   //!
   TBranch        *b_ph_fside;   //!
   TBranch        *b_ph_Emax2;   //!
   TBranch        *b_ph_ws3;   //!
   TBranch        *b_ph_wstot;   //!
   TBranch        *b_ph_E132;   //!
   TBranch        *b_ph_E1152;   //!
   TBranch        *b_ph_emaxs1;   //!
   TBranch        *b_ph_deltaEs;   //!
   TBranch        *b_ph_E233;   //!
   TBranch        *b_ph_E237;   //!
   TBranch        *b_ph_E277;   //!
   TBranch        *b_ph_weta2;   //!
   TBranch        *b_ph_f3;   //!
   TBranch        *b_ph_f3core;   //!
   TBranch        *b_ph_rphiallcalo;   //!
   TBranch        *b_ph_Etcone45;   //!
   TBranch        *b_ph_Etcone15;   //!
   TBranch        *b_ph_Etcone20;   //!
   TBranch        *b_ph_Etcone25;   //!
   TBranch        *b_ph_Etcone30;   //!
   TBranch        *b_ph_Etcone35;   //!
   TBranch        *b_ph_Etcone40;   //!
   TBranch        *b_ph_ptcone20;   //!
   TBranch        *b_ph_ptcone30;   //!
   TBranch        *b_ph_ptcone40;   //!
   TBranch        *b_ph_nucone20;   //!
   TBranch        *b_ph_nucone30;   //!
   TBranch        *b_ph_nucone40;   //!
   TBranch        *b_ph_Etcone15_pt_corrected;   //!
   TBranch        *b_ph_Etcone20_pt_corrected;   //!
   TBranch        *b_ph_Etcone25_pt_corrected;   //!
   TBranch        *b_ph_Etcone30_pt_corrected;   //!
   TBranch        *b_ph_Etcone35_pt_corrected;   //!
   TBranch        *b_ph_Etcone40_pt_corrected;   //!
   TBranch        *b_ph_convanglematch;   //!
   TBranch        *b_ph_convtrackmatch;   //!
   TBranch        *b_ph_hasconv;   //!
   TBranch        *b_ph_convvtxx;   //!
   TBranch        *b_ph_convvtxy;   //!
   TBranch        *b_ph_convvtxz;   //!
   TBranch        *b_ph_Rconv;   //!
   TBranch        *b_ph_zconv;   //!
   TBranch        *b_ph_convvtxchi2;   //!
   TBranch        *b_ph_pt1conv;   //!
   TBranch        *b_ph_convtrk1nBLHits;   //!
   TBranch        *b_ph_convtrk1nPixHits;   //!
   TBranch        *b_ph_convtrk1nSCTHits;   //!
   TBranch        *b_ph_convtrk1nTRTHits;   //!
   TBranch        *b_ph_pt2conv;   //!
   TBranch        *b_ph_convtrk2nBLHits;   //!
   TBranch        *b_ph_convtrk2nPixHits;   //!
   TBranch        *b_ph_convtrk2nSCTHits;   //!
   TBranch        *b_ph_convtrk2nTRTHits;   //!
   TBranch        *b_ph_ptconv;   //!
   TBranch        *b_ph_pzconv;   //!
   TBranch        *b_ph_reta;   //!
   TBranch        *b_ph_rphi;   //!
   TBranch        *b_ph_EtringnoisedR03sig2;   //!
   TBranch        *b_ph_EtringnoisedR03sig3;   //!
   TBranch        *b_ph_EtringnoisedR03sig4;   //!
   TBranch        *b_ph_isolationlikelihoodjets;   //!
   TBranch        *b_ph_isolationlikelihoodhqelectrons;   //!
   TBranch        *b_ph_loglikelihood;   //!
   TBranch        *b_ph_photonweight;   //!
   TBranch        *b_ph_photonbgweight;   //!
   TBranch        *b_ph_neuralnet;   //!
   TBranch        *b_ph_Hmatrix;   //!
   TBranch        *b_ph_Hmatrix5;   //!
   TBranch        *b_ph_adaboost;   //!
   TBranch        *b_ph_zvertex;   //!
   TBranch        *b_ph_errz;   //!
   TBranch        *b_ph_etap;   //!
   TBranch        *b_ph_depth;   //!
   TBranch        *b_ph_cl_E;   //!
   TBranch        *b_ph_cl_pt;   //!
   TBranch        *b_ph_cl_eta;   //!
   TBranch        *b_ph_cl_phi;   //!
   TBranch        *b_ph_Es0;   //!
   TBranch        *b_ph_etas0;   //!
   TBranch        *b_ph_phis0;   //!
   TBranch        *b_ph_Es1;   //!
   TBranch        *b_ph_etas1;   //!
   TBranch        *b_ph_phis1;   //!
   TBranch        *b_ph_Es2;   //!
   TBranch        *b_ph_etas2;   //!
   TBranch        *b_ph_phis2;   //!
   TBranch        *b_ph_Es3;   //!
   TBranch        *b_ph_etas3;   //!
   TBranch        *b_ph_phis3;   //!
   TBranch        *b_ph_time;   //!
   TBranch        *b_ph_rawcl_Es0;   //!
   TBranch        *b_ph_rawcl_etas0;   //!
   TBranch        *b_ph_rawcl_phis0;   //!
   TBranch        *b_ph_rawcl_Es1;   //!
   TBranch        *b_ph_rawcl_etas1;   //!
   TBranch        *b_ph_rawcl_phis1;   //!
   TBranch        *b_ph_rawcl_Es2;   //!
   TBranch        *b_ph_rawcl_etas2;   //!
   TBranch        *b_ph_rawcl_phis2;   //!
   TBranch        *b_ph_rawcl_Es3;   //!
   TBranch        *b_ph_rawcl_etas3;   //!
   TBranch        *b_ph_rawcl_phis3;   //!
   TBranch        *b_ph_rawcl_E;   //!
   TBranch        *b_ph_rawcl_pt;   //!
   TBranch        *b_ph_rawcl_eta;   //!
   TBranch        *b_ph_rawcl_phi;   //!
   TBranch        *b_ph_truth_isConv;   //!
   TBranch        *b_ph_truth_isBrem;   //!
   TBranch        *b_ph_truth_isFromHardProc;   //!
   TBranch        *b_ph_truth_isPhotonFromHardProc;   //!
   TBranch        *b_ph_truth_Rconv;   //!
   TBranch        *b_ph_truth_zconv;   //!
   TBranch        *b_ph_deltaEmax2;   //!
   TBranch        *b_ph_calibHitsShowerDepth;   //!
   TBranch        *b_ph_isIso;   //!
   TBranch        *b_ph_mvaptcone20;   //!
   TBranch        *b_ph_mvaptcone30;   //!
   TBranch        *b_ph_mvaptcone40;   //!
   TBranch        *b_ph_topoEtcone20;   //!
   TBranch        *b_ph_topoEtcone40;   //!
   TBranch        *b_ph_topoEtcone60;   //!
   TBranch        *b_ph_jet_dr;   //!
   TBranch        *b_ph_jet_E;   //!
   TBranch        *b_ph_jet_pt;   //!
   TBranch        *b_ph_jet_m;   //!
   TBranch        *b_ph_jet_eta;   //!
   TBranch        *b_ph_jet_phi;   //!
   TBranch        *b_ph_jet_truth_dr;   //!
   TBranch        *b_ph_jet_truth_E;   //!
   TBranch        *b_ph_jet_truth_pt;   //!
   TBranch        *b_ph_jet_truth_m;   //!
   TBranch        *b_ph_jet_truth_eta;   //!
   TBranch        *b_ph_jet_truth_phi;   //!
   TBranch        *b_ph_jet_truth_matched;   //!
   TBranch        *b_ph_jet_matched;   //!
   TBranch        *b_ph_convIP;   //!
   TBranch        *b_ph_convIPRev;   //!
   TBranch        *b_ph_ptIsolationCone;   //!
   TBranch        *b_ph_ptIsolationConePhAngle;   //!
   TBranch        *b_ph_Etcone40_ED_corrected;   //!
   TBranch        *b_ph_Etcone40_corrected;   //!
   TBranch        *b_ph_ES0_real;   //!
   TBranch        *b_ph_ES1_real;   //!
   TBranch        *b_ph_ES2_real;   //!
   TBranch        *b_ph_ES3_real;   //!
   TBranch        *b_ph_EcellS0;   //!
   TBranch        *b_ph_etacellS0;   //!
   TBranch        *b_ph_HPV_eta;   //!
   TBranch        *b_ph_HPV_sigma_eta;   //!
   TBranch        *b_ph_HPV_convTrk1_zvertex;   //!
   TBranch        *b_ph_HPV_convTrk2_zvertex;   //!
   TBranch        *b_ph_HPV_convTrk1_sigma_zvertex;   //!
   TBranch        *b_ph_HPV_convTrk2_sigma_zvertex;   //!
   TBranch        *b_ph_CaloPointing_zvertex;   //!
   TBranch        *b_ph_CaloPointing_sigma_zvertex;   //!
   TBranch        *b_ph_CaloPointing_eta;   //!
   TBranch        *b_ph_CaloPointing_sigma_eta;   //!
   TBranch        *b_ph_HPV_zvertex;   //!
   TBranch        *b_ph_HPV_sigma_zvertex;   //!
   TBranch        *b_ph_HPV_zvertex_neutral;   //!
   TBranch        *b_ph_HPV_zvertex_charged;   //!
   TBranch        *b_ph_HPV_sigma_zvertex_neutral;   //!
   TBranch        *b_ph_HPV_sigma_zvertex_charged;   //!
   TBranch        *b_ph_ambiguityResult;   //!
   TBranch        *b_ph_itune1;   //!
   TBranch        *b_ph_itune2;   //!
   TBranch        *b_ph_itune3;   //!
   TBranch        *b_ph_trackIsol;   //!
   TBranch        *b_ph_PtIsolationCone_woIC;   //!
   TBranch        *b_ph_PtIsolationConePhAngle_woIC;   //!
   TBranch        *b_ph_trackIsol_woIC;   //!
   TBranch        *b_ph_selected;   //!
   TBranch        *b_ph_parton_pt_max_MC;   //!
   TBranch        *b_ph_parton_eta_MC;   //!
   TBranch        *b_ph_parton_phi_MC;   //!
   TBranch        *b_ph_parton_barcode_MC;   //!
   TBranch        *b_ph_parton_pdg_MC;   //!
   TBranch        *b_ph_etaS2_MC;   //!
   TBranch        *b_ph_phiS2_MC;   //!
   TBranch        *b_ph_XConv_MC;   //!
   TBranch        *b_ph_YConv_MC;   //!
   TBranch        *b_ph_isG4part;   //!
   TBranch        *b_ph_partonIsolation15_UE_MC;   //!
   TBranch        *b_ph_partonIsolation20_UE_MC;   //!
   TBranch        *b_ph_partonIsolation25_UE_MC;   //!
   TBranch        *b_ph_partonIsolation30_UE_MC;   //!
   TBranch        *b_ph_partonIsolation35_UE_MC;   //!
   TBranch        *b_ph_partonIsolation40_UE_MC;   //!
   TBranch        *b_ph_partonIsolation45_UE_MC;   //!
   TBranch        *b_ph_partonIsolation60_UE_MC;   //!
   TBranch        *b_ph_partonIsolation15_MC;   //!
   TBranch        *b_ph_partonIsolation20_MC;   //!
   TBranch        *b_ph_partonIsolation25_MC;   //!
   TBranch        *b_ph_partonIsolation30_MC;   //!
   TBranch        *b_ph_partonIsolation35_MC;   //!
   TBranch        *b_ph_partonIsolation40_MC;   //!
   TBranch        *b_ph_partonIsolation45_MC;   //!
   TBranch        *b_ph_partonIsolation60_MC;   //!
   TBranch        *b_ph_particleIsolation40_MC;   //!
   TBranch        *b_ph_particleIsolation40_ED_corrected_MC;   //!
   TBranch        *b_ph_particleIsolation40_ED_corrected_reco_MC;   //!
   TBranch        *b_ph_isGoodOQbits;   //!
   TBranch        *b_ph_isGoodOQphoton;   //!
   TBranch        *b_ph_isGoodOQelectron;   //!
   TBranch        *b_ph_convTrk1_chi2;   //!
   TBranch        *b_ph_convTrk2_chi2;   //!
   TBranch        *b_ph_convTrk1_expectHitInBLayer;   //!
   TBranch        *b_ph_convTrk1_numTRTOutliers;   //!
   TBranch        *b_ph_convTrk1_numTRTHTHits;   //!
   TBranch        *b_ph_convTrk1_numTRTHTOutliers;   //!
   TBranch        *b_ph_convTrk2_expectHitInBLayer;   //!
   TBranch        *b_ph_convTrk2_numTRTOutliers;   //!
   TBranch        *b_ph_convTrk2_numTRTHTHits;   //!
   TBranch        *b_ph_convTrk2_numTRTHTOutliers;   //!
   TBranch        *b_ph_convTrk1_trtPID;   //!
   TBranch        *b_ph_convTrk2_trtPID;   //!
   TBranch        *b_ph_convTrk1_trtPIDHT;   //!
   TBranch        *b_ph_convTrk2_trtPIDHT;   //!
   TBranch        *b_ph_convTrk1_trtPIDToT;   //!
   TBranch        *b_ph_convTrk2_trtPIDToT;   //!
   TBranch        *b_ph_convTrk1_ToTvar;   //!
   TBranch        *b_ph_convTrk2_ToTvar;   //!
   TBranch        *b_ph_convTrk1_trtRatioHT;   //!
   TBranch        *b_ph_convTrk2_trtRatioHT;   //!
   TBranch        *b_ph_convTrk1_charge;   //!
   TBranch        *b_ph_convTrk2_charge;   //!
   TBranch        *b_ph_convTrk1_DeltaEta_track_calo;   //!
   TBranch        *b_ph_convTrk2_DeltaEta_track_calo;   //!
   TBranch        *b_ph_convTrk1_DeltaPhi_track_calo;   //!
   TBranch        *b_ph_convTrk2_DeltaPhi_track_calo;   //!
   TBranch        *b_ph_XConv;   //!
   TBranch        *b_ph_YConv;   //!
   TBranch        *b_ph_conv_chi2;   //!
   TBranch        *b_ph_conv_dcottheta;   //!
   TBranch        *b_ph_conv_dphi;   //!
   TBranch        *b_ph_conv_dist;   //!
   TBranch        *b_ph_conv_DR1R2;   //!
   TBranch        *b_ph_conv_p;   //!
   TBranch        *b_ph_conv_phi;   //!
   TBranch        *b_ph_conv_theta;   //!
   TBranch        *b_ph_conv_perr;   //!
   TBranch        *b_ph_conv_phierr;   //!
   TBranch        *b_ph_conv_thetaerr;   //!
   TBranch        *b_ph_conv_GSF_p;   //!
   TBranch        *b_ph_conv_GSF_phi;   //!
   TBranch        *b_ph_conv_GSF_theta;   //!
   TBranch        *b_ph_conv_GSF_perr;   //!
   TBranch        *b_ph_conv_GSF_phierr;   //!
   TBranch        *b_ph_conv_GSF_thetaerr;   //!
   TBranch        *b_ph_conv_DNA_p;   //!
   TBranch        *b_ph_conv_DNA_phi;   //!
   TBranch        *b_ph_conv_DNA_theta;   //!
   TBranch        *b_ph_conv_DNA_perr;   //!
   TBranch        *b_ph_conv_DNA_phierr;   //!
   TBranch        *b_ph_conv_DNA_thetaerr;   //!
   TBranch        *b_ph_Etcone10_ED_corrected;   //!
   TBranch        *b_ph_Etcone15_ED_corrected;   //!
   TBranch        *b_ph_Etcone20_ED_corrected;   //!
   TBranch        *b_ph_Etcone25_ED_corrected;   //!
   TBranch        *b_ph_Etcone30_ED_corrected;   //!
   TBranch        *b_ph_Etcone35_ED_corrected;   //!
   TBranch        *b_ph_Etcone10_corrected;   //!
   TBranch        *b_ph_Etcone15_corrected;   //!
   TBranch        *b_ph_Etcone20_corrected;   //!
   TBranch        *b_ph_Etcone25_corrected;   //!
   TBranch        *b_ph_Etcone30_corrected;   //!
   TBranch        *b_ph_Etcone35_corrected;   //!
   TBranch        *b_ph_Etcone10_ED_corrected_new;   //!
   TBranch        *b_ph_Etcone15_ED_corrected_new;   //!
   TBranch        *b_ph_Etcone20_ED_corrected_new;   //!
   TBranch        *b_ph_Etcone25_ED_corrected_new;   //!
   TBranch        *b_ph_Etcone30_ED_corrected_new;   //!
   TBranch        *b_ph_Etcone35_ED_corrected_new;   //!
   TBranch        *b_ph_Etcone40_ED_corrected_new;   //!
   TBranch        *b_ph_Etcone10_corrected_new;   //!
   TBranch        *b_ph_Etcone15_corrected_new;   //!
   TBranch        *b_ph_Etcone20_corrected_new;   //!
   TBranch        *b_ph_Etcone25_corrected_new;   //!
   TBranch        *b_ph_Etcone30_corrected_new;   //!
   TBranch        *b_ph_Etcone35_corrected_new;   //!
   TBranch        *b_ph_Etcone40_corrected_new;   //!
   TBranch        *b_ph_cells35_Etcone20;   //!
   TBranch        *b_ph_cells35_Etcone30;   //!
   TBranch        *b_ph_cells35_Etcone40;   //!
   TBranch        *b_ph_cells55_Etcone20;   //!
   TBranch        *b_ph_cells55_Etcone30;   //!
   TBranch        *b_ph_cells55_Etcone40;   //!
   TBranch        *b_ph_Etcone20Iso;   //!
   TBranch        *b_ph_Etcone30Iso;   //!
   TBranch        *b_ph_Etcone40Iso;   //!
   TBranch        *b_ph_cells35_Etcone20Iso;   //!
   TBranch        *b_ph_cells35_Etcone30Iso;   //!
   TBranch        *b_ph_cells35_Etcone40Iso;   //!
   TBranch        *b_ph_cells55_Etcone20Iso;   //!
   TBranch        *b_ph_cells55_Etcone30Iso;   //!
   TBranch        *b_ph_cells55_Etcone40Iso;   //!
   TBranch        *b_ph_ED_median;   //!
   TBranch        *b_ph_ED_sigma;   //!
   TBranch        *b_ph_ED_Njets;   //!
   TBranch        *b_ph_ED_median_new;   //!
   TBranch        *b_ph_ED_sigma_new;   //!
   TBranch        *b_ph_ED_Njets_new;   //!
   TBranch        *b_ph_transmin_etcone40;   //!
   TBranch        *b_ph_transmax_etcone40;   //!
   TBranch        *b_ph_transmin_etcone100;   //!
   TBranch        *b_ph_transmax_etcone100;   //!
   TBranch        *b_ph_transmin;   //!
   TBranch        *b_ph_transmax;   //!
   TBranch        *b_ph_transmin_loweta;   //!
   TBranch        *b_ph_transmax_loweta;   //!
   TBranch        *b_ph_topodr;   //!
   TBranch        *b_ph_topopt;   //!
   TBranch        *b_ph_topoeta;   //!
   TBranch        *b_ph_topophi;   //!
   TBranch        *b_ph_topoEMsamplings_E;   //!
   TBranch        *b_ph_topoEMsamplings_Et;   //!
   TBranch        *b_ph_topoEMsamplings_eta;   //!
   TBranch        *b_ph_topoEMsamplings_phi;   //!
   TBranch        *b_ph_topoEMsamplings_uncalibrated_E;   //!
   TBranch        *b_ph_topoEMsamplings_uncalibrated_Et;   //!
   TBranch        *b_ph_topoEMsamplings_uncalibrated_eta;   //!
   TBranch        *b_ph_topoEMsamplings_uncalibrated_phi;   //!
   TBranch        *b_ph_topomatched;   //!
   TBranch        *b_ph_topoEMdr;   //!
   TBranch        *b_ph_topoEMpt;   //!
   TBranch        *b_ph_topoEMeta;   //!
   TBranch        *b_ph_topoEMphi;   //!
   TBranch        *b_ph_topoEMmatched;   //!
   TBranch        *b_ph_EF_dr;   //!
   TBranch        *b_ph_EF_index;   //!
   TBranch        *b_ph_L2_dr;   //!
   TBranch        *b_ph_L2_index;   //!
   TBranch        *b_ph_L1_dr;   //!
   TBranch        *b_ph_L1_index;   //!
   TBranch        *b_ph_jet_AntiKt4TopoEMJets_dr;   //!
   TBranch        *b_ph_jet_AntiKt4TopoEMJets_index;   //!
   TBranch        *b_ph_jet_AntiKt4TopoEMJets_matched;   //!
   TBranch        *b_ph_jet_AntiKt6TopoEMJets_dr;   //!
   TBranch        *b_ph_jet_AntiKt6TopoEMJets_index;   //!
   TBranch        *b_ph_jet_AntiKt6TopoEMJets_matched;   //!
   TBranch        *b_ph_el_index;   //!
   TBranch        *b_ph_etconoisedR04Sig2;   //!
   TBranch        *b_ph_etconoisedR04Sig3;   //!
   TBranch        *b_ph_topoEtcone30;   //!
   TBranch        *b_ph_topoEtcone50;   //!
   TBranch        *b_ph_topoEMEtcone20;   //!
   TBranch        *b_ph_topoEMEtcone30;   //!
   TBranch        *b_ph_topoEMEtcone40;   //!
   TBranch        *b_ph_topoEMEtcone50;   //!
   TBranch        *b_ph_topoEMEtcone60;   //!
   TBranch        *b_ph_convTrk_n;   //!
   TBranch        *b_ph_convTrk_index;   //!
   TBranch        *b_ph_convTrk_fitter;   //!
   TBranch        *b_ph_convTrk_patternReco1;   //!
   TBranch        *b_ph_convTrk_patternReco2;   //!
   TBranch        *b_ph_convTrk_seedFinder;   //!
   TBranch        *b_ph_vx_n;   //!
   TBranch        *b_ph_vx_convTrk_weight;   //!
   TBranch        *b_ph_vx_convTrk_n;   //!
   TBranch        *b_ph_vx_convTrk_index;   //!
   TBranch        *b_ph_vx_convTrk_fitter;   //!
   TBranch        *b_ph_vx_convTrk_patternReco1;   //!
   TBranch        *b_ph_vx_convTrk_patternReco2;   //!
   TBranch        *b_ph_vx_convTrk_seedFinder;   //!
   TBranch        *b_ph_topoPosEtcone20;   //!
   TBranch        *b_ph_topoPosEtcone30;   //!
   TBranch        *b_ph_topoPosEtcone40;   //!
   TBranch        *b_ph_topoPosEtcone50;   //!
   TBranch        *b_ph_topoPosEtcone60;   //!
   TBranch        *b_ph_topoEMPosEtcone20;   //!
   TBranch        *b_ph_topoEMPosEtcone30;   //!
   TBranch        *b_ph_topoEMPosEtcone40;   //!
   TBranch        *b_ph_topoEMPosEtcone50;   //!
   TBranch        *b_ph_topoEMPosEtcone60;   //!
   TBranch        *b_ph_topoEtcone20_TileGap3;   //!
   TBranch        *b_ph_topoEtcone30_TileGap3;   //!
   TBranch        *b_ph_topoEtcone40_TileGap3;   //!
   TBranch        *b_ph_topoEtcone50_TileGap3;   //!
   TBranch        *b_ph_topoEtcone60_TileGap3;   //!
   TBranch        *b_ph_topoPosEtcone20_TileGap3;   //!
   TBranch        *b_ph_topoPosEtcone30_TileGap3;   //!
   TBranch        *b_ph_topoPosEtcone40_TileGap3;   //!
   TBranch        *b_ph_topoPosEtcone50_TileGap3;   //!
   TBranch        *b_ph_topoPosEtcone60_TileGap3;   //!
   TBranch        *b_ph_Eraw57;   //!
   TBranch        *b_ph_etaraw57;   //!
   TBranch        *b_ph_NN_passes;   //!
   TBranch        *b_ph_NN_discriminant;   //!
   TBranch        *b_el_n;   //!
   TBranch        *b_el_E;   //!
   TBranch        *b_el_Et;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_m;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_px;   //!
   TBranch        *b_el_py;   //!
   TBranch        *b_el_pz;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_author;   //!
   TBranch        *b_el_isEM;   //!
   TBranch        *b_el_isEMLoose;   //!
   TBranch        *b_el_isEMMedium;   //!
   TBranch        *b_el_isEMTight;   //!
   TBranch        *b_el_OQ;   //!
   TBranch        *b_el_convFlag;   //!
   TBranch        *b_el_isConv;   //!
   TBranch        *b_el_nConv;   //!
   TBranch        *b_el_nSingleTrackConv;   //!
   TBranch        *b_el_nDoubleTrackConv;   //!
   TBranch        *b_el_OQRecalc;   //!
   TBranch        *b_el_type;   //!
   TBranch        *b_el_origin;   //!
   TBranch        *b_el_typebkg;   //!
   TBranch        *b_el_originbkg;   //!
   TBranch        *b_el_truth_E;   //!
   TBranch        *b_el_truth_pt;   //!
   TBranch        *b_el_truth_eta;   //!
   TBranch        *b_el_truth_phi;   //!
   TBranch        *b_el_truth_type;   //!
   TBranch        *b_el_truth_status;   //!
   TBranch        *b_el_truth_barcode;   //!
   TBranch        *b_el_truth_mothertype;   //!
   TBranch        *b_el_truth_motherbarcode;   //!
   TBranch        *b_el_truth_hasHardBrem;   //!
   TBranch        *b_el_truth_index;   //!
   TBranch        *b_el_truth_matched;   //!
   TBranch        *b_el_mediumWithoutTrack;   //!
   TBranch        *b_el_mediumIsoWithoutTrack;   //!
   TBranch        *b_el_tightWithoutTrack;   //!
   TBranch        *b_el_tightIsoWithoutTrack;   //!
   TBranch        *b_el_loose;   //!
   TBranch        *b_el_looseIso;   //!
   TBranch        *b_el_medium;   //!
   TBranch        *b_el_mediumIso;   //!
   TBranch        *b_el_tight;   //!
   TBranch        *b_el_tightIso;   //!
   TBranch        *b_el_loosePP;   //!
   TBranch        *b_el_loosePPIso;   //!
   TBranch        *b_el_mediumPP;   //!
   TBranch        *b_el_mediumPPIso;   //!
   TBranch        *b_el_tightPP;   //!
   TBranch        *b_el_tightPPIso;   //!
   TBranch        *b_el_goodOQ;   //!
   TBranch        *b_el_Ethad;   //!
   TBranch        *b_el_Ethad1;   //!
   TBranch        *b_el_f1;   //!
   TBranch        *b_el_f1core;   //!
   TBranch        *b_el_Emins1;   //!
   TBranch        *b_el_fside;   //!
   TBranch        *b_el_Emax2;   //!
   TBranch        *b_el_ws3;   //!
   TBranch        *b_el_wstot;   //!
   TBranch        *b_el_emaxs1;   //!
   TBranch        *b_el_deltaEs;   //!
   TBranch        *b_el_E233;   //!
   TBranch        *b_el_E237;   //!
   TBranch        *b_el_E277;   //!
   TBranch        *b_el_weta2;   //!
   TBranch        *b_el_f3;   //!
   TBranch        *b_el_f3core;   //!
   TBranch        *b_el_rphiallcalo;   //!
   TBranch        *b_el_Etcone45;   //!
   TBranch        *b_el_Etcone15;   //!
   TBranch        *b_el_Etcone20;   //!
   TBranch        *b_el_Etcone25;   //!
   TBranch        *b_el_Etcone30;   //!
   TBranch        *b_el_Etcone35;   //!
   TBranch        *b_el_Etcone40;   //!
   TBranch        *b_el_ptcone20;   //!
   TBranch        *b_el_ptcone30;   //!
   TBranch        *b_el_ptcone40;   //!
   TBranch        *b_el_nucone20;   //!
   TBranch        *b_el_nucone30;   //!
   TBranch        *b_el_nucone40;   //!
   TBranch        *b_el_convanglematch;   //!
   TBranch        *b_el_convtrackmatch;   //!
   TBranch        *b_el_hasconv;   //!
   TBranch        *b_el_convvtxx;   //!
   TBranch        *b_el_convvtxy;   //!
   TBranch        *b_el_convvtxz;   //!
   TBranch        *b_el_Rconv;   //!
   TBranch        *b_el_zconv;   //!
   TBranch        *b_el_convvtxchi2;   //!
   TBranch        *b_el_pt1conv;   //!
   TBranch        *b_el_convtrk1nBLHits;   //!
   TBranch        *b_el_convtrk1nPixHits;   //!
   TBranch        *b_el_convtrk1nSCTHits;   //!
   TBranch        *b_el_convtrk1nTRTHits;   //!
   TBranch        *b_el_pt2conv;   //!
   TBranch        *b_el_convtrk2nBLHits;   //!
   TBranch        *b_el_convtrk2nPixHits;   //!
   TBranch        *b_el_convtrk2nSCTHits;   //!
   TBranch        *b_el_convtrk2nTRTHits;   //!
   TBranch        *b_el_ptconv;   //!
   TBranch        *b_el_pzconv;   //!
   TBranch        *b_el_pos7;   //!
   TBranch        *b_el_etacorrmag;   //!
   TBranch        *b_el_deltaeta1;   //!
   TBranch        *b_el_deltaeta2;   //!
   TBranch        *b_el_deltaphi2;   //!
   TBranch        *b_el_deltaphiRescaled;   //!
   TBranch        *b_el_deltaPhiRot;   //!
   TBranch        *b_el_expectHitInBLayer;   //!
   TBranch        *b_el_trackd0_physics;   //!
   TBranch        *b_el_etaSampling1;   //!
   TBranch        *b_el_reta;   //!
   TBranch        *b_el_rphi;   //!
   TBranch        *b_el_refittedTrack_n;   //!
   TBranch        *b_el_firstEdens;   //!
   TBranch        *b_el_cellmaxfrac;   //!
   TBranch        *b_el_longitudinal;   //!
   TBranch        *b_el_secondlambda;   //!
   TBranch        *b_el_lateral;   //!
   TBranch        *b_el_secondR;   //!
   TBranch        *b_el_centerlambda;   //!
   TBranch        *b_el_Es0;   //!
   TBranch        *b_el_etas0;   //!
   TBranch        *b_el_phis0;   //!
   TBranch        *b_el_Es1;   //!
   TBranch        *b_el_etas1;   //!
   TBranch        *b_el_phis1;   //!
   TBranch        *b_el_Es2;   //!
   TBranch        *b_el_etas2;   //!
   TBranch        *b_el_phis2;   //!
   TBranch        *b_el_Es3;   //!
   TBranch        *b_el_etas3;   //!
   TBranch        *b_el_phis3;   //!
   TBranch        *b_el_E_PreSamplerB;   //!
   TBranch        *b_el_E_EMB1;   //!
   TBranch        *b_el_E_EMB2;   //!
   TBranch        *b_el_E_EMB3;   //!
   TBranch        *b_el_E_PreSamplerE;   //!
   TBranch        *b_el_E_EME1;   //!
   TBranch        *b_el_E_EME2;   //!
   TBranch        *b_el_E_EME3;   //!
   TBranch        *b_el_E_HEC0;   //!
   TBranch        *b_el_E_HEC1;   //!
   TBranch        *b_el_E_HEC2;   //!
   TBranch        *b_el_E_HEC3;   //!
   TBranch        *b_el_E_TileBar0;   //!
   TBranch        *b_el_E_TileBar1;   //!
   TBranch        *b_el_E_TileBar2;   //!
   TBranch        *b_el_E_TileGap1;   //!
   TBranch        *b_el_E_TileGap2;   //!
   TBranch        *b_el_E_TileGap3;   //!
   TBranch        *b_el_E_TileExt0;   //!
   TBranch        *b_el_E_TileExt1;   //!
   TBranch        *b_el_E_TileExt2;   //!
   TBranch        *b_el_E_FCAL0;   //!
   TBranch        *b_el_E_FCAL1;   //!
   TBranch        *b_el_E_FCAL2;   //!
   TBranch        *b_el_cl_E;   //!
   TBranch        *b_el_cl_pt;   //!
   TBranch        *b_el_cl_eta;   //!
   TBranch        *b_el_cl_phi;   //!
   TBranch        *b_el_time;   //!
   TBranch        *b_el_trackd0;   //!
   TBranch        *b_el_trackz0;   //!
   TBranch        *b_el_trackphi;   //!
   TBranch        *b_el_tracktheta;   //!
   TBranch        *b_el_trackqoverp;   //!
   TBranch        *b_el_trackpt;   //!
   TBranch        *b_el_tracketa;   //!
   TBranch        *b_el_nBLHits;   //!
   TBranch        *b_el_nPixHits;   //!
   TBranch        *b_el_nSCTHits;   //!
   TBranch        *b_el_nTRTHits;   //!
   TBranch        *b_el_nTRTHighTHits;   //!
   TBranch        *b_el_nPixHoles;   //!
   TBranch        *b_el_nSCTHoles;   //!
   TBranch        *b_el_nTRTHoles;   //!
   TBranch        *b_el_nBLSharedHits;   //!
   TBranch        *b_el_nPixSharedHits;   //!
   TBranch        *b_el_nSCTSharedHits;   //!
   TBranch        *b_el_nBLayerOutliers;   //!
   TBranch        *b_el_nPixelOutliers;   //!
   TBranch        *b_el_nSCTOutliers;   //!
   TBranch        *b_el_nTRTOutliers;   //!
   TBranch        *b_el_nTRTHighTOutliers;   //!
   TBranch        *b_el_expectBLayerHit;   //!
   TBranch        *b_el_nSiHits;   //!
   TBranch        *b_el_TRTHighTHitsRatio;   //!
   TBranch        *b_el_TRTHighTOutliersRatio;   //!
   TBranch        *b_el_pixeldEdx;   //!
   TBranch        *b_el_nGoodHitsPixeldEdx;   //!
   TBranch        *b_el_massPixeldEdx;   //!
   TBranch        *b_el_likelihoodsPixeldEdx;   //!
   TBranch        *b_el_eProbabilityComb;   //!
   TBranch        *b_el_eProbabilityHT;   //!
   TBranch        *b_el_eProbabilityToT;   //!
   TBranch        *b_el_eProbabilityBrem;   //!
   TBranch        *b_el_vertweight;   //!
   TBranch        *b_el_trackd0beam;   //!
   TBranch        *b_el_trackz0beam;   //!
   TBranch        *b_el_tracksigd0beam;   //!
   TBranch        *b_el_tracksigz0beam;   //!
   TBranch        *b_el_trackd0pv;   //!
   TBranch        *b_el_trackz0pv;   //!
   TBranch        *b_el_tracksigd0pv;   //!
   TBranch        *b_el_tracksigz0pv;   //!
   TBranch        *b_el_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackd0pvunbiased;   //!
   TBranch        *b_el_trackz0pvunbiased;   //!
   TBranch        *b_el_tracksigd0pvunbiased;   //!
   TBranch        *b_el_tracksigz0pvunbiased;   //!
   TBranch        *b_el_hastrack;   //!
   TBranch        *b_el_deltaEmax2;   //!
   TBranch        *b_el_calibHitsShowerDepth;   //!
   TBranch        *b_el_isIso;   //!
   TBranch        *b_el_mvaptcone20;   //!
   TBranch        *b_el_mvaptcone30;   //!
   TBranch        *b_el_mvaptcone40;   //!
   TBranch        *b_el_EF_dr;   //!
   TBranch        *b_el_EF_index;   //!
   TBranch        *b_el_L2_dr;   //!
   TBranch        *b_el_L2_index;   //!
   TBranch        *b_el_L1_dr;   //!
   TBranch        *b_el_L1_index;   //!
   TBranch        *b_el_jet_AntiKt4TopoEMJets_dr;   //!
   TBranch        *b_el_jet_AntiKt4TopoEMJets_index;   //!
   TBranch        *b_el_jet_AntiKt4TopoEMJets_matched;   //!
   TBranch        *b_el_jet_AntiKt6TopoEMJets_dr;   //!
   TBranch        *b_el_jet_AntiKt6TopoEMJets_index;   //!
   TBranch        *b_el_jet_AntiKt6TopoEMJets_matched;   //!
   TBranch        *b_el_EtringnoisedR03sig2;   //!
   TBranch        *b_el_EtringnoisedR03sig3;   //!
   TBranch        *b_el_EtringnoisedR03sig4;   //!
   TBranch        *b_el_zvertex;   //!
   TBranch        *b_el_errz;   //!
   TBranch        *b_el_etap;   //!
   TBranch        *b_el_depth;   //!
   TBranch        *b_el_Etcone15_pt_corrected;   //!
   TBranch        *b_el_Etcone20_pt_corrected;   //!
   TBranch        *b_el_Etcone25_pt_corrected;   //!
   TBranch        *b_el_Etcone30_pt_corrected;   //!
   TBranch        *b_el_Etcone35_pt_corrected;   //!
   TBranch        *b_el_Etcone40_pt_corrected;   //!
   TBranch        *b_el_ES0_real;   //!
   TBranch        *b_el_ES1_real;   //!
   TBranch        *b_el_ES2_real;   //!
   TBranch        *b_el_ES3_real;   //!
   TBranch        *b_el_EcellS0;   //!
   TBranch        *b_el_etacellS0;   //!
   TBranch        *b_el_CaloPointing_zvertex;   //!
   TBranch        *b_el_CaloPointing_sigma_zvertex;   //!
   TBranch        *b_el_CaloPointing_eta;   //!
   TBranch        *b_el_CaloPointing_sigma_eta;   //!
   TBranch        *b_el_ambiguityResult;   //!
   TBranch        *b_el_itune1;   //!
   TBranch        *b_el_itune2;   //!
   TBranch        *b_el_itune3;   //!
   TBranch        *b_el_trackIsol;   //!
   TBranch        *b_el_PtIsolationCone_woIC;   //!
   TBranch        *b_el_trackIsol_woIC;   //!
   TBranch        *b_el_isGoodOQbits;   //!
   TBranch        *b_el_isGoodOQphoton;   //!
   TBranch        *b_el_isGoodOQelectron;   //!
   TBranch        *b_el_Etcone20_ED_corrected;   //!
   TBranch        *b_el_Etcone30_ED_corrected;   //!
   TBranch        *b_el_Etcone40_ED_corrected;   //!
   TBranch        *b_el_Etcone20_corrected;   //!
   TBranch        *b_el_Etcone30_corrected;   //!
   TBranch        *b_el_Etcone40_corrected;   //!
   TBranch        *b_el_Etcone20_ED_corrected_new;   //!
   TBranch        *b_el_Etcone30_ED_corrected_new;   //!
   TBranch        *b_el_Etcone40_ED_corrected_new;   //!
   TBranch        *b_el_Etcone20_corrected_new;   //!
   TBranch        *b_el_Etcone30_corrected_new;   //!
   TBranch        *b_el_Etcone40_corrected_new;   //!
   TBranch        *b_el_ED_median;   //!
   TBranch        *b_el_ED_sigma;   //!
   TBranch        *b_el_ED_Njets;   //!
   TBranch        *b_el_ED_median_new;   //!
   TBranch        *b_el_ED_sigma_new;   //!
   TBranch        *b_el_ED_Njets_new;   //!
   TBranch        *b_el_transmin_etcone40;   //!
   TBranch        *b_el_transmax_etcone40;   //!
   TBranch        *b_el_transmin_etcone100;   //!
   TBranch        *b_el_transmax_etcone100;   //!
   TBranch        *b_el_transmin;   //!
   TBranch        *b_el_transmax;   //!
   TBranch        *b_el_transmin_loweta;   //!
   TBranch        *b_el_transmax_loweta;   //!
   TBranch        *b_el_etconoisedR04Sig2;   //!
   TBranch        *b_el_etconoisedR04Sig3;   //!
   TBranch        *b_el_topoPosEtcone20;   //!
   TBranch        *b_el_topoPosEtcone30;   //!
   TBranch        *b_el_topoPosEtcone40;   //!
   TBranch        *b_el_topoPosEtcone50;   //!
   TBranch        *b_el_topoPosEtcone60;   //!
   TBranch        *b_el_topoEMPosEtcone20;   //!
   TBranch        *b_el_topoEMPosEtcone30;   //!
   TBranch        *b_el_topoEMPosEtcone40;   //!
   TBranch        *b_el_topoEMPosEtcone50;   //!
   TBranch        *b_el_topoEMPosEtcone60;   //!
   TBranch        *b_el_topoEtcone20_TileGap3;   //!
   TBranch        *b_el_topoEtcone30_TileGap3;   //!
   TBranch        *b_el_topoEtcone40_TileGap3;   //!
   TBranch        *b_el_topoEtcone50_TileGap3;   //!
   TBranch        *b_el_topoEtcone60_TileGap3;   //!
   TBranch        *b_el_topoPosEtcone20_TileGap3;   //!
   TBranch        *b_el_topoPosEtcone30_TileGap3;   //!
   TBranch        *b_el_topoPosEtcone40_TileGap3;   //!
   TBranch        *b_el_topoPosEtcone50_TileGap3;   //!
   TBranch        *b_el_topoPosEtcone60_TileGap3;   //!
   TBranch        *b_el_Eraw57;   //!
   TBranch        *b_el_etaraw57;   //!
   TBranch        *b_el_topodr;   //!
   TBranch        *b_el_topopt;   //!
   TBranch        *b_el_topoeta;   //!
   TBranch        *b_el_topophi;   //!
   TBranch        *b_el_topoEMsamplings_E;   //!
   TBranch        *b_el_topoEMsamplings_Et;   //!
   TBranch        *b_el_topoEMsamplings_eta;   //!
   TBranch        *b_el_topoEMsamplings_phi;   //!
   TBranch        *b_el_topoEMsamplings_uncalibrated_E;   //!
   TBranch        *b_el_topoEMsamplings_uncalibrated_Et;   //!
   TBranch        *b_el_topoEMsamplings_uncalibrated_eta;   //!
   TBranch        *b_el_topoEMsamplings_uncalibrated_phi;   //!
   TBranch        *b_el_topomatched;   //!
   TBranch        *b_el_topoEtcone20;   //!
   TBranch        *b_el_topoEtcone30;   //!
   TBranch        *b_el_topoEtcone40;   //!
   TBranch        *b_el_topoEtcone50;   //!
   TBranch        *b_el_topoEtcone60;   //!
   TBranch        *b_el_topoEMEtcone20;   //!
   TBranch        *b_el_topoEMEtcone30;   //!
   TBranch        *b_el_topoEMEtcone40;   //!
   TBranch        *b_el_topoEMEtcone50;   //!
   TBranch        *b_el_topoEMEtcone60;   //!
   TBranch        *b_el_trk_index;   //!
   TBranch        *b_trig_L1_TAV;   //!
   TBranch        *b_trig_L2_passedPhysics;   //!
   TBranch        *b_trig_EF_passedPhysics;   //!
   TBranch        *b_trig_L1_TBP;   //!
   TBranch        *b_trig_L1_TAP;   //!
   TBranch        *b_trig_L2_passedRaw;   //!
   TBranch        *b_trig_EF_passedRaw;   //!
   TBranch        *b_trig_L2_truncated;   //!
   TBranch        *b_trig_EF_truncated;   //!
   TBranch        *b_trig_L2_resurrected;   //!
   TBranch        *b_trig_EF_resurrected;   //!
   TBranch        *b_trig_L2_passedThrough;   //!
   TBranch        *b_trig_EF_passedThrough;   //!
   TBranch        *b_trig_L2_wasPrescaled;   //!
   TBranch        *b_trig_L2_wasResurrected;   //!
   TBranch        *b_trig_EF_wasPrescaled;   //!
   TBranch        *b_trig_EF_wasResurrected;   //!
   TBranch        *b_trig_L1_emtau_n;   //!
   TBranch        *b_trig_L1_emtau_eta;   //!
   TBranch        *b_trig_L1_emtau_phi;   //!
   TBranch        *b_trig_L1_emtau_thrNames;   //!
   TBranch        *b_trig_L1_emtau_thrValues;   //!
   TBranch        *b_trig_L1_emtau_core;   //!
   TBranch        *b_trig_L1_emtau_EMClus;   //!
   TBranch        *b_trig_L1_emtau_tauClus;   //!
   TBranch        *b_trig_L1_emtau_EMIsol;   //!
   TBranch        *b_trig_L1_emtau_hadIsol;   //!
   TBranch        *b_trig_L1_emtau_hadCore;   //!
   TBranch        *b_trig_L1_emtau_thrPattern;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM10;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM14;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM3;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM3_EM10;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM3_EM12;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM3_EM7;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM5;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM5_EM10;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM5_EM12;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM5_MU6;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM5_NL;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM7;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM7_EM10;   //!
   TBranch        *b_trig_L1_emtau_L1_EM10;   //!
   TBranch        *b_trig_L1_emtau_L1_EM10_MU6;   //!
   TBranch        *b_trig_L1_emtau_L1_EM10_XE20;   //!
   TBranch        *b_trig_L1_emtau_L1_EM10_XE30;   //!
   TBranch        *b_trig_L1_emtau_L1_EM10_XS45;   //!
   TBranch        *b_trig_L1_emtau_L1_EM10_XS50;   //!
   TBranch        *b_trig_L1_emtau_L1_EM12;   //!
   TBranch        *b_trig_L1_emtau_L1_EM14;   //!
   TBranch        *b_trig_L1_emtau_L1_EM14_XE10;   //!
   TBranch        *b_trig_L1_emtau_L1_EM14_XE20;   //!
   TBranch        *b_trig_L1_emtau_L1_EM16;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3;   //!
   TBranch        *b_trig_L1_emtau_L1_EM30;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_EMPTY;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_FIRSTEMPTY;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_MU0;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_MU6;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_UNPAIRED_ISO;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_UNPAIRED_NONISO;   //!
   TBranch        *b_trig_L1_emtau_L1_EM5;   //!
   TBranch        *b_trig_L1_emtau_L1_EM5_2MU6;   //!
   TBranch        *b_trig_L1_emtau_L1_EM5_EMPTY;   //!
   TBranch        *b_trig_L1_emtau_L1_EM5_MU10;   //!
   TBranch        *b_trig_L1_emtau_L1_EM5_MU6;   //!
   TBranch        *b_trig_L1_emtau_L1_EM7;   //!
   TBranch        *b_trig_L2_emcl_n;   //!
   TBranch        *b_trig_L2_emcl_quality;   //!
   TBranch        *b_trig_L2_emcl_E;   //!
   TBranch        *b_trig_L2_emcl_Et;   //!
   TBranch        *b_trig_L2_emcl_eta;   //!
   TBranch        *b_trig_L2_emcl_phi;   //!
   TBranch        *b_trig_L2_emcl_E237;   //!
   TBranch        *b_trig_L2_emcl_E277;   //!
   TBranch        *b_trig_L2_emcl_fracs1;   //!
   TBranch        *b_trig_L2_emcl_weta2;   //!
   TBranch        *b_trig_L2_emcl_Ehad1;   //!
   TBranch        *b_trig_L2_emcl_eta1;   //!
   TBranch        *b_trig_L2_emcl_emaxs1;   //!
   TBranch        *b_trig_L2_emcl_e2tsts1;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_n;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_algorithmId;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_trackStatus;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_chi2Ndof;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_nStrawHits;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_nHighThrHits;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_nPixelSpacePoints;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_nSCT_SpacePoints;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_param_a0;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_param_z0;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_param_phi0;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_param_eta;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_param_pt;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_n;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_algorithmId;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_trackStatus;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_chi2Ndof;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_nStrawHits;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_nHighThrHits;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_nPixelSpacePoints;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_param_a0;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_param_z0;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_param_phi0;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_param_eta;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_param_pt;   //!
   TBranch        *b_trig_L2_el_n;   //!
   TBranch        *b_trig_L2_el_E;   //!
   TBranch        *b_trig_L2_el_Et;   //!
   TBranch        *b_trig_L2_el_pt;   //!
   TBranch        *b_trig_L2_el_eta;   //!
   TBranch        *b_trig_L2_el_phi;   //!
   TBranch        *b_trig_L2_el_RoIWord;   //!
   TBranch        *b_trig_L2_el_zvertex;   //!
   TBranch        *b_trig_L2_el_charge;   //!
   TBranch        *b_trig_L2_el_trackAlgo;   //!
   TBranch        *b_trig_L2_el_TRTHighTHitsRatio;   //!
   TBranch        *b_trig_L2_el_deltaeta1;   //!
   TBranch        *b_trig_L2_el_deltaphi2;   //!
   TBranch        *b_trig_L2_el_EtOverPt;   //!
   TBranch        *b_trig_L2_el_reta;   //!
   TBranch        *b_trig_L2_el_Eratio;   //!
   TBranch        *b_trig_L2_el_Ethad1;   //!
   TBranch        *b_trig_L2_el_nTRTHits;   //!
   TBranch        *b_trig_L2_el_nTRTHighTHits;   //!
   TBranch        *b_trig_L2_el_trackIndx;   //!
   TBranch        *b_trig_L2_el_trkPt;   //!
   TBranch        *b_trig_L2_el_trkEtaAtCalo;   //!
   TBranch        *b_trig_L2_el_trkPhiAtCalo;   //!
   TBranch        *b_trig_L2_el_caloEta;   //!
   TBranch        *b_trig_L2_el_caloPhi;   //!
   TBranch        *b_trig_L2_el_F1;   //!
   TBranch        *b_trig_L2_ph_n;   //!
   TBranch        *b_trig_L2_ph_E;   //!
   TBranch        *b_trig_L2_ph_Et;   //!
   TBranch        *b_trig_L2_ph_pt;   //!
   TBranch        *b_trig_L2_ph_eta;   //!
   TBranch        *b_trig_L2_ph_phi;   //!
   TBranch        *b_trig_L2_ph_RoIWord;   //!
   TBranch        *b_trig_L2_ph_HadEt1;   //!
   TBranch        *b_trig_L2_ph_Eratio;   //!
   TBranch        *b_trig_L2_ph_Reta;   //!
   TBranch        *b_trig_L2_ph_dPhi;   //!
   TBranch        *b_trig_L2_ph_dEta;   //!
   TBranch        *b_trig_L2_ph_F1;   //!
   TBranch        *b_trig_EF_emcl_n;   //!
   TBranch        *b_trig_EF_emcl_pt;   //!
   TBranch        *b_trig_EF_emcl_eta;   //!
   TBranch        *b_trig_EF_emcl_phi;   //!
   TBranch        *b_trig_EF_emcl_E_em;   //!
   TBranch        *b_trig_EF_emcl_E_had;   //!
   TBranch        *b_trig_EF_emcl_firstEdens;   //!
   TBranch        *b_trig_EF_emcl_cellmaxfrac;   //!
   TBranch        *b_trig_EF_emcl_longitudinal;   //!
   TBranch        *b_trig_EF_emcl_secondlambda;   //!
   TBranch        *b_trig_EF_emcl_lateral;   //!
   TBranch        *b_trig_EF_emcl_secondR;   //!
   TBranch        *b_trig_EF_emcl_centerlambda;   //!
   TBranch        *b_trig_EF_emcl_deltaTheta;   //!
   TBranch        *b_trig_EF_emcl_deltaPhi;   //!
   TBranch        *b_trig_EF_emcl_centermag;   //!
   TBranch        *b_trig_EF_emcl_time;   //!
   TBranch        *b_trig_EF_emcl_slw_n;   //!
   TBranch        *b_trig_EF_emcl_slw_pt;   //!
   TBranch        *b_trig_EF_emcl_slw_eta;   //!
   TBranch        *b_trig_EF_emcl_slw_phi;   //!
   TBranch        *b_trig_EF_emcl_slw_E_em;   //!
   TBranch        *b_trig_EF_emcl_slw_E_had;   //!
   TBranch        *b_trig_EF_emcl_slw_firstEdens;   //!
   TBranch        *b_trig_EF_emcl_slw_cellmaxfrac;   //!
   TBranch        *b_trig_EF_emcl_slw_longitudinal;   //!
   TBranch        *b_trig_EF_emcl_slw_secondlambda;   //!
   TBranch        *b_trig_EF_emcl_slw_lateral;   //!
   TBranch        *b_trig_EF_emcl_slw_secondR;   //!
   TBranch        *b_trig_EF_emcl_slw_centerlambda;   //!
   TBranch        *b_trig_EF_emcl_slw_deltaTheta;   //!
   TBranch        *b_trig_EF_emcl_slw_deltaPhi;   //!
   TBranch        *b_trig_EF_emcl_slw_centermag;   //!
   TBranch        *b_trig_EF_emcl_slw_time;   //!
   TBranch        *b_trig_EF_el_n;   //!
   TBranch        *b_trig_EF_el_E;   //!
   TBranch        *b_trig_EF_el_Et;   //!
   TBranch        *b_trig_EF_el_pt;   //!
   TBranch        *b_trig_EF_el_m;   //!
   TBranch        *b_trig_EF_el_eta;   //!
   TBranch        *b_trig_EF_el_phi;   //!
   TBranch        *b_trig_EF_el_px;   //!
   TBranch        *b_trig_EF_el_py;   //!
   TBranch        *b_trig_EF_el_pz;   //!
   TBranch        *b_trig_EF_el_charge;   //!
   TBranch        *b_trig_EF_el_author;   //!
   TBranch        *b_trig_EF_el_isEM;   //!
   TBranch        *b_trig_EF_el_isEMLoose;   //!
   TBranch        *b_trig_EF_el_isEMMedium;   //!
   TBranch        *b_trig_EF_el_isEMTight;   //!
   TBranch        *b_trig_EF_el_loose;   //!
   TBranch        *b_trig_EF_el_looseIso;   //!
   TBranch        *b_trig_EF_el_medium;   //!
   TBranch        *b_trig_EF_el_mediumIso;   //!
   TBranch        *b_trig_EF_el_mediumWithoutTrack;   //!
   TBranch        *b_trig_EF_el_mediumIsoWithoutTrack;   //!
   TBranch        *b_trig_EF_el_tight;   //!
   TBranch        *b_trig_EF_el_tightIso;   //!
   TBranch        *b_trig_EF_el_tightWithoutTrack;   //!
   TBranch        *b_trig_EF_el_tightIsoWithoutTrack;   //!
   TBranch        *b_trig_EF_el_loosePP;   //!
   TBranch        *b_trig_EF_el_loosePPIso;   //!
   TBranch        *b_trig_EF_el_mediumPP;   //!
   TBranch        *b_trig_EF_el_mediumPPIso;   //!
   TBranch        *b_trig_EF_el_tightPP;   //!
   TBranch        *b_trig_EF_el_tightPPIso;   //!
   TBranch        *b_trig_EF_el_Ethad;   //!
   TBranch        *b_trig_EF_el_Ethad1;   //!
   TBranch        *b_trig_EF_el_f1;   //!
   TBranch        *b_trig_EF_el_f1core;   //!
   TBranch        *b_trig_EF_el_Emins1;   //!
   TBranch        *b_trig_EF_el_fside;   //!
   TBranch        *b_trig_EF_el_Emax2;   //!
   TBranch        *b_trig_EF_el_ws3;   //!
   TBranch        *b_trig_EF_el_wstot;   //!
   TBranch        *b_trig_EF_el_emaxs1;   //!
   TBranch        *b_trig_EF_el_deltaEs;   //!
   TBranch        *b_trig_EF_el_E233;   //!
   TBranch        *b_trig_EF_el_E237;   //!
   TBranch        *b_trig_EF_el_E277;   //!
   TBranch        *b_trig_EF_el_weta2;   //!
   TBranch        *b_trig_EF_el_f3;   //!
   TBranch        *b_trig_EF_el_f3core;   //!
   TBranch        *b_trig_EF_el_rphiallcalo;   //!
   TBranch        *b_trig_EF_el_Etcone45;   //!
   TBranch        *b_trig_EF_el_Etcone15;   //!
   TBranch        *b_trig_EF_el_Etcone20;   //!
   TBranch        *b_trig_EF_el_Etcone25;   //!
   TBranch        *b_trig_EF_el_Etcone30;   //!
   TBranch        *b_trig_EF_el_Etcone35;   //!
   TBranch        *b_trig_EF_el_Etcone40;   //!
   TBranch        *b_trig_EF_el_ptcone20;   //!
   TBranch        *b_trig_EF_el_ptcone30;   //!
   TBranch        *b_trig_EF_el_ptcone40;   //!
   TBranch        *b_trig_EF_el_pos7;   //!
   TBranch        *b_trig_EF_el_etacorrmag;   //!
   TBranch        *b_trig_EF_el_deltaeta1;   //!
   TBranch        *b_trig_EF_el_deltaeta2;   //!
   TBranch        *b_trig_EF_el_deltaphi2;   //!
   TBranch        *b_trig_EF_el_expectHitInBLayer;   //!
   TBranch        *b_trig_EF_el_trackd0_physics;   //!
   TBranch        *b_trig_EF_el_reta;   //!
   TBranch        *b_trig_EF_el_rphi;   //!
   TBranch        *b_trig_EF_el_cl_E;   //!
   TBranch        *b_trig_EF_el_cl_pt;   //!
   TBranch        *b_trig_EF_el_cl_eta;   //!
   TBranch        *b_trig_EF_el_cl_phi;   //!
   TBranch        *b_trig_EF_el_cl_etas2;   //!
   TBranch        *b_trig_EF_el_trackd0;   //!
   TBranch        *b_trig_EF_el_trackz0;   //!
   TBranch        *b_trig_EF_el_trackphi;   //!
   TBranch        *b_trig_EF_el_tracktheta;   //!
   TBranch        *b_trig_EF_el_trackqoverp;   //!
   TBranch        *b_trig_EF_el_trackpt;   //!
   TBranch        *b_trig_EF_el_tracketa;   //!
   TBranch        *b_trig_EF_el_nBLHits;   //!
   TBranch        *b_trig_EF_el_nPixHits;   //!
   TBranch        *b_trig_EF_el_nSCTHits;   //!
   TBranch        *b_trig_EF_el_nTRTHits;   //!
   TBranch        *b_trig_EF_el_nTRTHighTHits;   //!
   TBranch        *b_trig_EF_el_nPixHoles;   //!
   TBranch        *b_trig_EF_el_nSCTHoles;   //!
   TBranch        *b_trig_EF_el_nTRTHoles;   //!
   TBranch        *b_trig_EF_el_nBLSharedHits;   //!
   TBranch        *b_trig_EF_el_nPixSharedHits;   //!
   TBranch        *b_trig_EF_el_nSCTSharedHits;   //!
   TBranch        *b_trig_EF_el_nBLayerOutliers;   //!
   TBranch        *b_trig_EF_el_nPixelOutliers;   //!
   TBranch        *b_trig_EF_el_nSCTOutliers;   //!
   TBranch        *b_trig_EF_el_nTRTOutliers;   //!
   TBranch        *b_trig_EF_el_nTRTHighTOutliers;   //!
   TBranch        *b_trig_EF_el_expectBLayerHit;   //!
   TBranch        *b_trig_EF_el_nSiHits;   //!
   TBranch        *b_trig_EF_el_TRTHighTHitsRatio;   //!
   TBranch        *b_trig_EF_el_TRTHighTOutliersRatio;   //!
   TBranch        *b_trig_EF_el_pixeldEdx;   //!
   TBranch        *b_trig_EF_el_nGoodHitsPixeldEdx;   //!
   TBranch        *b_trig_EF_el_massPixeldEdx;   //!
   TBranch        *b_trig_EF_el_likelihoodsPixeldEdx;   //!
   TBranch        *b_trig_EF_el_eProbabilityComb;   //!
   TBranch        *b_trig_EF_el_eProbabilityHT;   //!
   TBranch        *b_trig_EF_el_eProbabilityToT;   //!
   TBranch        *b_trig_EF_el_eProbabilityBrem;   //!
   TBranch        *b_trig_EF_el_vertweight;   //!
   TBranch        *b_trig_EF_el_hastrack;   //!
   TBranch        *b_trig_EF_ph_n;   //!
   TBranch        *b_trig_EF_ph_E;   //!
   TBranch        *b_trig_EF_ph_Et;   //!
   TBranch        *b_trig_EF_ph_pt;   //!
   TBranch        *b_trig_EF_ph_m;   //!
   TBranch        *b_trig_EF_ph_eta;   //!
   TBranch        *b_trig_EF_ph_phi;   //!
   TBranch        *b_trig_EF_ph_px;   //!
   TBranch        *b_trig_EF_ph_py;   //!
   TBranch        *b_trig_EF_ph_pz;   //!
   TBranch        *b_trig_EF_ph_author;   //!
   TBranch        *b_trig_EF_ph_isRecovered;   //!
   TBranch        *b_trig_EF_ph_isEM;   //!
   TBranch        *b_trig_EF_ph_isEMLoose;   //!
   TBranch        *b_trig_EF_ph_isEMMedium;   //!
   TBranch        *b_trig_EF_ph_isEMTight;   //!
   TBranch        *b_trig_EF_ph_convFlag;   //!
   TBranch        *b_trig_EF_ph_isConv;   //!
   TBranch        *b_trig_EF_ph_nConv;   //!
   TBranch        *b_trig_EF_ph_nSingleTrackConv;   //!
   TBranch        *b_trig_EF_ph_nDoubleTrackConv;   //!
   TBranch        *b_trig_EF_ph_loose;   //!
   TBranch        *b_trig_EF_ph_looseIso;   //!
   TBranch        *b_trig_EF_ph_tight;   //!
   TBranch        *b_trig_EF_ph_tightIso;   //!
   TBranch        *b_trig_EF_ph_looseAR;   //!
   TBranch        *b_trig_EF_ph_looseARIso;   //!
   TBranch        *b_trig_EF_ph_tightAR;   //!
   TBranch        *b_trig_EF_ph_tightARIso;   //!
   TBranch        *b_trig_EF_ph_Ethad;   //!
   TBranch        *b_trig_EF_ph_Ethad1;   //!
   TBranch        *b_trig_EF_ph_E033;   //!
   TBranch        *b_trig_EF_ph_f1;   //!
   TBranch        *b_trig_EF_ph_f1core;   //!
   TBranch        *b_trig_EF_ph_Emins1;   //!
   TBranch        *b_trig_EF_ph_fside;   //!
   TBranch        *b_trig_EF_ph_Emax2;   //!
   TBranch        *b_trig_EF_ph_ws3;   //!
   TBranch        *b_trig_EF_ph_wstot;   //!
   TBranch        *b_trig_EF_ph_E132;   //!
   TBranch        *b_trig_EF_ph_E1152;   //!
   TBranch        *b_trig_EF_ph_emaxs1;   //!
   TBranch        *b_trig_EF_ph_deltaEs;   //!
   TBranch        *b_trig_EF_ph_E233;   //!
   TBranch        *b_trig_EF_ph_E237;   //!
   TBranch        *b_trig_EF_ph_E277;   //!
   TBranch        *b_trig_EF_ph_weta2;   //!
   TBranch        *b_trig_EF_ph_f3;   //!
   TBranch        *b_trig_EF_ph_f3core;   //!
   TBranch        *b_trig_EF_ph_rphiallcalo;   //!
   TBranch        *b_trig_EF_ph_Etcone45;   //!
   TBranch        *b_trig_EF_ph_Etcone15;   //!
   TBranch        *b_trig_EF_ph_Etcone20;   //!
   TBranch        *b_trig_EF_ph_Etcone25;   //!
   TBranch        *b_trig_EF_ph_Etcone30;   //!
   TBranch        *b_trig_EF_ph_Etcone35;   //!
   TBranch        *b_trig_EF_ph_Etcone40;   //!
   TBranch        *b_trig_EF_ph_ptcone20;   //!
   TBranch        *b_trig_EF_ph_ptcone30;   //!
   TBranch        *b_trig_EF_ph_ptcone40;   //!
   TBranch        *b_trig_EF_ph_convanglematch;   //!
   TBranch        *b_trig_EF_ph_convtrackmatch;   //!
   TBranch        *b_trig_EF_ph_hasconv;   //!
   TBranch        *b_trig_EF_ph_convvtxx;   //!
   TBranch        *b_trig_EF_ph_convvtxy;   //!
   TBranch        *b_trig_EF_ph_convvtxz;   //!
   TBranch        *b_trig_EF_ph_Rconv;   //!
   TBranch        *b_trig_EF_ph_zconv;   //!
   TBranch        *b_trig_EF_ph_convvtxchi2;   //!
   TBranch        *b_trig_EF_ph_pt1conv;   //!
   TBranch        *b_trig_EF_ph_convtrk1nBLHits;   //!
   TBranch        *b_trig_EF_ph_convtrk1nPixHits;   //!
   TBranch        *b_trig_EF_ph_convtrk1nSCTHits;   //!
   TBranch        *b_trig_EF_ph_convtrk1nTRTHits;   //!
   TBranch        *b_trig_EF_ph_pt2conv;   //!
   TBranch        *b_trig_EF_ph_convtrk2nBLHits;   //!
   TBranch        *b_trig_EF_ph_convtrk2nPixHits;   //!
   TBranch        *b_trig_EF_ph_convtrk2nSCTHits;   //!
   TBranch        *b_trig_EF_ph_convtrk2nTRTHits;   //!
   TBranch        *b_trig_EF_ph_ptconv;   //!
   TBranch        *b_trig_EF_ph_pzconv;   //!
   TBranch        *b_trig_EF_ph_reta;   //!
   TBranch        *b_trig_EF_ph_rphi;   //!
   TBranch        *b_trig_EF_ph_cl_E;   //!
   TBranch        *b_trig_EF_ph_cl_pt;   //!
   TBranch        *b_trig_EF_ph_cl_eta;   //!
   TBranch        *b_trig_EF_ph_cl_phi;   //!
   TBranch        *b_trig_EF_ph_cl_etas2;   //!
   TBranch        *b_trig_Nav_n;   //!
   TBranch        *b_trig_Nav_chain_ChainId;   //!
   TBranch        *b_trig_Nav_chain_RoIType;   //!
   TBranch        *b_trig_Nav_chain_RoIIndex;   //!
   TBranch        *b_trig_RoI_L2_e_n;   //!
   TBranch        *b_trig_RoI_L2_e_type;   //!
   TBranch        *b_trig_RoI_L2_e_active;   //!
   TBranch        *b_trig_RoI_L2_e_lastStep;   //!
   TBranch        *b_trig_RoI_L2_e_TENumber;   //!
   TBranch        *b_trig_RoI_L2_e_roiNumber;   //!
   TBranch        *b_trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma;   //!
   TBranch        *b_trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus;   //!
   TBranch        *b_trig_RoI_L2_e_TrigEMCluster;   //!
   TBranch        *b_trig_RoI_L2_e_TrigEMClusterStatus;   //!
   TBranch        *b_trig_RoI_L2_e_EmTau_ROI;   //!
   TBranch        *b_trig_RoI_L2_e_EmTau_ROIStatus;   //!
   TBranch        *b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma;   //!
   TBranch        *b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus;   //!
   TBranch        *b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma;   //!
   TBranch        *b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus;   //!
   TBranch        *b_trig_RoI_L2_e_TrigElectronContainer;   //!
   TBranch        *b_trig_RoI_L2_e_TrigElectronContainerStatus;   //!
   TBranch        *b_trig_RoI_L2_e_TrigPhotonContainer;   //!
   TBranch        *b_trig_RoI_L2_e_TrigPhotonContainerStatus;   //!
   TBranch        *b_trig_RoI_EF_e_n;   //!
   TBranch        *b_trig_RoI_EF_e_type;   //!
   TBranch        *b_trig_RoI_EF_e_active;   //!
   TBranch        *b_trig_RoI_EF_e_lastStep;   //!
   TBranch        *b_trig_RoI_EF_e_TENumber;   //!
   TBranch        *b_trig_RoI_EF_e_roiNumber;   //!
   TBranch        *b_trig_RoI_EF_e_EmTau_ROI;   //!
   TBranch        *b_trig_RoI_EF_e_EmTau_ROIStatus;   //!
   TBranch        *b_trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID;   //!
   TBranch        *b_trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_Electrons;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_Photons;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus;   //!
   TBranch        *b_trig_DB_SMK;   //!
   TBranch        *b_trig_DB_L1PSK;   //!
   TBranch        *b_trig_DB_HLTPSK;   //!
   TBranch        *b_PV_n;   //!
   TBranch        *b_PV_x;   //!
   TBranch        *b_PV_y;   //!
   TBranch        *b_PV_z;   //!
   TBranch        *b_PV_type;   //!
   TBranch        *b_PV_px;   //!
   TBranch        *b_PV_py;   //!
   TBranch        *b_PV_pz;   //!
   TBranch        *b_PV_E;   //!
   TBranch        *b_PV_m;   //!
   TBranch        *b_PV_nTracks;   //!
   TBranch        *b_PV_sumPt;   //!
   TBranch        *b_PV_trk_weight;   //!
   TBranch        *b_PV_trk_n;   //!
   TBranch        *b_PV_trk_index;   //!
   TBranch        *b_PhotonPV_n;   //!
   TBranch        *b_PhotonPV_px;   //!
   TBranch        *b_PhotonPV_py;   //!
   TBranch        *b_PhotonPV_pz;   //!
   TBranch        *b_PhotonPV_E;   //!
   TBranch        *b_PhotonPV_m;   //!
   TBranch        *b_PhotonPV_nTracks;   //!
   TBranch        *b_PhotonPV_sumPt;   //!
   TBranch        *b_PhotonPV_sumPt2;   //!
   TBranch        *b_PhotonPV_type;   //!
   TBranch        *b_PhotonPV_missPt;   //!
   TBranch        *b_PhotonPV_meanPt;   //!
   TBranch        *b_PhotonPV_nTracks_05GeV;   //!
   TBranch        *b_PhotonPV_nTracks_07GeV;   //!
   TBranch        *b_PhotonPV_nTracks_1GeV;   //!
   TBranch        *b_PhotonPV_nTracks_2GeV;   //!
   TBranch        *b_mcevt_n;   //!
   TBranch        *b_mcevt_signal_process_id;   //!
   TBranch        *b_mcevt_event_number;   //!
   TBranch        *b_mcevt_event_scale;   //!
   TBranch        *b_mcevt_alphaQCD;   //!
   TBranch        *b_mcevt_alphaQED;   //!
   TBranch        *b_mcevt_pdf_id1;   //!
   TBranch        *b_mcevt_pdf_id2;   //!
   TBranch        *b_mcevt_pdf_x1;   //!
   TBranch        *b_mcevt_pdf_x2;   //!
   TBranch        *b_mcevt_pdf_scale;   //!
   TBranch        *b_mcevt_pdf1;   //!
   TBranch        *b_mcevt_pdf2;   //!
   TBranch        *b_mcevt_weight;   //!
   TBranch        *b_mcevt_nparticle;   //!
   TBranch        *b_mcevt_pileUpType;   //!
   TBranch        *b_mc_n;   //!
   TBranch        *b_mc_pt;   //!
   TBranch        *b_mc_m;   //!
   TBranch        *b_mc_eta;   //!
   TBranch        *b_mc_phi;   //!
   TBranch        *b_mc_status;   //!
   TBranch        *b_mc_barcode;   //!
   TBranch        *b_mc_parents;   //!
   TBranch        *b_mc_children;   //!
   TBranch        *b_mc_pdgId;   //!
   TBranch        *b_mc_charge;   //!
   TBranch        *b_mc_vx_x;   //!
   TBranch        *b_mc_vx_y;   //!
   TBranch        *b_mc_vx_z;   //!
   TBranch        *b_mc_vx_barcode;   //!
   TBranch        *b_mc_child_index;   //!
   TBranch        *b_mc_parent_index;   //!
   TBranch        *b_mc_PartonIsolation15_UE;   //!
   TBranch        *b_mc_PartonIsolation20_UE;   //!
   TBranch        *b_mc_PartonIsolation25_UE;   //!
   TBranch        *b_mc_PartonIsolation30_UE;   //!
   TBranch        *b_mc_PartonIsolation35_UE;   //!
   TBranch        *b_mc_PartonIsolation40_UE;   //!
   TBranch        *b_mc_PartonIsolation45_UE;   //!
   TBranch        *b_mc_PartonIsolation60_UE;   //!
   TBranch        *b_mc_PartonIsolation15;   //!
   TBranch        *b_mc_PartonIsolation20;   //!
   TBranch        *b_mc_PartonIsolation25;   //!
   TBranch        *b_mc_PartonIsolation30;   //!
   TBranch        *b_mc_PartonIsolation35;   //!
   TBranch        *b_mc_PartonIsolation40;   //!
   TBranch        *b_mc_PartonIsolation45;   //!
   TBranch        *b_mc_PartonIsolation60;   //!
   TBranch        *b_mc_ParticleIsolation40;   //!
   TBranch        *b_mc_ParticleIsolation40_ED_corrected;   //!
   TBranch        *b_mc_ParticleIsolation40_ED_corrected_reco;   //!
   TBranch        *b_mc_ParticleIsolation40_ED_corrected_new;   //!
   TBranch        *b_mc_ParticleIsolation40_ED_corrected_reco_new;   //!
   TBranch        *b_mc_isBremPhoton;   //!
   TBranch        *b_mc_isHardProcPhoton;   //!
   TBranch        *b_jet_AntiKt4TruthJets_n;   //!
   TBranch        *b_jet_AntiKt4TruthJets_E;   //!
   TBranch        *b_jet_AntiKt4TruthJets_pt;   //!
   TBranch        *b_jet_AntiKt4TruthJets_m;   //!
   TBranch        *b_jet_AntiKt4TruthJets_eta;   //!
   TBranch        *b_jet_AntiKt4TruthJets_phi;   //!
   TBranch        *b_jet_AntiKt4TruthJets_EtaOrigin;   //!
   TBranch        *b_jet_AntiKt4TruthJets_PhiOrigin;   //!
   TBranch        *b_jet_AntiKt4TruthJets_MOrigin;   //!
   TBranch        *b_jet_AntiKt4TruthJets_EtaOriginEM;   //!
   TBranch        *b_jet_AntiKt4TruthJets_PhiOriginEM;   //!
   TBranch        *b_jet_AntiKt4TruthJets_MOriginEM;   //!
   TBranch        *b_jet_AntiKt4TruthJets_shapeBins;   //!
   TBranch        *b_jet_AntiKt4TruthJets_flavor_truth_label;   //!
   TBranch        *b_jet_AntiKt4TruthJets_flavor_truth_dRminToB;   //!
   TBranch        *b_jet_AntiKt4TruthJets_flavor_truth_dRminToC;   //!
   TBranch        *b_jet_AntiKt4TruthJets_flavor_truth_dRminToT;   //!
   TBranch        *b_jet_AntiKt4TruthJets_flavor_truth_BHadronpdg;   //!
   TBranch        *b_jet_AntiKt4TruthJets_flavor_truth_vx_x;   //!
   TBranch        *b_jet_AntiKt4TruthJets_flavor_truth_vx_y;   //!
   TBranch        *b_jet_AntiKt4TruthJets_flavor_truth_vx_z;   //!
   TBranch        *b_jet_AntiKt4TruthJets_el_dr;   //!
   TBranch        *b_jet_AntiKt4TruthJets_el_matched;   //!
   TBranch        *b_jet_AntiKt4TruthJets_mu_dr;   //!
   TBranch        *b_jet_AntiKt4TruthJets_mu_matched;   //!
   TBranch        *b_jet_AntiKt6TruthJets_n;   //!
   TBranch        *b_jet_AntiKt6TruthJets_E;   //!
   TBranch        *b_jet_AntiKt6TruthJets_pt;   //!
   TBranch        *b_jet_AntiKt6TruthJets_m;   //!
   TBranch        *b_jet_AntiKt6TruthJets_eta;   //!
   TBranch        *b_jet_AntiKt6TruthJets_phi;   //!
   TBranch        *b_jet_AntiKt6TruthJets_EtaOrigin;   //!
   TBranch        *b_jet_AntiKt6TruthJets_PhiOrigin;   //!
   TBranch        *b_jet_AntiKt6TruthJets_MOrigin;   //!
   TBranch        *b_jet_AntiKt6TruthJets_EtaOriginEM;   //!
   TBranch        *b_jet_AntiKt6TruthJets_PhiOriginEM;   //!
   TBranch        *b_jet_AntiKt6TruthJets_MOriginEM;   //!
   TBranch        *b_jet_AntiKt6TruthJets_shapeBins;   //!
   TBranch        *b_jet_AntiKt6TruthJets_flavor_truth_label;   //!
   TBranch        *b_jet_AntiKt6TruthJets_flavor_truth_dRminToB;   //!
   TBranch        *b_jet_AntiKt6TruthJets_flavor_truth_dRminToC;   //!
   TBranch        *b_jet_AntiKt6TruthJets_flavor_truth_dRminToT;   //!
   TBranch        *b_jet_AntiKt6TruthJets_flavor_truth_BHadronpdg;   //!
   TBranch        *b_jet_AntiKt6TruthJets_flavor_truth_vx_x;   //!
   TBranch        *b_jet_AntiKt6TruthJets_flavor_truth_vx_y;   //!
   TBranch        *b_jet_AntiKt6TruthJets_flavor_truth_vx_z;   //!
   TBranch        *b_jet_AntiKt6TruthJets_el_dr;   //!
   TBranch        *b_jet_AntiKt6TruthJets_el_matched;   //!
   TBranch        *b_jet_AntiKt6TruthJets_mu_dr;   //!
   TBranch        *b_jet_AntiKt6TruthJets_mu_matched;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_n;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_E;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_pt;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_m;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_eta;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_phi;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_EtaOrigin;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_PhiOrigin;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_MOrigin;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_EtaOriginEM;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_PhiOriginEM;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_MOriginEM;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_shapeBins;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_label;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToB;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToC;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToT;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_BHadronpdg;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_x;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_y;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_z;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_el_dr;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_el_matched;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_mu_dr;   //!
   TBranch        *b_jet_AntiKt4TruthWithMuNoIntJets_mu_matched;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_n;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_E;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_pt;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_m;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_eta;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_phi;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_EtaOrigin;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_PhiOrigin;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_MOrigin;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_EtaOriginEM;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_PhiOriginEM;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_MOriginEM;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_shapeBins;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_label;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToB;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToC;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToT;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_BHadronpdg;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_x;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_y;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_z;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_el_dr;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_el_matched;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_mu_dr;   //!
   TBranch        *b_jet_AntiKt6TruthWithMuNoIntJets_mu_matched;   //!
   TBranch        *b_met_etx;   //!
   TBranch        *b_met_ety;   //!
   TBranch        *b_MET_Cryo_etx;   //!
   TBranch        *b_MET_Cryo_ety;   //!
   TBranch        *b_MET_Cryo_phi;   //!
   TBranch        *b_MET_Cryo_et;   //!
   TBranch        *b_MET_Cryo_sumet;   //!
   TBranch        *b_MET_Cryo_etx_CentralReg;   //!
   TBranch        *b_MET_Cryo_ety_CentralReg;   //!
   TBranch        *b_MET_Cryo_sumet_CentralReg;   //!
   TBranch        *b_MET_Cryo_phi_CentralReg;   //!
   TBranch        *b_MET_Cryo_etx_EndcapRegion;   //!
   TBranch        *b_MET_Cryo_ety_EndcapRegion;   //!
   TBranch        *b_MET_Cryo_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Cryo_phi_EndcapRegion;   //!
   TBranch        *b_MET_Cryo_etx_ForwardReg;   //!
   TBranch        *b_MET_Cryo_ety_ForwardReg;   //!
   TBranch        *b_MET_Cryo_sumet_ForwardReg;   //!
   TBranch        *b_MET_Cryo_phi_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_etx;   //!
   TBranch        *b_MET_RefFinal_ety;   //!
   TBranch        *b_MET_RefFinal_phi;   //!
   TBranch        *b_MET_RefFinal_et;   //!
   TBranch        *b_MET_RefFinal_sumet;   //!
   TBranch        *b_MET_RefFinal_etx_CentralReg;   //!
   TBranch        *b_MET_RefFinal_ety_CentralReg;   //!
   TBranch        *b_MET_RefFinal_sumet_CentralReg;   //!
   TBranch        *b_MET_RefFinal_phi_CentralReg;   //!
   TBranch        *b_MET_RefFinal_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_etx_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_ety_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_phi_ForwardReg;   //!
   TBranch        *b_MET_RefEle_etx;   //!
   TBranch        *b_MET_RefEle_ety;   //!
   TBranch        *b_MET_RefEle_phi;   //!
   TBranch        *b_MET_RefEle_et;   //!
   TBranch        *b_MET_RefEle_sumet;   //!
   TBranch        *b_MET_RefEle_etx_CentralReg;   //!
   TBranch        *b_MET_RefEle_ety_CentralReg;   //!
   TBranch        *b_MET_RefEle_sumet_CentralReg;   //!
   TBranch        *b_MET_RefEle_phi_CentralReg;   //!
   TBranch        *b_MET_RefEle_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefEle_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefEle_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefEle_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefEle_etx_ForwardReg;   //!
   TBranch        *b_MET_RefEle_ety_ForwardReg;   //!
   TBranch        *b_MET_RefEle_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefEle_phi_ForwardReg;   //!
   TBranch        *b_MET_RefJet_etx;   //!
   TBranch        *b_MET_RefJet_ety;   //!
   TBranch        *b_MET_RefJet_phi;   //!
   TBranch        *b_MET_RefJet_et;   //!
   TBranch        *b_MET_RefJet_sumet;   //!
   TBranch        *b_MET_RefJet_etx_CentralReg;   //!
   TBranch        *b_MET_RefJet_ety_CentralReg;   //!
   TBranch        *b_MET_RefJet_sumet_CentralReg;   //!
   TBranch        *b_MET_RefJet_phi_CentralReg;   //!
   TBranch        *b_MET_RefJet_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefJet_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefJet_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefJet_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefJet_etx_ForwardReg;   //!
   TBranch        *b_MET_RefJet_ety_ForwardReg;   //!
   TBranch        *b_MET_RefJet_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefJet_phi_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_etx;   //!
   TBranch        *b_MET_RefMuon_ety;   //!
   TBranch        *b_MET_RefMuon_phi;   //!
   TBranch        *b_MET_RefMuon_et;   //!
   TBranch        *b_MET_RefMuon_sumet;   //!
   TBranch        *b_MET_RefMuon_etx_CentralReg;   //!
   TBranch        *b_MET_RefMuon_ety_CentralReg;   //!
   TBranch        *b_MET_RefMuon_sumet_CentralReg;   //!
   TBranch        *b_MET_RefMuon_phi_CentralReg;   //!
   TBranch        *b_MET_RefMuon_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_etx_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_ety_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_phi_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Staco_etx;   //!
   TBranch        *b_MET_RefMuon_Staco_ety;   //!
   TBranch        *b_MET_RefMuon_Staco_phi;   //!
   TBranch        *b_MET_RefMuon_Staco_et;   //!
   TBranch        *b_MET_RefMuon_Staco_sumet;   //!
   TBranch        *b_MET_RefMuon_Staco_etx_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Staco_ety_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Staco_sumet_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Staco_phi_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Staco_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Staco_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Staco_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Staco_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Staco_etx_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Staco_ety_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Staco_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Staco_phi_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Muid_etx;   //!
   TBranch        *b_MET_RefMuon_Muid_ety;   //!
   TBranch        *b_MET_RefMuon_Muid_phi;   //!
   TBranch        *b_MET_RefMuon_Muid_et;   //!
   TBranch        *b_MET_RefMuon_Muid_sumet;   //!
   TBranch        *b_MET_RefMuon_Muid_etx_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Muid_ety_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Muid_sumet_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Muid_phi_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Muid_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Muid_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Muid_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Muid_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Muid_etx_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Muid_ety_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Muid_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Muid_phi_ForwardReg;   //!
   TBranch        *b_MET_RefGamma_etx;   //!
   TBranch        *b_MET_RefGamma_ety;   //!
   TBranch        *b_MET_RefGamma_phi;   //!
   TBranch        *b_MET_RefGamma_et;   //!
   TBranch        *b_MET_RefGamma_sumet;   //!
   TBranch        *b_MET_RefGamma_etx_CentralReg;   //!
   TBranch        *b_MET_RefGamma_ety_CentralReg;   //!
   TBranch        *b_MET_RefGamma_sumet_CentralReg;   //!
   TBranch        *b_MET_RefGamma_phi_CentralReg;   //!
   TBranch        *b_MET_RefGamma_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefGamma_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefGamma_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefGamma_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefGamma_etx_ForwardReg;   //!
   TBranch        *b_MET_RefGamma_ety_ForwardReg;   //!
   TBranch        *b_MET_RefGamma_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefGamma_phi_ForwardReg;   //!
   TBranch        *b_MET_RefTau_etx;   //!
   TBranch        *b_MET_RefTau_ety;   //!
   TBranch        *b_MET_RefTau_phi;   //!
   TBranch        *b_MET_RefTau_et;   //!
   TBranch        *b_MET_RefTau_sumet;   //!
   TBranch        *b_MET_RefTau_etx_CentralReg;   //!
   TBranch        *b_MET_RefTau_ety_CentralReg;   //!
   TBranch        *b_MET_RefTau_sumet_CentralReg;   //!
   TBranch        *b_MET_RefTau_phi_CentralReg;   //!
   TBranch        *b_MET_RefTau_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefTau_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefTau_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefTau_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefTau_etx_ForwardReg;   //!
   TBranch        *b_MET_RefTau_ety_ForwardReg;   //!
   TBranch        *b_MET_RefTau_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefTau_phi_ForwardReg;   //!
   TBranch        *b_MET_CellOut_etx;   //!
   TBranch        *b_MET_CellOut_ety;   //!
   TBranch        *b_MET_CellOut_phi;   //!
   TBranch        *b_MET_CellOut_et;   //!
   TBranch        *b_MET_CellOut_sumet;   //!
   TBranch        *b_MET_CellOut_etx_CentralReg;   //!
   TBranch        *b_MET_CellOut_ety_CentralReg;   //!
   TBranch        *b_MET_CellOut_sumet_CentralReg;   //!
   TBranch        *b_MET_CellOut_phi_CentralReg;   //!
   TBranch        *b_MET_CellOut_etx_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_ety_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_sumet_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_phi_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_etx_ForwardReg;   //!
   TBranch        *b_MET_CellOut_ety_ForwardReg;   //!
   TBranch        *b_MET_CellOut_sumet_ForwardReg;   //!
   TBranch        *b_MET_CellOut_phi_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_etx;   //!
   TBranch        *b_MET_MuonBoy_ety;   //!
   TBranch        *b_MET_MuonBoy_phi;   //!
   TBranch        *b_MET_MuonBoy_et;   //!
   TBranch        *b_MET_MuonBoy_sumet;   //!
   TBranch        *b_MET_MuonBoy_etx_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_ety_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_sumet_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_phi_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_etx_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_ety_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_sumet_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_phi_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_etx_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_ety_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_sumet_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_phi_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_Track_etx;   //!
   TBranch        *b_MET_MuonBoy_Track_ety;   //!
   TBranch        *b_MET_MuonBoy_Track_phi;   //!
   TBranch        *b_MET_MuonBoy_Track_et;   //!
   TBranch        *b_MET_MuonBoy_Track_sumet;   //!
   TBranch        *b_MET_MuonBoy_Track_etx_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_Track_ety_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_Track_sumet_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_Track_phi_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_Track_etx_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_Track_ety_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_Track_sumet_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_Track_phi_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_Track_etx_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_Track_ety_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_Track_sumet_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_Track_phi_ForwardReg;   //!
   TBranch        *b_MET_Final_etx;   //!
   TBranch        *b_MET_Final_ety;   //!
   TBranch        *b_MET_Final_phi;   //!
   TBranch        *b_MET_Final_et;   //!
   TBranch        *b_MET_Final_sumet;   //!
   TBranch        *b_MET_Final_etx_CentralReg;   //!
   TBranch        *b_MET_Final_ety_CentralReg;   //!
   TBranch        *b_MET_Final_sumet_CentralReg;   //!
   TBranch        *b_MET_Final_phi_CentralReg;   //!
   TBranch        *b_MET_Final_etx_EndcapRegion;   //!
   TBranch        *b_MET_Final_ety_EndcapRegion;   //!
   TBranch        *b_MET_Final_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Final_phi_EndcapRegion;   //!
   TBranch        *b_MET_Final_etx_ForwardReg;   //!
   TBranch        *b_MET_Final_ety_ForwardReg;   //!
   TBranch        *b_MET_Final_sumet_ForwardReg;   //!
   TBranch        *b_MET_Final_phi_ForwardReg;   //!
   TBranch        *b_MET_Topo_etx;   //!
   TBranch        *b_MET_Topo_ety;   //!
   TBranch        *b_MET_Topo_phi;   //!
   TBranch        *b_MET_Topo_et;   //!
   TBranch        *b_MET_Topo_sumet;   //!
   TBranch        *b_MET_Topo_SUMET_EMFrac;   //!
   TBranch        *b_MET_Topo_etx_PEMB;   //!
   TBranch        *b_MET_Topo_ety_PEMB;   //!
   TBranch        *b_MET_Topo_sumet_PEMB;   //!
   TBranch        *b_MET_Topo_phi_PEMB;   //!
   TBranch        *b_MET_Topo_etx_EMB;   //!
   TBranch        *b_MET_Topo_ety_EMB;   //!
   TBranch        *b_MET_Topo_sumet_EMB;   //!
   TBranch        *b_MET_Topo_phi_EMB;   //!
   TBranch        *b_MET_Topo_etx_PEMEC;   //!
   TBranch        *b_MET_Topo_ety_PEMEC;   //!
   TBranch        *b_MET_Topo_sumet_PEMEC;   //!
   TBranch        *b_MET_Topo_phi_PEMEC;   //!
   TBranch        *b_MET_Topo_etx_EME;   //!
   TBranch        *b_MET_Topo_ety_EME;   //!
   TBranch        *b_MET_Topo_sumet_EME;   //!
   TBranch        *b_MET_Topo_phi_EME;   //!
   TBranch        *b_MET_Topo_etx_TILE;   //!
   TBranch        *b_MET_Topo_ety_TILE;   //!
   TBranch        *b_MET_Topo_sumet_TILE;   //!
   TBranch        *b_MET_Topo_phi_TILE;   //!
   TBranch        *b_MET_Topo_etx_HEC;   //!
   TBranch        *b_MET_Topo_ety_HEC;   //!
   TBranch        *b_MET_Topo_sumet_HEC;   //!
   TBranch        *b_MET_Topo_phi_HEC;   //!
   TBranch        *b_MET_Topo_etx_FCAL;   //!
   TBranch        *b_MET_Topo_ety_FCAL;   //!
   TBranch        *b_MET_Topo_sumet_FCAL;   //!
   TBranch        *b_MET_Topo_phi_FCAL;   //!
   TBranch        *b_MET_Topo_nCell_PEMB;   //!
   TBranch        *b_MET_Topo_nCell_EMB;   //!
   TBranch        *b_MET_Topo_nCell_PEMEC;   //!
   TBranch        *b_MET_Topo_nCell_EME;   //!
   TBranch        *b_MET_Topo_nCell_TILE;   //!
   TBranch        *b_MET_Topo_nCell_HEC;   //!
   TBranch        *b_MET_Topo_nCell_FCAL;   //!
   TBranch        *b_MET_Topo_etx_CentralReg;   //!
   TBranch        *b_MET_Topo_ety_CentralReg;   //!
   TBranch        *b_MET_Topo_sumet_CentralReg;   //!
   TBranch        *b_MET_Topo_phi_CentralReg;   //!
   TBranch        *b_MET_Topo_etx_EndcapRegion;   //!
   TBranch        *b_MET_Topo_ety_EndcapRegion;   //!
   TBranch        *b_MET_Topo_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Topo_phi_EndcapRegion;   //!
   TBranch        *b_MET_Topo_etx_ForwardReg;   //!
   TBranch        *b_MET_Topo_ety_ForwardReg;   //!
   TBranch        *b_MET_Topo_sumet_ForwardReg;   //!
   TBranch        *b_MET_Topo_phi_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_etx;   //!
   TBranch        *b_MET_LocHadTopo_ety;   //!
   TBranch        *b_MET_LocHadTopo_phi;   //!
   TBranch        *b_MET_LocHadTopo_et;   //!
   TBranch        *b_MET_LocHadTopo_sumet;   //!
   TBranch        *b_MET_LocHadTopo_SUMET_EMFrac;   //!
   TBranch        *b_MET_LocHadTopo_etx_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_ety_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_sumet_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_phi_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_etx_EMB;   //!
   TBranch        *b_MET_LocHadTopo_ety_EMB;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EMB;   //!
   TBranch        *b_MET_LocHadTopo_phi_EMB;   //!
   TBranch        *b_MET_LocHadTopo_etx_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_ety_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_sumet_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_phi_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_etx_EME;   //!
   TBranch        *b_MET_LocHadTopo_ety_EME;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EME;   //!
   TBranch        *b_MET_LocHadTopo_phi_EME;   //!
   TBranch        *b_MET_LocHadTopo_etx_TILE;   //!
   TBranch        *b_MET_LocHadTopo_ety_TILE;   //!
   TBranch        *b_MET_LocHadTopo_sumet_TILE;   //!
   TBranch        *b_MET_LocHadTopo_phi_TILE;   //!
   TBranch        *b_MET_LocHadTopo_etx_HEC;   //!
   TBranch        *b_MET_LocHadTopo_ety_HEC;   //!
   TBranch        *b_MET_LocHadTopo_sumet_HEC;   //!
   TBranch        *b_MET_LocHadTopo_phi_HEC;   //!
   TBranch        *b_MET_LocHadTopo_etx_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_ety_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_sumet_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_phi_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_nCell_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_nCell_EMB;   //!
   TBranch        *b_MET_LocHadTopo_nCell_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_nCell_EME;   //!
   TBranch        *b_MET_LocHadTopo_nCell_TILE;   //!
   TBranch        *b_MET_LocHadTopo_nCell_HEC;   //!
   TBranch        *b_MET_LocHadTopo_nCell_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_etx_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_ety_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_sumet_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_phi_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_etx_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_ety_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_phi_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_etx_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_ety_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_sumet_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_phi_ForwardReg;   //!
   TBranch        *b_MET_Truth_NonInt_etx;   //!
   TBranch        *b_MET_Truth_NonInt_ety;   //!
   TBranch        *b_MET_Truth_NonInt_phi;   //!
   TBranch        *b_MET_Truth_NonInt_et;   //!
   TBranch        *b_MET_Truth_NonInt_sumet;   //!
   TBranch        *b_EF_2e12Tvh_medium;   //!
   TBranch        *b_EF_2e15vh_loose1_Zee;   //!
   TBranch        *b_EF_2e15vh_loose_Zee;   //!
   TBranch        *b_EF_2e15vh_medium;   //!
   TBranch        *b_EF_2mu4T_xe30_noMu;   //!
   TBranch        *b_EF_2mu4T_xe40_noMu;   //!
   TBranch        *b_EF_e10_etcut_mu10;   //!
   TBranch        *b_EF_e10_loose1;   //!
   TBranch        *b_EF_e12Tvh_medium;   //!
   TBranch        *b_EF_e12Tvh_medium_2e6T_medium;   //!
   TBranch        *b_EF_e12Tvh_medium_mu6;   //!
   TBranch        *b_EF_e12Tvh_medium_mu6_topo_medium;   //!
   TBranch        *b_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20;   //!
   TBranch        *b_EF_e13_etcutTrk_xs60_noMu;   //!
   TBranch        *b_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07;   //!
   TBranch        *b_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20;   //!
   TBranch        *b_EF_e14_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_EF_e15vh_loose1_e12Tvh_loose1_Zee;   //!
   TBranch        *b_EF_e15vh_medium;   //!
   TBranch        *b_EF_e15vh_medium_xe40_noMu;   //!
   TBranch        *b_EF_e15vh_medium_xe50_noMu;   //!
   TBranch        *b_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20;   //!
   TBranch        *b_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07;   //!
   TBranch        *b_EF_e22_etcut_e10_loose1;   //!
   TBranch        *b_EF_e22_etcut_mu10;   //!
   TBranch        *b_EF_e22_loose1_e10_etcut;   //!
   TBranch        *b_EF_e22i6vh_medium2;   //!
   TBranch        *b_EF_e22vh_loose;   //!
   TBranch        *b_EF_e22vh_loose1;   //!
   TBranch        *b_EF_e22vh_loose1_e10_loose1;   //!
   TBranch        *b_EF_e22vh_looseTrk;   //!
   TBranch        *b_EF_e22vh_loose_2j20_a4tc_EFFS;   //!
   TBranch        *b_EF_e22vh_loose_3L1J10;   //!
   TBranch        *b_EF_e22vh_loose_3j20_a4tc_EFFS;   //!
   TBranch        *b_EF_e22vh_loose_4L1J10;   //!
   TBranch        *b_EF_e22vh_loose_4j15_a4tc_EFFS;   //!
   TBranch        *b_EF_e22vh_medium;   //!
   TBranch        *b_EF_e22vh_medium1;   //!
   TBranch        *b_EF_e22vh_medium1_3j10_a4tc_EFFS;   //!
   TBranch        *b_EF_e22vh_medium1_3j15_a4tc_EFFS;   //!
   TBranch        *b_EF_e22vh_medium1_4j10_a4tc_EFFS;   //!
   TBranch        *b_EF_e22vh_medium1_EFxe20_noMu;   //!
   TBranch        *b_EF_e22vh_medium1_EFxe30_noMu;   //!
   TBranch        *b_EF_e22vh_medium1_EFxe40_noMu;   //!
   TBranch        *b_EF_e22vh_medium1_mu10_EFFS;   //!
   TBranch        *b_EF_e22vh_medium2;   //!
   TBranch        *b_EF_e22vh_medium_IDTrkNoCut;   //!
   TBranch        *b_EF_e22vh_medium_SiTrk;   //!
   TBranch        *b_EF_e22vh_medium_TRT;   //!
   TBranch        *b_EF_e25_loose2_xe20_noMu_recoil40;   //!
   TBranch        *b_EF_e25i5vh_medium2;   //!
   TBranch        *b_EF_e25i6vh_medium2;   //!
   TBranch        *b_EF_e25vh_medium1;   //!
   TBranch        *b_EF_e30vh_medium2;   //!
   TBranch        *b_EF_e9_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_EF_g200_etcut;   //!
   TBranch        *b_EF_j70_a4tc_EFFS_xe70_noMu_dphi2j30xe10;   //!
   TBranch        *b_EF_j75_j45_a4tc_EFFS_xe55_noMu;   //!
   TBranch        *b_EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu;   //!
   TBranch        *b_EF_mu4T_j45_a4tc_EFFS_xe55_noMu;   //!
   TBranch        *b_EF_tau29T_medium1_xe35_noMu_3L1J10;   //!
   TBranch        *b_EF_tau29T_medium_xe35_noMu_3L1J10;   //!
   TBranch        *b_EF_tau29T_medium_xe40_tight_noMu;   //!
   TBranch        *b_EF_xe100_noMu;   //!
   TBranch        *b_EF_xe100_tight_noMu;   //!
   TBranch        *b_EF_xe110_noMu;   //!
   TBranch        *b_EF_xe60_L2FEB_val;   //!
   TBranch        *b_EF_xe60_tight_L2FEB_val;   //!
   TBranch        *b_EF_xe80_tight_noMu;   //!
   TBranch        *b_EF_xe90_tight_noMu;   //!
   TBranch        *b_L1_2EM10VH;   //!
   TBranch        *b_L1_2EM12;   //!
   TBranch        *b_L1_2EM5_EM16VH;   //!
   TBranch        *b_L1_2MU4;   //!
   TBranch        *b_L1_EM10VH;   //!
   TBranch        *b_L1_EM10VH_MU6;   //!
   TBranch        *b_L1_EM10VH_XE20;   //!
   TBranch        *b_L1_EM10VH_XE30;   //!
   TBranch        *b_L1_EM10VH_XE35;   //!
   TBranch        *b_L1_EM12_3J10;   //!
   TBranch        *b_L1_EM12_4J10;   //!
   TBranch        *b_L1_EM12_XE20;   //!
   TBranch        *b_L1_EM12_XE30;   //!
   TBranch        *b_L1_EM12_XS30;   //!
   TBranch        *b_L1_EM12_XS45;   //!
   TBranch        *b_L1_EM16VH;   //!
   TBranch        *b_L1_EM18VH;   //!
   TBranch        *b_L1_EM7_XS30;   //!
   TBranch        *b_L1_EM7_XS45;   //!
   TBranch        *b_L1_MU10_XE25;   //!
   TBranch        *b_L1_MU4_J20_XE20;   //!
   TBranch        *b_L1_MU4_J20_XE35;   //!
   TBranch        *b_L1_TAU15_XE25_3J10;   //!
   TBranch        *b_L1_TAU15_XE25_3J10_J30;   //!
   TBranch        *b_L1_TAU15_XE35;   //!
   TBranch        *b_L2_2e12Tvh_medium;   //!
   TBranch        *b_L2_2e15vh_loose1_Zee;   //!
   TBranch        *b_L2_2e15vh_loose_Zee;   //!
   TBranch        *b_L2_2e15vh_medium;   //!
   TBranch        *b_L2_2mu4T_xe20_noMu;   //!
   TBranch        *b_L2_2mu4T_xe25_noMu;   //!
   TBranch        *b_L2_e10_etcut_mu10;   //!
   TBranch        *b_L2_e10_loose1;   //!
   TBranch        *b_L2_e12Tvh_medium;   //!
   TBranch        *b_L2_e12Tvh_medium_2e6T_medium;   //!
   TBranch        *b_L2_e12Tvh_medium_mu6;   //!
   TBranch        *b_L2_e12Tvh_medium_mu6_topo_medium;   //!
   TBranch        *b_L2_e13_etcutTrk_xs30_noMu;   //!
   TBranch        *b_L2_e13_etcutTrk_xs45_noMu;   //!
   TBranch        *b_L2_e14_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_L2_e15vh_loose1_e12Tvh_loose1_Zee;   //!
   TBranch        *b_L2_e15vh_medium;   //!
   TBranch        *b_L2_e15vh_medium_xe30_noMu;   //!
   TBranch        *b_L2_e15vh_medium_xe35_noMu;   //!
   TBranch        *b_L2_e20_etcutTrk_xe25_noMu;   //!
   TBranch        *b_L2_e20_etcutTrk_xs45_noMu;   //!
   TBranch        *b_L2_e22_etcut_e10_loose1;   //!
   TBranch        *b_L2_e22_etcut_mu10;   //!
   TBranch        *b_L2_e22_loose1_e10_etcut;   //!
   TBranch        *b_L2_e22i6vh_medium2;   //!
   TBranch        *b_L2_e22vh_loose;   //!
   TBranch        *b_L2_e22vh_loose1;   //!
   TBranch        *b_L2_e22vh_loose1_e10_loose1;   //!
   TBranch        *b_L2_e22vh_looseTrk;   //!
   TBranch        *b_L2_e22vh_loose_2j20_a4tc_EFFS;   //!
   TBranch        *b_L2_e22vh_loose_3L1J10;   //!
   TBranch        *b_L2_e22vh_loose_3j20_a4tc_EFFS;   //!
   TBranch        *b_L2_e22vh_loose_4L1J10;   //!
   TBranch        *b_L2_e22vh_loose_4j15_a4tc_EFFS;   //!
   TBranch        *b_L2_e22vh_medium;   //!
   TBranch        *b_L2_e22vh_medium1;   //!
   TBranch        *b_L2_e22vh_medium1_EFxe20_noMu;   //!
   TBranch        *b_L2_e22vh_medium1_EFxe30_noMu;   //!
   TBranch        *b_L2_e22vh_medium1_EFxe40_noMu;   //!
   TBranch        *b_L2_e22vh_medium1_mu10_EFFS;   //!
   TBranch        *b_L2_e22vh_medium2;   //!
   TBranch        *b_L2_e22vh_medium_IDTrkNoCut;   //!
   TBranch        *b_L2_e22vh_medium_SiTrk;   //!
   TBranch        *b_L2_e22vh_medium_TRT;   //!
   TBranch        *b_L2_e25_loose2_xe20_noL2;   //!
   TBranch        *b_L2_e25i5vh_medium2;   //!
   TBranch        *b_L2_e25i6vh_medium2;   //!
   TBranch        *b_L2_e25vh_medium1;   //!
   TBranch        *b_L2_e30vh_medium2;   //!
   TBranch        *b_L2_e9_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_L2_g200_etcut;   //!
   TBranch        *b_L2_j65_xe50_noMu;   //!
   TBranch        *b_L2_j70_j40_xe35_noMu;   //!
   TBranch        *b_L2_mu4T_j40_xe20_loose_noMu;   //!
   TBranch        *b_L2_mu4T_j40_xe35_noMu;   //!
   TBranch        *b_L2_tau29T_medium1_xe25_noMu_3L1J10;   //!
   TBranch        *b_L2_tau29T_medium_xe25_noMu_3L1J10;   //!
   TBranch        *b_L2_tau29T_medium_xe35_tight_noMu;   //!
   TBranch        *b_L2_xe40_L2FEB_val;   //!
   TBranch        *b_L2_xe50_L2FEB_val;   //!
   TBranch        *b_L2_xe65_noMu;   //!
   TBranch        *b_L2_xe75_noMu;   //!
   TBranch        *b_L2_xe80_noMu;   //!
   TBranch        *b_L2_xe85_noMu;   //!
   TBranch        *b_L2_xe90_noMu;   //!
   TBranch        *b_trig_L2_el_L2_2e12Tvh_medium;   //!
   TBranch        *b_trig_L2_el_L2_2e15vh_loose1_Zee;   //!
   TBranch        *b_trig_L2_el_L2_2e15vh_loose_Zee;   //!
   TBranch        *b_trig_L2_el_L2_2e15vh_medium;   //!
   TBranch        *b_trig_L2_el_L2_e10_etcut_mu10;   //!
   TBranch        *b_trig_L2_el_L2_e10_loose1;   //!
   TBranch        *b_trig_L2_el_L2_e12Tvh_medium;   //!
   TBranch        *b_trig_L2_el_L2_e12Tvh_medium_2e6T_medium;   //!
   TBranch        *b_trig_L2_el_L2_e12Tvh_medium_mu6;   //!
   TBranch        *b_trig_L2_el_L2_e12Tvh_medium_mu6_topo_medium;   //!
   TBranch        *b_trig_L2_el_L2_e13_etcutTrk_xs30_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e13_etcutTrk_xs45_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e14_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_trig_L2_el_L2_e15vh_loose1_e12Tvh_loose1_Zee;   //!
   TBranch        *b_trig_L2_el_L2_e15vh_medium;   //!
   TBranch        *b_trig_L2_el_L2_e15vh_medium_xe30_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e15vh_medium_xe35_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e20_etcutTrk_xe25_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e20_etcutTrk_xs45_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e22_etcut_e10_loose1;   //!
   TBranch        *b_trig_L2_el_L2_e22_etcut_mu10;   //!
   TBranch        *b_trig_L2_el_L2_e22_loose1_e10_etcut;   //!
   TBranch        *b_trig_L2_el_L2_e22i6vh_medium2;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_loose;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_loose1;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_loose1_e10_loose1;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_looseTrk;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_loose_2j20_a4tc_EFFS;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_loose_3L1J10;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_loose_3j20_a4tc_EFFS;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_loose_4L1J10;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_loose_4j15_a4tc_EFFS;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_medium;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_medium1;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_medium1_EFxe20_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_medium1_EFxe30_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_medium1_EFxe40_noMu;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_medium1_mu10_EFFS;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_medium2;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_medium_IDTrkNoCut;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_medium_SiTrk;   //!
   TBranch        *b_trig_L2_el_L2_e22vh_medium_TRT;   //!
   TBranch        *b_trig_L2_el_L2_e25_loose2_xe20_noL2;   //!
   TBranch        *b_trig_L2_el_L2_e25i5vh_medium2;   //!
   TBranch        *b_trig_L2_el_L2_e25i6vh_medium2;   //!
   TBranch        *b_trig_L2_el_L2_e25vh_medium1;   //!
   TBranch        *b_trig_L2_el_L2_e30vh_medium2;   //!
   TBranch        *b_trig_L2_el_L2_e9_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_trig_L2_ph_L2_g200_etcut;   //!
   TBranch        *b_trig_EF_el_EF_2e12Tvh_medium;   //!
   TBranch        *b_trig_EF_el_EF_2e15vh_loose1_Zee;   //!
   TBranch        *b_trig_EF_el_EF_2e15vh_loose_Zee;   //!
   TBranch        *b_trig_EF_el_EF_2e15vh_medium;   //!
   TBranch        *b_trig_EF_el_EF_e10_etcut_mu10;   //!
   TBranch        *b_trig_EF_el_EF_e10_loose1;   //!
   TBranch        *b_trig_EF_el_EF_e12Tvh_medium;   //!
   TBranch        *b_trig_EF_el_EF_e12Tvh_medium_2e6T_medium;   //!
   TBranch        *b_trig_EF_el_EF_e12Tvh_medium_mu6;   //!
   TBranch        *b_trig_EF_el_EF_e12Tvh_medium_mu6_topo_medium;   //!
   TBranch        *b_trig_EF_el_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20;   //!
   TBranch        *b_trig_EF_el_EF_e13_etcutTrk_xs60_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07;   //!
   TBranch        *b_trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20;   //!
   TBranch        *b_trig_EF_el_EF_e14_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_trig_EF_el_EF_e15vh_loose1_e12Tvh_loose1_Zee;   //!
   TBranch        *b_trig_EF_el_EF_e15vh_medium;   //!
   TBranch        *b_trig_EF_el_EF_e15vh_medium_xe40_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e15vh_medium_xe50_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20;   //!
   TBranch        *b_trig_EF_el_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07;   //!
   TBranch        *b_trig_EF_el_EF_e22_etcut_e10_loose1;   //!
   TBranch        *b_trig_EF_el_EF_e22_etcut_mu10;   //!
   TBranch        *b_trig_EF_el_EF_e22_loose1_e10_etcut;   //!
   TBranch        *b_trig_EF_el_EF_e22i6vh_medium2;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_loose;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_loose1;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_loose1_e10_loose1;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_looseTrk;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_loose_2j20_a4tc_EFFS;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_loose_3L1J10;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_loose_3j20_a4tc_EFFS;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_loose_4L1J10;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_loose_4j15_a4tc_EFFS;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium1;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium1_3j10_a4tc_EFFS;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium1_3j15_a4tc_EFFS;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium1_4j10_a4tc_EFFS;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium1_EFxe20_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium1_EFxe30_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium1_EFxe40_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium1_mu10_EFFS;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium2;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_e22vh_medium_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e25_loose2_xe20_noMu_recoil40;   //!
   TBranch        *b_trig_EF_el_EF_e25i5vh_medium2;   //!
   TBranch        *b_trig_EF_el_EF_e25i6vh_medium2;   //!
   TBranch        *b_trig_EF_el_EF_e25vh_medium1;   //!
   TBranch        *b_trig_EF_el_EF_e30vh_medium2;   //!
   TBranch        *b_trig_EF_el_EF_e9_tight_e4_etcut_Jpsi;   //!
   TBranch        *b_trig_EF_ph_EF_g200_etcut;   //!

   PhotonTree(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~PhotonTree() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   //ClassDef(PhotonTree,0);
};

#endif

#ifdef PhotonTree_cxx
void PhotonTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   trig_L2_el_L2_2e10_medium = 0;
   trig_L2_el_L2_2e10_medium_mu6 = 0;
   trig_L2_el_L2_2e11T_medium = 0;
   trig_L2_el_L2_2e12T_medium = 0;
   trig_L2_el_L2_2e12_medium = 0;
   trig_L2_el_L2_2e15_loose = 0;
   trig_L2_el_L2_2e15_medium = 0;
   trig_L2_el_L2_2e5_medium = 0;
   trig_L2_el_L2_2e5_medium_SiTrk = 0;
   trig_L2_el_L2_2e5_medium_TRT = 0;
   trig_L2_el_L2_2e5_tight = 0;
   trig_L2_el_L2_2e5_tight_Jpsi = 0;
   trig_L2_el_L2_e10_NoCut = 0;
   trig_L2_el_L2_e10_loose = 0;
   trig_L2_el_L2_e10_loose_mu10 = 0;
   trig_L2_el_L2_e10_loose_mu6 = 0;
   trig_L2_el_L2_e10_medium = 0;
   trig_L2_el_L2_e10_medium_2mu6 = 0;
   trig_L2_el_L2_e10_medium_mu10 = 0;
   trig_L2_el_L2_e10_medium_mu6 = 0;
   trig_L2_el_L2_e10_medium_mu6_topo_medium = 0;
   trig_L2_el_L2_e11T_medium = 0;
   trig_L2_el_L2_e11T_medium_2e6T_medium = 0;
   trig_L2_el_L2_e11_etcut = 0;
   trig_L2_el_L2_e12T_medium_mu6_topo_medium = 0;
   trig_L2_el_L2_e12_medium = 0;
   trig_L2_el_L2_e13_etcut_xs45_noMu = 0;
   trig_L2_el_L2_e15_HLTtighter = 0;
   trig_L2_el_L2_e15_loose = 0;
   trig_L2_el_L2_e15_medium = 0;
   trig_L2_el_L2_e15_medium_e12_medium = 0;
   trig_L2_el_L2_e15_medium_mu6 = 0;
   trig_L2_el_L2_e15_medium_xe20_noMu = 0;
   trig_L2_el_L2_e15_medium_xe25_noMu = 0;
   trig_L2_el_L2_e15_medium_xe30_noMu = 0;
   trig_L2_el_L2_e15_medium_xe35_noMu = 0;
   trig_L2_el_L2_e15_medium_xe40_loose_noMu = 0;
   trig_L2_el_L2_e15_tight = 0;
   trig_L2_el_L2_e15_tight1 = 0;
   trig_L2_el_L2_e15_tight_xe30_noMu = 0;
   trig_L2_el_L2_e18_medium = 0;
   trig_L2_el_L2_e18_medium_xe20_noMu = 0;
   trig_L2_el_L2_e18_tight = 0;
   trig_L2_el_L2_e20_L2Star_IDTrkNoCut = 0;
   trig_L2_el_L2_e20_etcut_xs45_noMu = 0;
   trig_L2_el_L2_e20_loose = 0;
   trig_L2_el_L2_e20_loose1 = 0;
   trig_L2_el_L2_e20_looseTrk = 0;
   trig_L2_el_L2_e20_loose_2j10_a4tc_EFFS = 0;
   trig_L2_el_L2_e20_loose_3j10_a4tc_EFFS = 0;
   trig_L2_el_L2_e20_loose_4j10_a4tc_EFFS = 0;
   trig_L2_el_L2_e20_loose_IDTrkNoCut = 0;
   trig_L2_el_L2_e20_loose_TRT = 0;
   trig_L2_el_L2_e20_loose_xe20 = 0;
   trig_L2_el_L2_e20_loose_xe20_noMu = 0;
   trig_L2_el_L2_e20_loose_xe30 = 0;
   trig_L2_el_L2_e20_loose_xe30_noMu = 0;
   trig_L2_el_L2_e20_medium = 0;
   trig_L2_el_L2_e20_medium1 = 0;
   trig_L2_el_L2_e20_medium2 = 0;
   trig_L2_el_L2_e20_medium_IDTrkNoCut = 0;
   trig_L2_el_L2_e20_medium_SiTrk = 0;
   trig_L2_el_L2_e20_medium_TRT = 0;
   trig_L2_el_L2_e20_tight = 0;
   trig_L2_el_L2_e20_tight_e15_NoCut_Zee = 0;
   trig_L2_el_L2_e22_etcut_xs45_noMu = 0;
   trig_L2_el_L2_e22_loose = 0;
   trig_L2_el_L2_e22_loose1 = 0;
   trig_L2_el_L2_e22_looseTrk = 0;
   trig_L2_el_L2_e22_medium = 0;
   trig_L2_el_L2_e22_medium1 = 0;
   trig_L2_el_L2_e22_medium2 = 0;
   trig_L2_el_L2_e22_medium_IDTrkNoCut = 0;
   trig_L2_el_L2_e22_medium_SiTrk = 0;
   trig_L2_el_L2_e22_medium_TRT = 0;
   trig_L2_el_L2_e22_tight = 0;
   trig_L2_el_L2_e25_loose = 0;
   trig_L2_el_L2_e25_medium = 0;
   trig_L2_el_L2_e30_loose = 0;
   trig_L2_el_L2_e30_medium = 0;
   trig_L2_el_L2_e33_medium = 0;
   trig_L2_el_L2_e35_medium = 0;
   trig_L2_el_L2_e40_medium = 0;
   trig_L2_el_L2_e45_medium = 0;
   trig_L2_el_L2_e45_medium1 = 0;
   trig_L2_el_L2_e5_NoCut_L2SW = 0;
   trig_L2_el_L2_e5_NoCut_Ringer = 0;
   trig_L2_el_L2_e5_NoCut_firstempty = 0;
   trig_L2_el_L2_e5_medium_mu4 = 0;
   trig_L2_el_L2_e5_medium_mu6 = 0;
   trig_L2_el_L2_e5_medium_mu6_topo_loose = 0;
   trig_L2_el_L2_e5_medium_mu6_topo_medium = 0;
   trig_L2_el_L2_e5_tight = 0;
   trig_L2_el_L2_e5_tight_TRT = 0;
   trig_L2_el_L2_e5_tight_e14_etcut_Jpsi = 0;
   trig_L2_el_L2_e5_tight_e4_etcut_Jpsi = 0;
   trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_SiTrk = 0;
   trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_TRT = 0;
   trig_L2_el_L2_e5_tight_e5_NoCut = 0;
   trig_L2_el_L2_e5_tight_e5_NoCut_Jpsi = 0;
   trig_L2_el_L2_e5_tight_e7_etcut_Jpsi = 0;
   trig_L2_el_L2_e5_tight_e9_etcut_Jpsi = 0;
   trig_L2_el_L2_e60_loose = 0;
   trig_L2_el_L2_e6T_medium = 0;
   trig_L2_el_L2_e7_tight_e14_etcut_Jpsi = 0;
   trig_L2_el_L2_e9_tight_e5_tight_Jpsi = 0;
   trig_L2_el_L2_eb_physics = 0;
   trig_L2_el_L2_eb_physics_empty = 0;
   trig_L2_el_L2_eb_physics_firstempty = 0;
   trig_L2_el_L2_eb_physics_noL1PS = 0;
   trig_L2_el_L2_eb_physics_unpaired_iso = 0;
   trig_L2_el_L2_eb_physics_unpaired_noniso = 0;
   trig_L2_el_L2_eb_random = 0;
   trig_L2_el_L2_eb_random_empty = 0;
   trig_L2_el_L2_eb_random_firstempty = 0;
   trig_L2_el_L2_eb_random_unpaired_iso = 0;
   trig_L2_el_L2_em105_passHLT = 0;
   trig_L2_el_L2_em3_empty_larcalib = 0;
   trig_L2_el_L2_em5_empty_larcalib = 0;
   trig_L2_ph_L2_2g10_loose = 0;
   trig_L2_ph_L2_2g15_loose = 0;
   trig_L2_ph_L2_2g20_loose = 0;
   trig_L2_ph_L2_2g50_etcut = 0;
   trig_L2_ph_L2_g100_etcut_g50_etcut = 0;
   trig_L2_ph_L2_g100_loose = 0;
   trig_L2_ph_L2_g10_NoCut_cosmic = 0;
   trig_L2_ph_L2_g11_etcut = 0;
   trig_L2_ph_L2_g13_etcut_xs45_noMu = 0;
   trig_L2_ph_L2_g150_etcut = 0;
   trig_L2_ph_L2_g15_loose = 0;
   trig_L2_ph_L2_g17_etcut = 0;
   trig_L2_ph_L2_g17_etcut_EFxe20_noMu = 0;
   trig_L2_ph_L2_g17_etcut_EFxe30_noMu = 0;
   trig_L2_ph_L2_g20_etcut = 0;
   trig_L2_ph_L2_g20_etcut_xe30_noMu = 0;
   trig_L2_ph_L2_g20_loose = 0;
   trig_L2_ph_L2_g20_loose_cnv = 0;
   trig_L2_ph_L2_g20_loose_xe20_noMu = 0;
   trig_L2_ph_L2_g20_loose_xe30_noMu = 0;
   trig_L2_ph_L2_g20_tight = 0;
   trig_L2_ph_L2_g22_hiptrt = 0;
   trig_L2_ph_L2_g25_loose_xe30_noMu = 0;
   trig_L2_ph_L2_g27_etcut = 0;
   trig_L2_ph_L2_g27_etcut_EFxe30_noMu = 0;
   trig_L2_ph_L2_g30_loose_g20_loose = 0;
   trig_L2_ph_L2_g40_loose = 0;
   trig_L2_ph_L2_g40_loose_EFxe35_noMu = 0;
   trig_L2_ph_L2_g40_loose_EFxe40_noMu = 0;
   trig_L2_ph_L2_g40_loose_b10_medium = 0;
   trig_L2_ph_L2_g40_loose_xe30_medium_noMu = 0;
   trig_L2_ph_L2_g40_loose_xe35_medium_noMu = 0;
   trig_L2_ph_L2_g40_loose_xe40_noMu = 0;
   trig_L2_ph_L2_g40_loose_xs35_noMu = 0;
   trig_L2_ph_L2_g40_tight = 0;
   trig_L2_ph_L2_g40_tight_b10_medium = 0;
   trig_L2_ph_L2_g40_tight_b15_medium = 0;
   trig_L2_ph_L2_g50_loose = 0;
   trig_L2_ph_L2_g5_NoCut_cosmic = 0;
   trig_L2_ph_L2_g60_loose = 0;
   trig_L2_ph_L2_g80_loose = 0;
   trig_EF_el_EF_2e10_medium = 0;
   trig_EF_el_EF_2e10_medium_mu6 = 0;
   trig_EF_el_EF_2e11T_medium = 0;
   trig_EF_el_EF_2e12T_medium = 0;
   trig_EF_el_EF_2e12_medium = 0;
   trig_EF_el_EF_2e15_loose = 0;
   trig_EF_el_EF_2e15_medium = 0;
   trig_EF_el_EF_2e5_medium = 0;
   trig_EF_el_EF_2e5_medium_SiTrk = 0;
   trig_EF_el_EF_2e5_medium_TRT = 0;
   trig_EF_el_EF_2e5_tight = 0;
   trig_EF_el_EF_2e5_tight_Jpsi = 0;
   trig_EF_el_EF_e10_NoCut = 0;
   trig_EF_el_EF_e10_loose = 0;
   trig_EF_el_EF_e10_loose_mu10 = 0;
   trig_EF_el_EF_e10_loose_mu6 = 0;
   trig_EF_el_EF_e10_medium = 0;
   trig_EF_el_EF_e10_medium_2mu6 = 0;
   trig_EF_el_EF_e10_medium_mu10 = 0;
   trig_EF_el_EF_e10_medium_mu6 = 0;
   trig_EF_el_EF_e10_medium_mu6_topo_medium = 0;
   trig_EF_el_EF_e11T_medium = 0;
   trig_EF_el_EF_e11T_medium_2e6T_medium = 0;
   trig_EF_el_EF_e11_etcut = 0;
   trig_EF_el_EF_e12T_medium_mu6_topo_medium = 0;
   trig_EF_el_EF_e12_medium = 0;
   trig_EF_el_EF_e13_etcutTRT_xs60_noMu = 0;
   trig_EF_el_EF_e13_etcut_xs60_noMu = 0;
   trig_EF_el_EF_e13_etcut_xs70_noMu = 0;
   trig_EF_el_EF_e15_HLTtighter = 0;
   trig_EF_el_EF_e15_loose = 0;
   trig_EF_el_EF_e15_medium = 0;
   trig_EF_el_EF_e15_medium_e12_medium = 0;
   trig_EF_el_EF_e15_medium_mu6 = 0;
   trig_EF_el_EF_e15_medium_xe30_noMu = 0;
   trig_EF_el_EF_e15_medium_xe35_loose_noMu = 0;
   trig_EF_el_EF_e15_medium_xe35_noMu = 0;
   trig_EF_el_EF_e15_medium_xe40_loose_noMu = 0;
   trig_EF_el_EF_e15_medium_xe40_noMu = 0;
   trig_EF_el_EF_e15_medium_xe50_noMu = 0;
   trig_EF_el_EF_e15_tight = 0;
   trig_EF_el_EF_e15_tight1 = 0;
   trig_EF_el_EF_e15_tight_xe30_noMu = 0;
   trig_EF_el_EF_e18_medium = 0;
   trig_EF_el_EF_e18_medium_xe30_noMu = 0;
   trig_EF_el_EF_e18_tight = 0;
   trig_EF_el_EF_e20_L2Star_IDTrkNoCut = 0;
   trig_EF_el_EF_e20_etcut_xs60_noMu = 0;
   trig_EF_el_EF_e20_loose = 0;
   trig_EF_el_EF_e20_loose1 = 0;
   trig_EF_el_EF_e20_looseTrk = 0;
   trig_EF_el_EF_e20_loose_2j10_a4tc_EFFS = 0;
   trig_EF_el_EF_e20_loose_3j10_a4tc_EFFS = 0;
   trig_EF_el_EF_e20_loose_4j10_a4tc_EFFS = 0;
   trig_EF_el_EF_e20_loose_IDTrkNoCut = 0;
   trig_EF_el_EF_e20_loose_TRT = 0;
   trig_EF_el_EF_e20_loose_xe20 = 0;
   trig_EF_el_EF_e20_loose_xe20_noMu = 0;
   trig_EF_el_EF_e20_loose_xe30 = 0;
   trig_EF_el_EF_e20_loose_xe30_noMu = 0;
   trig_EF_el_EF_e20_medium = 0;
   trig_EF_el_EF_e20_medium1 = 0;
   trig_EF_el_EF_e20_medium2 = 0;
   trig_EF_el_EF_e20_medium_IDTrkNoCut = 0;
   trig_EF_el_EF_e20_medium_SiTrk = 0;
   trig_EF_el_EF_e20_medium_TRT = 0;
   trig_EF_el_EF_e20_tight = 0;
   trig_EF_el_EF_e20_tight_e15_NoCut_Zee = 0;
   trig_EF_el_EF_e22_etcut_xs60_noMu = 0;
   trig_EF_el_EF_e22_loose = 0;
   trig_EF_el_EF_e22_loose1 = 0;
   trig_EF_el_EF_e22_looseTrk = 0;
   trig_EF_el_EF_e22_medium = 0;
   trig_EF_el_EF_e22_medium1 = 0;
   trig_EF_el_EF_e22_medium2 = 0;
   trig_EF_el_EF_e22_medium_IDTrkNoCut = 0;
   trig_EF_el_EF_e22_medium_SiTrk = 0;
   trig_EF_el_EF_e22_medium_TRT = 0;
   trig_EF_el_EF_e22_tight = 0;
   trig_EF_el_EF_e25_loose = 0;
   trig_EF_el_EF_e25_medium = 0;
   trig_EF_el_EF_e30_loose = 0;
   trig_EF_el_EF_e30_medium = 0;
   trig_EF_el_EF_e33_medium = 0;
   trig_EF_el_EF_e35_medium = 0;
   trig_EF_el_EF_e40_medium = 0;
   trig_EF_el_EF_e45_medium = 0;
   trig_EF_el_EF_e45_medium1 = 0;
   trig_EF_el_EF_e5_NoCut_L2SW = 0;
   trig_EF_el_EF_e5_NoCut_Ringer = 0;
   trig_EF_el_EF_e5_NoCut_firstempty = 0;
   trig_EF_el_EF_e5_medium_mu4 = 0;
   trig_EF_el_EF_e5_medium_mu6 = 0;
   trig_EF_el_EF_e5_medium_mu6_topo_loose = 0;
   trig_EF_el_EF_e5_medium_mu6_topo_medium = 0;
   trig_EF_el_EF_e5_tight = 0;
   trig_EF_el_EF_e5_tight_TRT = 0;
   trig_EF_el_EF_e5_tight_e14_etcut_Jpsi = 0;
   trig_EF_el_EF_e5_tight_e4_etcut_Jpsi = 0;
   trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_SiTrk = 0;
   trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_TRT = 0;
   trig_EF_el_EF_e5_tight_e5_NoCut = 0;
   trig_EF_el_EF_e5_tight_e5_NoCut_Jpsi = 0;
   trig_EF_el_EF_e5_tight_e7_etcut_Jpsi = 0;
   trig_EF_el_EF_e5_tight_e9_etcut_Jpsi = 0;
   trig_EF_el_EF_e60_loose = 0;
   trig_EF_el_EF_e6T_medium = 0;
   trig_EF_el_EF_e7_tight_e14_etcut_Jpsi = 0;
   trig_EF_el_EF_e9_tight_e5_tight_Jpsi = 0;
   trig_EF_el_EF_eb_physics = 0;
   trig_EF_el_EF_eb_physics_empty = 0;
   trig_EF_el_EF_eb_physics_firstempty = 0;
   trig_EF_el_EF_eb_physics_noL1PS = 0;
   trig_EF_el_EF_eb_physics_unpaired_iso = 0;
   trig_EF_el_EF_eb_physics_unpaired_noniso = 0;
   trig_EF_el_EF_eb_random = 0;
   trig_EF_el_EF_eb_random_empty = 0;
   trig_EF_el_EF_eb_random_firstempty = 0;
   trig_EF_el_EF_eb_random_unpaired_iso = 0;
   trig_EF_el_EF_em105_passHLT = 0;
   trig_EF_ph_EF_2g10_loose = 0;
   trig_EF_ph_EF_2g15_loose = 0;
   trig_EF_ph_EF_2g20_loose = 0;
   trig_EF_ph_EF_2g50_etcut = 0;
   trig_EF_ph_EF_g100_etcut_g50_etcut = 0;
   trig_EF_ph_EF_g100_loose = 0;
   trig_EF_ph_EF_g10_NoCut_cosmic = 0;
   trig_EF_ph_EF_g11_etcut = 0;
   trig_EF_ph_EF_g11_etcut_larcalib = 0;
   trig_EF_ph_EF_g13_etcut_xs60_noMu = 0;
   trig_EF_ph_EF_g150_etcut = 0;
   trig_EF_ph_EF_g15_loose = 0;
   trig_EF_ph_EF_g15_loose_larcalib = 0;
   trig_EF_ph_EF_g17_etcut = 0;
   trig_EF_ph_EF_g17_etcut_EFxe20_noMu = 0;
   trig_EF_ph_EF_g17_etcut_EFxe30_noMu = 0;
   trig_EF_ph_EF_g20_etcut = 0;
   trig_EF_ph_EF_g20_etcut_xe30_noMu = 0;
   trig_EF_ph_EF_g20_loose = 0;
   trig_EF_ph_EF_g20_loose_cnv = 0;
   trig_EF_ph_EF_g20_loose_larcalib = 0;
   trig_EF_ph_EF_g20_loose_xe20_noMu = 0;
   trig_EF_ph_EF_g20_loose_xe30_noMu = 0;
   trig_EF_ph_EF_g20_tight = 0;
   trig_EF_ph_EF_g22_hiptrt = 0;
   trig_EF_ph_EF_g25_loose_xe30_noMu = 0;
   trig_EF_ph_EF_g27_etcut = 0;
   trig_EF_ph_EF_g27_etcut_EFxe30_noMu = 0;
   trig_EF_ph_EF_g30_loose_g20_loose = 0;
   trig_EF_ph_EF_g40_loose = 0;
   trig_EF_ph_EF_g40_loose_EFxe35_noMu = 0;
   trig_EF_ph_EF_g40_loose_EFxe40_noMu = 0;
   trig_EF_ph_EF_g40_loose_b10_medium = 0;
   trig_EF_ph_EF_g40_loose_larcalib = 0;
   trig_EF_ph_EF_g40_loose_xe40_noMu = 0;
   trig_EF_ph_EF_g40_loose_xe45_medium_noMu = 0;
   trig_EF_ph_EF_g40_loose_xe55_medium_noMu = 0;
   trig_EF_ph_EF_g40_loose_xs35_noMu = 0;
   trig_EF_ph_EF_g40_tight = 0;
   trig_EF_ph_EF_g40_tight_b10_medium = 0;
   trig_EF_ph_EF_g40_tight_b15_medium = 0;
   trig_EF_ph_EF_g50_loose = 0;
   trig_EF_ph_EF_g5_NoCut_cosmic = 0;
   trig_EF_ph_EF_g60_loose = 0;
   trig_EF_ph_EF_g60_loose_larcalib = 0;
   trig_EF_ph_EF_g80_loose = 0;
   trig_EF_ph_EF_g80_loose_larcalib = 0;
   mb_E = 0;
   mb_eta = 0;
   mb_phi = 0;
   mb_time = 0;
   mb_quality = 0;
   mb_type = 0;
   mb_module = 0;
   mb_channel = 0;
   trk_d0 = 0;
   trk_z0 = 0;
   trk_phi = 0;
   trk_theta = 0;
   trk_qoverp = 0;
   trk_pt = 0;
   trk_eta = 0;
   trk_d0_wrtPV = 0;
   trk_z0_wrtPV = 0;
   trk_phi_wrtPV = 0;
   trk_d0_wrtBS = 0;
   trk_z0_wrtBS = 0;
   trk_phi_wrtBS = 0;
   trk_chi2 = 0;
   trk_ndof = 0;
   trk_nBLHits = 0;
   trk_nPixHits = 0;
   trk_nSCTHits = 0;
   trk_nTRTHits = 0;
   trk_nTRTHighTHits = 0;
   trk_nPixHoles = 0;
   trk_nSCTHoles = 0;
   trk_nTRTHoles = 0;
   trk_expectBLayerHit = 0;
   trk_nMDTHits = 0;
   trk_nCSCEtaHits = 0;
   trk_nCSCPhiHits = 0;
   trk_nRPCEtaHits = 0;
   trk_nRPCPhiHits = 0;
   trk_nTGCEtaHits = 0;
   trk_nTGCPhiHits = 0;
   trk_nHits = 0;
   trk_nHoles = 0;
   trk_hitPattern = 0;
   trk_TRTHighTHitsRatio = 0;
   trk_TRTHighTOutliersRatio = 0;
   trk_mc_probability = 0;
   trk_mc_barcode = 0;
   trk_conv_weight = 0;
   mu_E = 0;
   mu_pt = 0;
   mu_m = 0;
   mu_eta = 0;
   mu_phi = 0;
   mu_px = 0;
   mu_py = 0;
   mu_pz = 0;
   mu_charge = 0;
   mu_allauthor = 0;
   mu_hastrack = 0;
   mu_truth_dr = 0;
   mu_truth_E = 0;
   mu_truth_pt = 0;
   mu_truth_eta = 0;
   mu_truth_phi = 0;
   mu_truth_type = 0;
   mu_truth_status = 0;
   mu_truth_barcode = 0;
   mu_truth_mothertype = 0;
   mu_truth_motherbarcode = 0;
   mu_truth_matched = 0;
   mu_author = 0;
   mu_beta = 0;
   mu_isMuonLikelihood = 0;
   mu_matchchi2 = 0;
   mu_matchndof = 0;
   mu_etcone20 = 0;
   mu_etcone30 = 0;
   mu_etcone40 = 0;
   mu_nucone20 = 0;
   mu_nucone30 = 0;
   mu_nucone40 = 0;
   mu_ptcone20 = 0;
   mu_ptcone30 = 0;
   mu_ptcone40 = 0;
   mu_energyLossPar = 0;
   mu_energyLossErr = 0;
   mu_etCore = 0;
   mu_energyLossType = 0;
   mu_caloMuonIdTag = 0;
   mu_caloLRLikelihood = 0;
   mu_bestMatch = 0;
   mu_isStandAloneMuon = 0;
   mu_isCombinedMuon = 0;
   mu_isLowPtReconstructedMuon = 0;
   mu_isSegmentTaggedMuon = 0;
   mu_isCaloMuonId = 0;
   mu_alsoFoundByLowPt = 0;
   mu_alsoFoundByCaloMuonId = 0;
   mu_loose = 0;
   mu_medium = 0;
   mu_tight = 0;
   diphoton_fit_etaLead_zcommon = 0;
   diphoton_fit_etaSublead_zcommon = 0;
   diphoton_fit_zcommon = 0;
   diphoton_fit_sigma_zcommon = 0;
   diphoton_fit_vtxLikelihood = 0;
   diphoton_fit_mgg = 0;
   diphoton_fit_mgg_trueDir = 0;
   diphoton_fit_mgg_trueE = 0;
   diphoton_fit_fitFlag = 0;
   diphoton_fit_ptgg = 0;
   diphoton_fit_detagg = 0;
   diphoton_fit_cosThetaStar = 0;
   diphoton_onejet_cutStatus = 0;
   diphoton_onejet_ok = 0;
   diphoton_onejet_mgg = 0;
   diphoton_onejet_mggj = 0;
   diphoton_twojet_cutStatus = 0;
   diphoton_twojet_ok = 0;
   diphoton_twojet_mgg = 0;
   diphoton_twojet_mjj = 0;
   diphoton_hggZWjj_SumTracksPT = 0;
   diphoton_hggZWjj_mjjZW_tracks = 0;
   diphoton_hggZWjj_mjjZW = 0;
   diphoton_hggZWjj_ZW7Njet = 0;
   diphoton_hggZWjj_PTjjZW = 0;
   diphoton_hggZWjj_PTjjZW_tracks = 0;
   diphoton_hggZWjj_hggZWjj_ok = 0;
   diphoton_hggZWjj_hggZWdeltaRjj = 0;
   diphoton_hggZWjj_PTjZW = 0;
   diphoton_hggZWjj_PTjZWTracks = 0;
   diphoton_hggZWjj_EtajZW = 0;
   diphoton_hggZWjj_SumTracksPT4 = 0;
   diphoton_hggZWjj_mjjZW4_tracks = 0;
   diphoton_hggZWjj_mjjZW4 = 0;
   diphoton_hggZWjj_ZW4Njet = 0;
   diphoton_hggZWjj_PTjjZW4 = 0;
   diphoton_hggZWjj_PTjjZW4_tracks = 0;
   diphoton_hggZWjj_DeltaRphotons = 0;
   diphoton_hggZWjj_PTjZW4 = 0;
   diphoton_hggZWjj_PTjZW4Tracks = 0;
   diphoton_hggZWjj_EtajZW4 = 0;
   diphoton_hggZWjj_hggetmiss_ok = 0;
   diphoton_hggZWjj_hgglepton_ok = 0;
   diphoton_hggZWjj_DeltaRmujet = 0;
   diphoton_HPV_zcommon = 0;
   diphoton_HPV_sigma_zcommon = 0;
   diphoton_HPV_zcommon_primVtxLH = 0;
   diphoton_HPV_vtxLikelihood = 0;
   diphoton_HPV_etaLead_zcommon = 0;
   diphoton_HPV_etaSublead_zcommon = 0;
   diphoton_HPV_mgg = 0;
   diphoton_HPV_etaLead_zcommon_primVtxLH = 0;
   diphoton_HPV_etaSublead_zcommon_primVtxLH = 0;
   diphoton_HPV_mgg_primVtxLH = 0;
   diphoton_HPV_mgg_Ztruth = 0;
   diphoton_HPV_ptgg = 0;
   diphoton_HPV_detagg = 0;
   diphoton_HPV_dphigg = 0;
   diphoton_HPV_cosTh = 0;
   diphoton_HPV_cosThCS = 0;
   diphoton_ph_n = 0;
   diphoton_ph_index = 0;
   jet_AntiKt4TopoEMJets_E = 0;
   jet_AntiKt4TopoEMJets_pt = 0;
   jet_AntiKt4TopoEMJets_m = 0;
   jet_AntiKt4TopoEMJets_eta = 0;
   jet_AntiKt4TopoEMJets_phi = 0;
   jet_AntiKt4TopoEMJets_EtaOrigin = 0;
   jet_AntiKt4TopoEMJets_PhiOrigin = 0;
   jet_AntiKt4TopoEMJets_MOrigin = 0;
   jet_AntiKt4TopoEMJets_EtaOriginEM = 0;
   jet_AntiKt4TopoEMJets_PhiOriginEM = 0;
   jet_AntiKt4TopoEMJets_MOriginEM = 0;
   jet_AntiKt4TopoEMJets_WIDTH = 0;
   jet_AntiKt4TopoEMJets_n90 = 0;
   jet_AntiKt4TopoEMJets_Timing = 0;
   jet_AntiKt4TopoEMJets_LArQuality = 0;
   jet_AntiKt4TopoEMJets_nTrk = 0;
   jet_AntiKt4TopoEMJets_sumPtTrk = 0;
   jet_AntiKt4TopoEMJets_OriginIndex = 0;
   jet_AntiKt4TopoEMJets_HECQuality = 0;
   jet_AntiKt4TopoEMJets_NegativeE = 0;
   jet_AntiKt4TopoEMJets_AverageLArQF = 0;
   jet_AntiKt4TopoEMJets_YFlip12 = 0;
   jet_AntiKt4TopoEMJets_YFlip23 = 0;
   jet_AntiKt4TopoEMJets_BCH_CORR_CELL = 0;
   jet_AntiKt4TopoEMJets_BCH_CORR_DOTX = 0;
   jet_AntiKt4TopoEMJets_BCH_CORR_JET = 0;
   jet_AntiKt4TopoEMJets_BCH_CORR_JET_FORCELL = 0;
   jet_AntiKt4TopoEMJets_ENG_BAD_CELLS = 0;
   jet_AntiKt4TopoEMJets_N_BAD_CELLS = 0;
   jet_AntiKt4TopoEMJets_N_BAD_CELLS_CORR = 0;
   jet_AntiKt4TopoEMJets_BAD_CELLS_CORR_E = 0;
   jet_AntiKt4TopoEMJets_NumTowers = 0;
   jet_AntiKt4TopoEMJets_SamplingMax = 0;
   jet_AntiKt4TopoEMJets_fracSamplingMax = 0;
   jet_AntiKt4TopoEMJets_hecf = 0;
   jet_AntiKt4TopoEMJets_tgap3f = 0;
   jet_AntiKt4TopoEMJets_isUgly = 0;
   jet_AntiKt4TopoEMJets_isBadLooseMinus = 0;
   jet_AntiKt4TopoEMJets_isBadLoose = 0;
   jet_AntiKt4TopoEMJets_isBadMedium = 0;
   jet_AntiKt4TopoEMJets_isBadTight = 0;
   jet_AntiKt4TopoEMJets_emfrac = 0;
   jet_AntiKt4TopoEMJets_Offset = 0;
   jet_AntiKt4TopoEMJets_EMJES = 0;
   jet_AntiKt4TopoEMJets_EMJES_EtaCorr = 0;
   jet_AntiKt4TopoEMJets_EMJESnooffset = 0;
   jet_AntiKt4TopoEMJets_GCWJES = 0;
   jet_AntiKt4TopoEMJets_GCWJES_EtaCorr = 0;
   jet_AntiKt4TopoEMJets_CB = 0;
   jet_AntiKt4TopoEMJets_LCJES = 0;
   jet_AntiKt4TopoEMJets_emscale_E = 0;
   jet_AntiKt4TopoEMJets_emscale_pt = 0;
   jet_AntiKt4TopoEMJets_emscale_m = 0;
   jet_AntiKt4TopoEMJets_emscale_eta = 0;
   jet_AntiKt4TopoEMJets_emscale_phi = 0;
   jet_AntiKt4TopoEMJets_jvtx_x = 0;
   jet_AntiKt4TopoEMJets_jvtx_y = 0;
   jet_AntiKt4TopoEMJets_jvtx_z = 0;
   jet_AntiKt4TopoEMJets_jvtxf = 0;
   jet_AntiKt4TopoEMJets_jvtxfFull = 0;
   jet_AntiKt4TopoEMJets_GSCFactorF = 0;
   jet_AntiKt4TopoEMJets_WidthFraction = 0;
   jet_AntiKt4TopoEMJets_flavor_weight_Comb = 0;
   jet_AntiKt4TopoEMJets_flavor_weight_IP2D = 0;
   jet_AntiKt4TopoEMJets_flavor_weight_IP3D = 0;
   jet_AntiKt4TopoEMJets_flavor_weight_SV0 = 0;
   jet_AntiKt4TopoEMJets_flavor_weight_SV1 = 0;
   jet_AntiKt4TopoEMJets_flavor_weight_SV2 = 0;
   jet_AntiKt4TopoEMJets_flavor_weight_JetProb = 0;
   jet_AntiKt4TopoEMJets_flavor_weight_SoftMuonTag = 0;
   jet_AntiKt4TopoEMJets_flavor_weight_JetFitterTagNN = 0;
   jet_AntiKt4TopoEMJets_flavor_weight_JetFitterCOMBNN = 0;
   jet_AntiKt4TopoEMJets_flavor_weight_GbbNN = 0;
   jet_AntiKt4TopoEMJets_flavor_truth_label = 0;
   jet_AntiKt4TopoEMJets_flavor_truth_dRminToB = 0;
   jet_AntiKt4TopoEMJets_flavor_truth_dRminToC = 0;
   jet_AntiKt4TopoEMJets_flavor_truth_dRminToT = 0;
   jet_AntiKt4TopoEMJets_flavor_truth_BHadronpdg = 0;
   jet_AntiKt4TopoEMJets_flavor_truth_vx_x = 0;
   jet_AntiKt4TopoEMJets_flavor_truth_vx_y = 0;
   jet_AntiKt4TopoEMJets_flavor_truth_vx_z = 0;
   jet_AntiKt4TopoEMJets_flavor_component_ip2d_pu = 0;
   jet_AntiKt4TopoEMJets_flavor_component_ip2d_pb = 0;
   jet_AntiKt4TopoEMJets_flavor_component_ip2d_isValid = 0;
   jet_AntiKt4TopoEMJets_flavor_component_ip2d_ntrk = 0;
   jet_AntiKt4TopoEMJets_flavor_component_ip3d_pu = 0;
   jet_AntiKt4TopoEMJets_flavor_component_ip3d_pb = 0;
   jet_AntiKt4TopoEMJets_flavor_component_ip3d_isValid = 0;
   jet_AntiKt4TopoEMJets_flavor_component_ip3d_ntrk = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv1_pu = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv1_pb = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv1_isValid = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv2_pu = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv2_pb = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv2_isValid = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_pu = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_pb = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_pc = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_isValid = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pu = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pb = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pc = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_isValid = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx1t = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_ntrkAtVx = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_efrc = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_mass = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_sig3d = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaPhi = 0;
   jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaEta = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_isValid = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkv = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkj = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_n2t = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_mass = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_efrc = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_x = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_y = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_z = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_err_x = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_err_y = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_err_z = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xy = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xz = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_cov_yz = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_chi2 = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_ndof = 0;
   jet_AntiKt4TopoEMJets_flavor_component_svp_ntrk = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_isValid = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkv = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkj = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_n2t = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_mass = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_efrc = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_x = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_y = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_z = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_x = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_y = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_z = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xy = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xz = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_yz = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_chi2 = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_ndof = 0;
   jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrk = 0;
   jet_AntiKt4TopoEMJets_el_dr = 0;
   jet_AntiKt4TopoEMJets_el_matched = 0;
   jet_AntiKt4TopoEMJets_mu_dr = 0;
   jet_AntiKt4TopoEMJets_mu_matched = 0;
   jet_AntiKt4TopoEMJets_L1_dr = 0;
   jet_AntiKt4TopoEMJets_L1_matched = 0;
   jet_AntiKt4TopoEMJets_L2_dr = 0;
   jet_AntiKt4TopoEMJets_L2_matched = 0;
   jet_AntiKt4TopoEMJets_EF_dr = 0;
   jet_AntiKt4TopoEMJets_EF_matched = 0;
   jet_AntiKt6TopoEMJets_E = 0;
   jet_AntiKt6TopoEMJets_pt = 0;
   jet_AntiKt6TopoEMJets_m = 0;
   jet_AntiKt6TopoEMJets_eta = 0;
   jet_AntiKt6TopoEMJets_phi = 0;
   jet_AntiKt6TopoEMJets_EtaOrigin = 0;
   jet_AntiKt6TopoEMJets_PhiOrigin = 0;
   jet_AntiKt6TopoEMJets_MOrigin = 0;
   jet_AntiKt6TopoEMJets_EtaOriginEM = 0;
   jet_AntiKt6TopoEMJets_PhiOriginEM = 0;
   jet_AntiKt6TopoEMJets_MOriginEM = 0;
   jet_AntiKt6TopoEMJets_WIDTH = 0;
   jet_AntiKt6TopoEMJets_n90 = 0;
   jet_AntiKt6TopoEMJets_Timing = 0;
   jet_AntiKt6TopoEMJets_LArQuality = 0;
   jet_AntiKt6TopoEMJets_nTrk = 0;
   jet_AntiKt6TopoEMJets_sumPtTrk = 0;
   jet_AntiKt6TopoEMJets_OriginIndex = 0;
   jet_AntiKt6TopoEMJets_HECQuality = 0;
   jet_AntiKt6TopoEMJets_NegativeE = 0;
   jet_AntiKt6TopoEMJets_AverageLArQF = 0;
   jet_AntiKt6TopoEMJets_YFlip12 = 0;
   jet_AntiKt6TopoEMJets_YFlip23 = 0;
   jet_AntiKt6TopoEMJets_BCH_CORR_CELL = 0;
   jet_AntiKt6TopoEMJets_BCH_CORR_DOTX = 0;
   jet_AntiKt6TopoEMJets_BCH_CORR_JET = 0;
   jet_AntiKt6TopoEMJets_BCH_CORR_JET_FORCELL = 0;
   jet_AntiKt6TopoEMJets_ENG_BAD_CELLS = 0;
   jet_AntiKt6TopoEMJets_N_BAD_CELLS = 0;
   jet_AntiKt6TopoEMJets_N_BAD_CELLS_CORR = 0;
   jet_AntiKt6TopoEMJets_BAD_CELLS_CORR_E = 0;
   jet_AntiKt6TopoEMJets_NumTowers = 0;
   jet_AntiKt6TopoEMJets_SamplingMax = 0;
   jet_AntiKt6TopoEMJets_fracSamplingMax = 0;
   jet_AntiKt6TopoEMJets_hecf = 0;
   jet_AntiKt6TopoEMJets_tgap3f = 0;
   jet_AntiKt6TopoEMJets_isUgly = 0;
   jet_AntiKt6TopoEMJets_isBadLooseMinus = 0;
   jet_AntiKt6TopoEMJets_isBadLoose = 0;
   jet_AntiKt6TopoEMJets_isBadMedium = 0;
   jet_AntiKt6TopoEMJets_isBadTight = 0;
   jet_AntiKt6TopoEMJets_emfrac = 0;
   jet_AntiKt6TopoEMJets_Offset = 0;
   jet_AntiKt6TopoEMJets_EMJES = 0;
   jet_AntiKt6TopoEMJets_EMJES_EtaCorr = 0;
   jet_AntiKt6TopoEMJets_EMJESnooffset = 0;
   jet_AntiKt6TopoEMJets_GCWJES = 0;
   jet_AntiKt6TopoEMJets_GCWJES_EtaCorr = 0;
   jet_AntiKt6TopoEMJets_CB = 0;
   jet_AntiKt6TopoEMJets_LCJES = 0;
   jet_AntiKt6TopoEMJets_emscale_E = 0;
   jet_AntiKt6TopoEMJets_emscale_pt = 0;
   jet_AntiKt6TopoEMJets_emscale_m = 0;
   jet_AntiKt6TopoEMJets_emscale_eta = 0;
   jet_AntiKt6TopoEMJets_emscale_phi = 0;
   jet_AntiKt6TopoEMJets_jvtx_x = 0;
   jet_AntiKt6TopoEMJets_jvtx_y = 0;
   jet_AntiKt6TopoEMJets_jvtx_z = 0;
   jet_AntiKt6TopoEMJets_jvtxf = 0;
   jet_AntiKt6TopoEMJets_jvtxfFull = 0;
   jet_AntiKt6TopoEMJets_GSCFactorF = 0;
   jet_AntiKt6TopoEMJets_WidthFraction = 0;
   jet_AntiKt6TopoEMJets_flavor_weight_Comb = 0;
   jet_AntiKt6TopoEMJets_flavor_weight_IP2D = 0;
   jet_AntiKt6TopoEMJets_flavor_weight_IP3D = 0;
   jet_AntiKt6TopoEMJets_flavor_weight_SV0 = 0;
   jet_AntiKt6TopoEMJets_flavor_weight_SV1 = 0;
   jet_AntiKt6TopoEMJets_flavor_weight_SV2 = 0;
   jet_AntiKt6TopoEMJets_flavor_weight_JetProb = 0;
   jet_AntiKt6TopoEMJets_flavor_weight_SoftMuonTag = 0;
   jet_AntiKt6TopoEMJets_flavor_weight_JetFitterTagNN = 0;
   jet_AntiKt6TopoEMJets_flavor_weight_JetFitterCOMBNN = 0;
   jet_AntiKt6TopoEMJets_flavor_weight_GbbNN = 0;
   jet_AntiKt6TopoEMJets_flavor_truth_label = 0;
   jet_AntiKt6TopoEMJets_flavor_truth_dRminToB = 0;
   jet_AntiKt6TopoEMJets_flavor_truth_dRminToC = 0;
   jet_AntiKt6TopoEMJets_flavor_truth_dRminToT = 0;
   jet_AntiKt6TopoEMJets_flavor_truth_BHadronpdg = 0;
   jet_AntiKt6TopoEMJets_flavor_truth_vx_x = 0;
   jet_AntiKt6TopoEMJets_flavor_truth_vx_y = 0;
   jet_AntiKt6TopoEMJets_flavor_truth_vx_z = 0;
   jet_AntiKt6TopoEMJets_flavor_component_ip2d_pu = 0;
   jet_AntiKt6TopoEMJets_flavor_component_ip2d_pb = 0;
   jet_AntiKt6TopoEMJets_flavor_component_ip2d_isValid = 0;
   jet_AntiKt6TopoEMJets_flavor_component_ip2d_ntrk = 0;
   jet_AntiKt6TopoEMJets_flavor_component_ip3d_pu = 0;
   jet_AntiKt6TopoEMJets_flavor_component_ip3d_pb = 0;
   jet_AntiKt6TopoEMJets_flavor_component_ip3d_isValid = 0;
   jet_AntiKt6TopoEMJets_flavor_component_ip3d_ntrk = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv1_pu = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv1_pb = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv1_isValid = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv2_pu = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv2_pb = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv2_isValid = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_pu = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_pb = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_pc = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_isValid = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pu = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pb = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pc = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_isValid = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx1t = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_ntrkAtVx = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_efrc = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_mass = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_sig3d = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaPhi = 0;
   jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaEta = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_isValid = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkv = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkj = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_n2t = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_mass = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_efrc = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_x = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_y = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_z = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_err_x = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_err_y = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_err_z = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xy = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xz = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_cov_yz = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_chi2 = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_ndof = 0;
   jet_AntiKt6TopoEMJets_flavor_component_svp_ntrk = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_isValid = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkv = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkj = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_n2t = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_mass = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_efrc = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_x = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_y = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_z = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_x = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_y = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_z = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xy = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xz = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_yz = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_chi2 = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_ndof = 0;
   jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrk = 0;
   jet_AntiKt6TopoEMJets_el_dr = 0;
   jet_AntiKt6TopoEMJets_el_matched = 0;
   jet_AntiKt6TopoEMJets_mu_dr = 0;
   jet_AntiKt6TopoEMJets_mu_matched = 0;
   jet_AntiKt6TopoEMJets_L1_dr = 0;
   jet_AntiKt6TopoEMJets_L1_matched = 0;
   jet_AntiKt6TopoEMJets_L2_dr = 0;
   jet_AntiKt6TopoEMJets_L2_matched = 0;
   jet_AntiKt6TopoEMJets_EF_dr = 0;
   jet_AntiKt6TopoEMJets_EF_matched = 0;
   el_as_unconv_ph_cl_E = 0;
   el_as_unconv_ph_cl_pt = 0;
   el_as_unconv_ph_cl_eta = 0;
   el_as_unconv_ph_cl_phi = 0;
   el_as_unconv_ph_Es0 = 0;
   el_as_unconv_ph_etas0 = 0;
   el_as_unconv_ph_phis0 = 0;
   el_as_unconv_ph_Es1 = 0;
   el_as_unconv_ph_etas1 = 0;
   el_as_unconv_ph_phis1 = 0;
   el_as_unconv_ph_Es2 = 0;
   el_as_unconv_ph_etas2 = 0;
   el_as_unconv_ph_phis2 = 0;
   el_as_unconv_ph_Es3 = 0;
   el_as_unconv_ph_etas3 = 0;
   el_as_unconv_ph_phis3 = 0;
   el_as_unconv_ph_isEM = 0;
   el_as_unconv_ph_isEMLoose = 0;
   el_as_unconv_ph_isEMMedium = 0;
   el_as_unconv_ph_isEMTight = 0;
   el_as_unconv_ph_loose = 0;
   el_as_unconv_ph_tight = 0;
   el_as_unconv_ph_tightIso = 0;
   el_as_unconv_ph_Ethad = 0;
   el_as_unconv_ph_Ethad1 = 0;
   el_as_unconv_ph_f1 = 0;
   el_as_unconv_ph_f1core = 0;
   el_as_unconv_ph_Emins1 = 0;
   el_as_unconv_ph_fside = 0;
   el_as_unconv_ph_Emax2 = 0;
   el_as_unconv_ph_ws3 = 0;
   el_as_unconv_ph_wstot = 0;
   el_as_unconv_ph_E132 = 0;
   el_as_unconv_ph_E1152 = 0;
   el_as_unconv_ph_emaxs1 = 0;
   el_as_unconv_ph_deltaEs = 0;
   el_as_unconv_ph_E233 = 0;
   el_as_unconv_ph_E237 = 0;
   el_as_unconv_ph_E277 = 0;
   el_as_unconv_ph_weta2 = 0;
   el_as_conv_ph_cl_E = 0;
   el_as_conv_ph_cl_pt = 0;
   el_as_conv_ph_cl_eta = 0;
   el_as_conv_ph_cl_phi = 0;
   el_as_conv_ph_Es0 = 0;
   el_as_conv_ph_etas0 = 0;
   el_as_conv_ph_phis0 = 0;
   el_as_conv_ph_Es1 = 0;
   el_as_conv_ph_etas1 = 0;
   el_as_conv_ph_phis1 = 0;
   el_as_conv_ph_Es2 = 0;
   el_as_conv_ph_etas2 = 0;
   el_as_conv_ph_phis2 = 0;
   el_as_conv_ph_Es3 = 0;
   el_as_conv_ph_etas3 = 0;
   el_as_conv_ph_phis3 = 0;
   el_as_conv_ph_isEM = 0;
   el_as_conv_ph_isEMLoose = 0;
   el_as_conv_ph_isEMMedium = 0;
   el_as_conv_ph_isEMTight = 0;
   el_as_conv_ph_loose = 0;
   el_as_conv_ph_tight = 0;
   el_as_conv_ph_tightIso = 0;
   el_as_conv_ph_Ethad = 0;
   el_as_conv_ph_Ethad1 = 0;
   el_as_conv_ph_f1 = 0;
   el_as_conv_ph_f1core = 0;
   el_as_conv_ph_Emins1 = 0;
   el_as_conv_ph_fside = 0;
   el_as_conv_ph_Emax2 = 0;
   el_as_conv_ph_ws3 = 0;
   el_as_conv_ph_wstot = 0;
   el_as_conv_ph_E132 = 0;
   el_as_conv_ph_E1152 = 0;
   el_as_conv_ph_emaxs1 = 0;
   el_as_conv_ph_deltaEs = 0;
   el_as_conv_ph_E233 = 0;
   el_as_conv_ph_E237 = 0;
   el_as_conv_ph_E277 = 0;
   el_as_conv_ph_weta2 = 0;
   ph_E = 0;
   ph_Et = 0;
   ph_pt = 0;
   ph_m = 0;
   ph_eta = 0;
   ph_phi = 0;
   ph_px = 0;
   ph_py = 0;
   ph_pz = 0;
   ph_author = 0;
   ph_isRecovered = 0;
   ph_isEM = 0;
   ph_isEMLoose = 0;
   ph_isEMMedium = 0;
   ph_isEMTight = 0;
   ph_OQ = 0;
   ph_OQRecalc = 0;
   ph_convFlag = 0;
   ph_isConv = 0;
   ph_nConv = 0;
   ph_nSingleTrackConv = 0;
   ph_nDoubleTrackConv = 0;
   ph_type = 0;
   ph_origin = 0;
   ph_truth_deltaRRecPhoton = 0;
   ph_truth_E = 0;
   ph_truth_pt = 0;
   ph_truth_eta = 0;
   ph_truth_phi = 0;
   ph_truth_type = 0;
   ph_truth_status = 0;
   ph_truth_barcode = 0;
   ph_truth_mothertype = 0;
   ph_truth_motherbarcode = 0;
   ph_truth_index = 0;
   ph_truth_matched = 0;
   ph_loose = 0;
   ph_looseIso = 0;
   ph_tight = 0;
   ph_tightIso = 0;
   ph_looseAR = 0;
   ph_looseARIso = 0;
   ph_tightAR = 0;
   ph_tightARIso = 0;
   ph_goodOQ = 0;
   ph_Ethad = 0;
   ph_Ethad1 = 0;
   ph_E033 = 0;
   ph_f1 = 0;
   ph_f1core = 0;
   ph_Emins1 = 0;
   ph_fside = 0;
   ph_Emax2 = 0;
   ph_ws3 = 0;
   ph_wstot = 0;
   ph_E132 = 0;
   ph_E1152 = 0;
   ph_emaxs1 = 0;
   ph_deltaEs = 0;
   ph_E233 = 0;
   ph_E237 = 0;
   ph_E277 = 0;
   ph_weta2 = 0;
   ph_f3 = 0;
   ph_f3core = 0;
   ph_rphiallcalo = 0;
   ph_Etcone45 = 0;
   ph_Etcone15 = 0;
   ph_Etcone20 = 0;
   ph_Etcone25 = 0;
   ph_Etcone30 = 0;
   ph_Etcone35 = 0;
   ph_Etcone40 = 0;
   ph_ptcone20 = 0;
   ph_ptcone30 = 0;
   ph_ptcone40 = 0;
   ph_nucone20 = 0;
   ph_nucone30 = 0;
   ph_nucone40 = 0;
   ph_Etcone15_pt_corrected = 0;
   ph_Etcone20_pt_corrected = 0;
   ph_Etcone25_pt_corrected = 0;
   ph_Etcone30_pt_corrected = 0;
   ph_Etcone35_pt_corrected = 0;
   ph_Etcone40_pt_corrected = 0;
   ph_convanglematch = 0;
   ph_convtrackmatch = 0;
   ph_hasconv = 0;
   ph_convvtxx = 0;
   ph_convvtxy = 0;
   ph_convvtxz = 0;
   ph_Rconv = 0;
   ph_zconv = 0;
   ph_convvtxchi2 = 0;
   ph_pt1conv = 0;
   ph_convtrk1nBLHits = 0;
   ph_convtrk1nPixHits = 0;
   ph_convtrk1nSCTHits = 0;
   ph_convtrk1nTRTHits = 0;
   ph_pt2conv = 0;
   ph_convtrk2nBLHits = 0;
   ph_convtrk2nPixHits = 0;
   ph_convtrk2nSCTHits = 0;
   ph_convtrk2nTRTHits = 0;
   ph_ptconv = 0;
   ph_pzconv = 0;
   ph_reta = 0;
   ph_rphi = 0;
   ph_EtringnoisedR03sig2 = 0;
   ph_EtringnoisedR03sig3 = 0;
   ph_EtringnoisedR03sig4 = 0;
   ph_isolationlikelihoodjets = 0;
   ph_isolationlikelihoodhqelectrons = 0;
   ph_loglikelihood = 0;
   ph_photonweight = 0;
   ph_photonbgweight = 0;
   ph_neuralnet = 0;
   ph_Hmatrix = 0;
   ph_Hmatrix5 = 0;
   ph_adaboost = 0;
   ph_zvertex = 0;
   ph_errz = 0;
   ph_etap = 0;
   ph_depth = 0;
   ph_cl_E = 0;
   ph_cl_pt = 0;
   ph_cl_eta = 0;
   ph_cl_phi = 0;
   ph_Es0 = 0;
   ph_etas0 = 0;
   ph_phis0 = 0;
   ph_Es1 = 0;
   ph_etas1 = 0;
   ph_phis1 = 0;
   ph_Es2 = 0;
   ph_etas2 = 0;
   ph_phis2 = 0;
   ph_Es3 = 0;
   ph_etas3 = 0;
   ph_phis3 = 0;
   ph_time = 0;
   ph_rawcl_Es0 = 0;
   ph_rawcl_etas0 = 0;
   ph_rawcl_phis0 = 0;
   ph_rawcl_Es1 = 0;
   ph_rawcl_etas1 = 0;
   ph_rawcl_phis1 = 0;
   ph_rawcl_Es2 = 0;
   ph_rawcl_etas2 = 0;
   ph_rawcl_phis2 = 0;
   ph_rawcl_Es3 = 0;
   ph_rawcl_etas3 = 0;
   ph_rawcl_phis3 = 0;
   ph_rawcl_E = 0;
   ph_rawcl_pt = 0;
   ph_rawcl_eta = 0;
   ph_rawcl_phi = 0;
   ph_truth_isConv = 0;
   ph_truth_isBrem = 0;
   ph_truth_isFromHardProc = 0;
   ph_truth_isPhotonFromHardProc = 0;
   ph_truth_Rconv = 0;
   ph_truth_zconv = 0;
   ph_deltaEmax2 = 0;
   ph_calibHitsShowerDepth = 0;
   ph_isIso = 0;
   ph_mvaptcone20 = 0;
   ph_mvaptcone30 = 0;
   ph_mvaptcone40 = 0;
   ph_topoEtcone20 = 0;
   ph_topoEtcone40 = 0;
   ph_topoEtcone60 = 0;
   ph_jet_dr = 0;
   ph_jet_E = 0;
   ph_jet_pt = 0;
   ph_jet_m = 0;
   ph_jet_eta = 0;
   ph_jet_phi = 0;
   ph_jet_truth_dr = 0;
   ph_jet_truth_E = 0;
   ph_jet_truth_pt = 0;
   ph_jet_truth_m = 0;
   ph_jet_truth_eta = 0;
   ph_jet_truth_phi = 0;
   ph_jet_truth_matched = 0;
   ph_jet_matched = 0;
   ph_convIP = 0;
   ph_convIPRev = 0;
   ph_ptIsolationCone = 0;
   ph_ptIsolationConePhAngle = 0;
   ph_Etcone40_ED_corrected = 0;
   ph_Etcone40_corrected = 0;
   ph_ES0_real = 0;
   ph_ES1_real = 0;
   ph_ES2_real = 0;
   ph_ES3_real = 0;
   ph_EcellS0 = 0;
   ph_etacellS0 = 0;
   ph_HPV_eta = 0;
   ph_HPV_sigma_eta = 0;
   ph_HPV_convTrk1_zvertex = 0;
   ph_HPV_convTrk2_zvertex = 0;
   ph_HPV_convTrk1_sigma_zvertex = 0;
   ph_HPV_convTrk2_sigma_zvertex = 0;
   ph_CaloPointing_zvertex = 0;
   ph_CaloPointing_sigma_zvertex = 0;
   ph_CaloPointing_eta = 0;
   ph_CaloPointing_sigma_eta = 0;
   ph_HPV_zvertex = 0;
   ph_HPV_sigma_zvertex = 0;
   ph_HPV_zvertex_neutral = 0;
   ph_HPV_zvertex_charged = 0;
   ph_HPV_sigma_zvertex_neutral = 0;
   ph_HPV_sigma_zvertex_charged = 0;
   ph_ambiguityResult = 0;
   ph_itune1 = 0;
   ph_itune2 = 0;
   ph_itune3 = 0;
   ph_trackIsol = 0;
   ph_PtIsolationCone_woIC = 0;
   ph_PtIsolationConePhAngle_woIC = 0;
   ph_trackIsol_woIC = 0;
   ph_selected = 0;
   ph_parton_pt_max_MC = 0;
   ph_parton_eta_MC = 0;
   ph_parton_phi_MC = 0;
   ph_parton_barcode_MC = 0;
   ph_parton_pdg_MC = 0;
   ph_etaS2_MC = 0;
   ph_phiS2_MC = 0;
   ph_XConv_MC = 0;
   ph_YConv_MC = 0;
   ph_isG4part = 0;
   ph_partonIsolation15_UE_MC = 0;
   ph_partonIsolation20_UE_MC = 0;
   ph_partonIsolation25_UE_MC = 0;
   ph_partonIsolation30_UE_MC = 0;
   ph_partonIsolation35_UE_MC = 0;
   ph_partonIsolation40_UE_MC = 0;
   ph_partonIsolation45_UE_MC = 0;
   ph_partonIsolation60_UE_MC = 0;
   ph_partonIsolation15_MC = 0;
   ph_partonIsolation20_MC = 0;
   ph_partonIsolation25_MC = 0;
   ph_partonIsolation30_MC = 0;
   ph_partonIsolation35_MC = 0;
   ph_partonIsolation40_MC = 0;
   ph_partonIsolation45_MC = 0;
   ph_partonIsolation60_MC = 0;
   ph_particleIsolation40_MC = 0;
   ph_particleIsolation40_ED_corrected_MC = 0;
   ph_particleIsolation40_ED_corrected_reco_MC = 0;
   ph_isGoodOQbits = 0;
   ph_isGoodOQphoton = 0;
   ph_isGoodOQelectron = 0;
   ph_convTrk1_chi2 = 0;
   ph_convTrk2_chi2 = 0;
   ph_convTrk1_expectHitInBLayer = 0;
   ph_convTrk1_numTRTOutliers = 0;
   ph_convTrk1_numTRTHTHits = 0;
   ph_convTrk1_numTRTHTOutliers = 0;
   ph_convTrk2_expectHitInBLayer = 0;
   ph_convTrk2_numTRTOutliers = 0;
   ph_convTrk2_numTRTHTHits = 0;
   ph_convTrk2_numTRTHTOutliers = 0;
   ph_convTrk1_trtPID = 0;
   ph_convTrk2_trtPID = 0;
   ph_convTrk1_trtPIDHT = 0;
   ph_convTrk2_trtPIDHT = 0;
   ph_convTrk1_trtPIDToT = 0;
   ph_convTrk2_trtPIDToT = 0;
   ph_convTrk1_ToTvar = 0;
   ph_convTrk2_ToTvar = 0;
   ph_convTrk1_trtRatioHT = 0;
   ph_convTrk2_trtRatioHT = 0;
   ph_convTrk1_charge = 0;
   ph_convTrk2_charge = 0;
   ph_convTrk1_DeltaEta_track_calo = 0;
   ph_convTrk2_DeltaEta_track_calo = 0;
   ph_convTrk1_DeltaPhi_track_calo = 0;
   ph_convTrk2_DeltaPhi_track_calo = 0;
   ph_XConv = 0;
   ph_YConv = 0;
   ph_conv_chi2 = 0;
   ph_conv_dcottheta = 0;
   ph_conv_dphi = 0;
   ph_conv_dist = 0;
   ph_conv_DR1R2 = 0;
   ph_conv_p = 0;
   ph_conv_phi = 0;
   ph_conv_theta = 0;
   ph_conv_perr = 0;
   ph_conv_phierr = 0;
   ph_conv_thetaerr = 0;
   ph_conv_GSF_p = 0;
   ph_conv_GSF_phi = 0;
   ph_conv_GSF_theta = 0;
   ph_conv_GSF_perr = 0;
   ph_conv_GSF_phierr = 0;
   ph_conv_GSF_thetaerr = 0;
   ph_conv_DNA_p = 0;
   ph_conv_DNA_phi = 0;
   ph_conv_DNA_theta = 0;
   ph_conv_DNA_perr = 0;
   ph_conv_DNA_phierr = 0;
   ph_conv_DNA_thetaerr = 0;
   ph_Etcone10_ED_corrected = 0;
   ph_Etcone15_ED_corrected = 0;
   ph_Etcone20_ED_corrected = 0;
   ph_Etcone25_ED_corrected = 0;
   ph_Etcone30_ED_corrected = 0;
   ph_Etcone35_ED_corrected = 0;
   ph_Etcone10_corrected = 0;
   ph_Etcone15_corrected = 0;
   ph_Etcone20_corrected = 0;
   ph_Etcone25_corrected = 0;
   ph_Etcone30_corrected = 0;
   ph_Etcone35_corrected = 0;
   ph_Etcone10_ED_corrected_new = 0;
   ph_Etcone15_ED_corrected_new = 0;
   ph_Etcone20_ED_corrected_new = 0;
   ph_Etcone25_ED_corrected_new = 0;
   ph_Etcone30_ED_corrected_new = 0;
   ph_Etcone35_ED_corrected_new = 0;
   ph_Etcone40_ED_corrected_new = 0;
   ph_Etcone10_corrected_new = 0;
   ph_Etcone15_corrected_new = 0;
   ph_Etcone20_corrected_new = 0;
   ph_Etcone25_corrected_new = 0;
   ph_Etcone30_corrected_new = 0;
   ph_Etcone35_corrected_new = 0;
   ph_Etcone40_corrected_new = 0;
   ph_cells35_Etcone20 = 0;
   ph_cells35_Etcone30 = 0;
   ph_cells35_Etcone40 = 0;
   ph_cells55_Etcone20 = 0;
   ph_cells55_Etcone30 = 0;
   ph_cells55_Etcone40 = 0;
   ph_Etcone20Iso = 0;
   ph_Etcone30Iso = 0;
   ph_Etcone40Iso = 0;
   ph_cells35_Etcone20Iso = 0;
   ph_cells35_Etcone30Iso = 0;
   ph_cells35_Etcone40Iso = 0;
   ph_cells55_Etcone20Iso = 0;
   ph_cells55_Etcone30Iso = 0;
   ph_cells55_Etcone40Iso = 0;
   ph_ED_median = 0;
   ph_ED_sigma = 0;
   ph_ED_Njets = 0;
   ph_ED_median_new = 0;
   ph_ED_sigma_new = 0;
   ph_ED_Njets_new = 0;
   ph_transmin_etcone40 = 0;
   ph_transmax_etcone40 = 0;
   ph_transmin_etcone100 = 0;
   ph_transmax_etcone100 = 0;
   ph_transmin = 0;
   ph_transmax = 0;
   ph_transmin_loweta = 0;
   ph_transmax_loweta = 0;
   ph_topodr = 0;
   ph_topopt = 0;
   ph_topoeta = 0;
   ph_topophi = 0;
   ph_topoEMsamplings_E = 0;
   ph_topoEMsamplings_Et = 0;
   ph_topoEMsamplings_eta = 0;
   ph_topoEMsamplings_phi = 0;
   ph_topoEMsamplings_uncalibrated_E = 0;
   ph_topoEMsamplings_uncalibrated_Et = 0;
   ph_topoEMsamplings_uncalibrated_eta = 0;
   ph_topoEMsamplings_uncalibrated_phi = 0;
   ph_topomatched = 0;
   ph_topoEMdr = 0;
   ph_topoEMpt = 0;
   ph_topoEMeta = 0;
   ph_topoEMphi = 0;
   ph_topoEMmatched = 0;
   ph_EF_dr = 0;
   ph_EF_index = 0;
   ph_L2_dr = 0;
   ph_L2_index = 0;
   ph_L1_dr = 0;
   ph_L1_index = 0;
   ph_jet_AntiKt4TopoEMJets_dr = 0;
   ph_jet_AntiKt4TopoEMJets_index = 0;
   ph_jet_AntiKt4TopoEMJets_matched = 0;
   ph_jet_AntiKt6TopoEMJets_dr = 0;
   ph_jet_AntiKt6TopoEMJets_index = 0;
   ph_jet_AntiKt6TopoEMJets_matched = 0;
   ph_el_index = 0;
   ph_etconoisedR04Sig2 = 0;
   ph_etconoisedR04Sig3 = 0;
   ph_topoEtcone30 = 0;
   ph_topoEtcone50 = 0;
   ph_topoEMEtcone20 = 0;
   ph_topoEMEtcone30 = 0;
   ph_topoEMEtcone40 = 0;
   ph_topoEMEtcone50 = 0;
   ph_topoEMEtcone60 = 0;
   ph_convTrk_n = 0;
   ph_convTrk_index = 0;
   ph_convTrk_fitter = 0;
   ph_convTrk_patternReco1 = 0;
   ph_convTrk_patternReco2 = 0;
   ph_convTrk_seedFinder = 0;
   ph_vx_n = 0;
   ph_vx_convTrk_weight = 0;
   ph_vx_convTrk_n = 0;
   ph_vx_convTrk_index = 0;
   ph_vx_convTrk_fitter = 0;
   ph_vx_convTrk_patternReco1 = 0;
   ph_vx_convTrk_patternReco2 = 0;
   ph_vx_convTrk_seedFinder = 0;
   ph_topoPosEtcone20 = 0;
   ph_topoPosEtcone30 = 0;
   ph_topoPosEtcone40 = 0;
   ph_topoPosEtcone50 = 0;
   ph_topoPosEtcone60 = 0;
   ph_topoEMPosEtcone20 = 0;
   ph_topoEMPosEtcone30 = 0;
   ph_topoEMPosEtcone40 = 0;
   ph_topoEMPosEtcone50 = 0;
   ph_topoEMPosEtcone60 = 0;
   ph_topoEtcone20_TileGap3 = 0;
   ph_topoEtcone30_TileGap3 = 0;
   ph_topoEtcone40_TileGap3 = 0;
   ph_topoEtcone50_TileGap3 = 0;
   ph_topoEtcone60_TileGap3 = 0;
   ph_topoPosEtcone20_TileGap3 = 0;
   ph_topoPosEtcone30_TileGap3 = 0;
   ph_topoPosEtcone40_TileGap3 = 0;
   ph_topoPosEtcone50_TileGap3 = 0;
   ph_topoPosEtcone60_TileGap3 = 0;
   ph_Eraw57 = 0;
   ph_etaraw57 = 0;
   ph_NN_passes = 0;
   ph_NN_discriminant = 0;
   el_E = 0;
   el_Et = 0;
   el_pt = 0;
   el_m = 0;
   el_eta = 0;
   el_phi = 0;
   el_px = 0;
   el_py = 0;
   el_pz = 0;
   el_charge = 0;
   el_author = 0;
   el_isEM = 0;
   el_isEMLoose = 0;
   el_isEMMedium = 0;
   el_isEMTight = 0;
   el_OQ = 0;
   el_convFlag = 0;
   el_isConv = 0;
   el_nConv = 0;
   el_nSingleTrackConv = 0;
   el_nDoubleTrackConv = 0;
   el_OQRecalc = 0;
   el_type = 0;
   el_origin = 0;
   el_typebkg = 0;
   el_originbkg = 0;
   el_truth_E = 0;
   el_truth_pt = 0;
   el_truth_eta = 0;
   el_truth_phi = 0;
   el_truth_type = 0;
   el_truth_status = 0;
   el_truth_barcode = 0;
   el_truth_mothertype = 0;
   el_truth_motherbarcode = 0;
   el_truth_hasHardBrem = 0;
   el_truth_index = 0;
   el_truth_matched = 0;
   el_mediumWithoutTrack = 0;
   el_mediumIsoWithoutTrack = 0;
   el_tightWithoutTrack = 0;
   el_tightIsoWithoutTrack = 0;
   el_loose = 0;
   el_looseIso = 0;
   el_medium = 0;
   el_mediumIso = 0;
   el_tight = 0;
   el_tightIso = 0;
   el_loosePP = 0;
   el_loosePPIso = 0;
   el_mediumPP = 0;
   el_mediumPPIso = 0;
   el_tightPP = 0;
   el_tightPPIso = 0;
   el_goodOQ = 0;
   el_Ethad = 0;
   el_Ethad1 = 0;
   el_f1 = 0;
   el_f1core = 0;
   el_Emins1 = 0;
   el_fside = 0;
   el_Emax2 = 0;
   el_ws3 = 0;
   el_wstot = 0;
   el_emaxs1 = 0;
   el_deltaEs = 0;
   el_E233 = 0;
   el_E237 = 0;
   el_E277 = 0;
   el_weta2 = 0;
   el_f3 = 0;
   el_f3core = 0;
   el_rphiallcalo = 0;
   el_Etcone45 = 0;
   el_Etcone15 = 0;
   el_Etcone20 = 0;
   el_Etcone25 = 0;
   el_Etcone30 = 0;
   el_Etcone35 = 0;
   el_Etcone40 = 0;
   el_ptcone20 = 0;
   el_ptcone30 = 0;
   el_ptcone40 = 0;
   el_nucone20 = 0;
   el_nucone30 = 0;
   el_nucone40 = 0;
   el_convanglematch = 0;
   el_convtrackmatch = 0;
   el_hasconv = 0;
   el_convvtxx = 0;
   el_convvtxy = 0;
   el_convvtxz = 0;
   el_Rconv = 0;
   el_zconv = 0;
   el_convvtxchi2 = 0;
   el_pt1conv = 0;
   el_convtrk1nBLHits = 0;
   el_convtrk1nPixHits = 0;
   el_convtrk1nSCTHits = 0;
   el_convtrk1nTRTHits = 0;
   el_pt2conv = 0;
   el_convtrk2nBLHits = 0;
   el_convtrk2nPixHits = 0;
   el_convtrk2nSCTHits = 0;
   el_convtrk2nTRTHits = 0;
   el_ptconv = 0;
   el_pzconv = 0;
   el_pos7 = 0;
   el_etacorrmag = 0;
   el_deltaeta1 = 0;
   el_deltaeta2 = 0;
   el_deltaphi2 = 0;
   el_deltaphiRescaled = 0;
   el_deltaPhiRot = 0;
   el_expectHitInBLayer = 0;
   el_trackd0_physics = 0;
   el_etaSampling1 = 0;
   el_reta = 0;
   el_rphi = 0;
   el_refittedTrack_n = 0;
   el_firstEdens = 0;
   el_cellmaxfrac = 0;
   el_longitudinal = 0;
   el_secondlambda = 0;
   el_lateral = 0;
   el_secondR = 0;
   el_centerlambda = 0;
   el_Es0 = 0;
   el_etas0 = 0;
   el_phis0 = 0;
   el_Es1 = 0;
   el_etas1 = 0;
   el_phis1 = 0;
   el_Es2 = 0;
   el_etas2 = 0;
   el_phis2 = 0;
   el_Es3 = 0;
   el_etas3 = 0;
   el_phis3 = 0;
   el_E_PreSamplerB = 0;
   el_E_EMB1 = 0;
   el_E_EMB2 = 0;
   el_E_EMB3 = 0;
   el_E_PreSamplerE = 0;
   el_E_EME1 = 0;
   el_E_EME2 = 0;
   el_E_EME3 = 0;
   el_E_HEC0 = 0;
   el_E_HEC1 = 0;
   el_E_HEC2 = 0;
   el_E_HEC3 = 0;
   el_E_TileBar0 = 0;
   el_E_TileBar1 = 0;
   el_E_TileBar2 = 0;
   el_E_TileGap1 = 0;
   el_E_TileGap2 = 0;
   el_E_TileGap3 = 0;
   el_E_TileExt0 = 0;
   el_E_TileExt1 = 0;
   el_E_TileExt2 = 0;
   el_E_FCAL0 = 0;
   el_E_FCAL1 = 0;
   el_E_FCAL2 = 0;
   el_cl_E = 0;
   el_cl_pt = 0;
   el_cl_eta = 0;
   el_cl_phi = 0;
   el_time = 0;
   el_trackd0 = 0;
   el_trackz0 = 0;
   el_trackphi = 0;
   el_tracktheta = 0;
   el_trackqoverp = 0;
   el_trackpt = 0;
   el_tracketa = 0;
   el_nBLHits = 0;
   el_nPixHits = 0;
   el_nSCTHits = 0;
   el_nTRTHits = 0;
   el_nTRTHighTHits = 0;
   el_nPixHoles = 0;
   el_nSCTHoles = 0;
   el_nTRTHoles = 0;
   el_nBLSharedHits = 0;
   el_nPixSharedHits = 0;
   el_nSCTSharedHits = 0;
   el_nBLayerOutliers = 0;
   el_nPixelOutliers = 0;
   el_nSCTOutliers = 0;
   el_nTRTOutliers = 0;
   el_nTRTHighTOutliers = 0;
   el_expectBLayerHit = 0;
   el_nSiHits = 0;
   el_TRTHighTHitsRatio = 0;
   el_TRTHighTOutliersRatio = 0;
   el_pixeldEdx = 0;
   el_nGoodHitsPixeldEdx = 0;
   el_massPixeldEdx = 0;
   el_likelihoodsPixeldEdx = 0;
   el_eProbabilityComb = 0;
   el_eProbabilityHT = 0;
   el_eProbabilityToT = 0;
   el_eProbabilityBrem = 0;
   el_vertweight = 0;
   el_trackd0beam = 0;
   el_trackz0beam = 0;
   el_tracksigd0beam = 0;
   el_tracksigz0beam = 0;
   el_trackd0pv = 0;
   el_trackz0pv = 0;
   el_tracksigd0pv = 0;
   el_tracksigz0pv = 0;
   el_trackIPEstimate_d0_biasedpvunbiased = 0;
   el_trackIPEstimate_z0_biasedpvunbiased = 0;
   el_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   el_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   el_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   el_trackd0pvunbiased = 0;
   el_trackz0pvunbiased = 0;
   el_tracksigd0pvunbiased = 0;
   el_tracksigz0pvunbiased = 0;
   el_hastrack = 0;
   el_deltaEmax2 = 0;
   el_calibHitsShowerDepth = 0;
   el_isIso = 0;
   el_mvaptcone20 = 0;
   el_mvaptcone30 = 0;
   el_mvaptcone40 = 0;
   el_EF_dr = 0;
   el_EF_index = 0;
   el_L2_dr = 0;
   el_L2_index = 0;
   el_L1_dr = 0;
   el_L1_index = 0;
   el_jet_AntiKt4TopoEMJets_dr = 0;
   el_jet_AntiKt4TopoEMJets_index = 0;
   el_jet_AntiKt4TopoEMJets_matched = 0;
   el_jet_AntiKt6TopoEMJets_dr = 0;
   el_jet_AntiKt6TopoEMJets_index = 0;
   el_jet_AntiKt6TopoEMJets_matched = 0;
   el_EtringnoisedR03sig2 = 0;
   el_EtringnoisedR03sig3 = 0;
   el_EtringnoisedR03sig4 = 0;
   el_zvertex = 0;
   el_errz = 0;
   el_etap = 0;
   el_depth = 0;
   el_Etcone15_pt_corrected = 0;
   el_Etcone20_pt_corrected = 0;
   el_Etcone25_pt_corrected = 0;
   el_Etcone30_pt_corrected = 0;
   el_Etcone35_pt_corrected = 0;
   el_Etcone40_pt_corrected = 0;
   el_ES0_real = 0;
   el_ES1_real = 0;
   el_ES2_real = 0;
   el_ES3_real = 0;
   el_EcellS0 = 0;
   el_etacellS0 = 0;
   el_CaloPointing_zvertex = 0;
   el_CaloPointing_sigma_zvertex = 0;
   el_CaloPointing_eta = 0;
   el_CaloPointing_sigma_eta = 0;
   el_ambiguityResult = 0;
   el_itune1 = 0;
   el_itune2 = 0;
   el_itune3 = 0;
   el_trackIsol = 0;
   el_PtIsolationCone_woIC = 0;
   el_trackIsol_woIC = 0;
   el_isGoodOQbits = 0;
   el_isGoodOQphoton = 0;
   el_isGoodOQelectron = 0;
   el_Etcone20_ED_corrected = 0;
   el_Etcone30_ED_corrected = 0;
   el_Etcone40_ED_corrected = 0;
   el_Etcone20_corrected = 0;
   el_Etcone30_corrected = 0;
   el_Etcone40_corrected = 0;
   el_Etcone20_ED_corrected_new = 0;
   el_Etcone30_ED_corrected_new = 0;
   el_Etcone40_ED_corrected_new = 0;
   el_Etcone20_corrected_new = 0;
   el_Etcone30_corrected_new = 0;
   el_Etcone40_corrected_new = 0;
   el_ED_median = 0;
   el_ED_sigma = 0;
   el_ED_Njets = 0;
   el_ED_median_new = 0;
   el_ED_sigma_new = 0;
   el_ED_Njets_new = 0;
   el_transmin_etcone40 = 0;
   el_transmax_etcone40 = 0;
   el_transmin_etcone100 = 0;
   el_transmax_etcone100 = 0;
   el_transmin = 0;
   el_transmax = 0;
   el_transmin_loweta = 0;
   el_transmax_loweta = 0;
   el_etconoisedR04Sig2 = 0;
   el_etconoisedR04Sig3 = 0;
   el_topoPosEtcone20 = 0;
   el_topoPosEtcone30 = 0;
   el_topoPosEtcone40 = 0;
   el_topoPosEtcone50 = 0;
   el_topoPosEtcone60 = 0;
   el_topoEMPosEtcone20 = 0;
   el_topoEMPosEtcone30 = 0;
   el_topoEMPosEtcone40 = 0;
   el_topoEMPosEtcone50 = 0;
   el_topoEMPosEtcone60 = 0;
   el_topoEtcone20_TileGap3 = 0;
   el_topoEtcone30_TileGap3 = 0;
   el_topoEtcone40_TileGap3 = 0;
   el_topoEtcone50_TileGap3 = 0;
   el_topoEtcone60_TileGap3 = 0;
   el_topoPosEtcone20_TileGap3 = 0;
   el_topoPosEtcone30_TileGap3 = 0;
   el_topoPosEtcone40_TileGap3 = 0;
   el_topoPosEtcone50_TileGap3 = 0;
   el_topoPosEtcone60_TileGap3 = 0;
   el_Eraw57 = 0;
   el_etaraw57 = 0;
   el_topodr = 0;
   el_topopt = 0;
   el_topoeta = 0;
   el_topophi = 0;
   el_topoEMsamplings_E = 0;
   el_topoEMsamplings_Et = 0;
   el_topoEMsamplings_eta = 0;
   el_topoEMsamplings_phi = 0;
   el_topoEMsamplings_uncalibrated_E = 0;
   el_topoEMsamplings_uncalibrated_Et = 0;
   el_topoEMsamplings_uncalibrated_eta = 0;
   el_topoEMsamplings_uncalibrated_phi = 0;
   el_topomatched = 0;
   el_topoEtcone20 = 0;
   el_topoEtcone30 = 0;
   el_topoEtcone40 = 0;
   el_topoEtcone50 = 0;
   el_topoEtcone60 = 0;
   el_topoEMEtcone20 = 0;
   el_topoEMEtcone30 = 0;
   el_topoEMEtcone40 = 0;
   el_topoEMEtcone50 = 0;
   el_topoEMEtcone60 = 0;
   el_trk_index = 0;
   trig_L1_TAV = 0;
   trig_L2_passedPhysics = 0;
   trig_EF_passedPhysics = 0;
   trig_L1_TBP = 0;
   trig_L1_TAP = 0;
   trig_L2_passedRaw = 0;
   trig_EF_passedRaw = 0;
   trig_L2_resurrected = 0;
   trig_EF_resurrected = 0;
   trig_L2_passedThrough = 0;
   trig_EF_passedThrough = 0;
   trig_L2_wasPrescaled = 0;
   trig_L2_wasResurrected = 0;
   trig_EF_wasPrescaled = 0;
   trig_EF_wasResurrected = 0;
   trig_L1_emtau_eta = 0;
   trig_L1_emtau_phi = 0;
   trig_L1_emtau_thrNames = 0;
   trig_L1_emtau_thrValues = 0;
   trig_L1_emtau_core = 0;
   trig_L1_emtau_EMClus = 0;
   trig_L1_emtau_tauClus = 0;
   trig_L1_emtau_EMIsol = 0;
   trig_L1_emtau_hadIsol = 0;
   trig_L1_emtau_hadCore = 0;
   trig_L1_emtau_thrPattern = 0;
   trig_L1_emtau_L1_2EM10 = 0;
   trig_L1_emtau_L1_2EM14 = 0;
   trig_L1_emtau_L1_2EM3 = 0;
   trig_L1_emtau_L1_2EM3_EM10 = 0;
   trig_L1_emtau_L1_2EM3_EM12 = 0;
   trig_L1_emtau_L1_2EM3_EM7 = 0;
   trig_L1_emtau_L1_2EM5 = 0;
   trig_L1_emtau_L1_2EM5_EM10 = 0;
   trig_L1_emtau_L1_2EM5_EM12 = 0;
   trig_L1_emtau_L1_2EM5_MU6 = 0;
   trig_L1_emtau_L1_2EM5_NL = 0;
   trig_L1_emtau_L1_2EM7 = 0;
   trig_L1_emtau_L1_2EM7_EM10 = 0;
   trig_L1_emtau_L1_EM10 = 0;
   trig_L1_emtau_L1_EM10_MU6 = 0;
   trig_L1_emtau_L1_EM10_XE20 = 0;
   trig_L1_emtau_L1_EM10_XE30 = 0;
   trig_L1_emtau_L1_EM10_XS45 = 0;
   trig_L1_emtau_L1_EM10_XS50 = 0;
   trig_L1_emtau_L1_EM12 = 0;
   trig_L1_emtau_L1_EM14 = 0;
   trig_L1_emtau_L1_EM14_XE10 = 0;
   trig_L1_emtau_L1_EM14_XE20 = 0;
   trig_L1_emtau_L1_EM16 = 0;
   trig_L1_emtau_L1_EM3 = 0;
   trig_L1_emtau_L1_EM30 = 0;
   trig_L1_emtau_L1_EM3_EMPTY = 0;
   trig_L1_emtau_L1_EM3_FIRSTEMPTY = 0;
   trig_L1_emtau_L1_EM3_MU0 = 0;
   trig_L1_emtau_L1_EM3_MU6 = 0;
   trig_L1_emtau_L1_EM3_UNPAIRED_ISO = 0;
   trig_L1_emtau_L1_EM3_UNPAIRED_NONISO = 0;
   trig_L1_emtau_L1_EM5 = 0;
   trig_L1_emtau_L1_EM5_2MU6 = 0;
   trig_L1_emtau_L1_EM5_EMPTY = 0;
   trig_L1_emtau_L1_EM5_MU10 = 0;
   trig_L1_emtau_L1_EM5_MU6 = 0;
   trig_L1_emtau_L1_EM7 = 0;
   trig_L2_emcl_quality = 0;
   trig_L2_emcl_E = 0;
   trig_L2_emcl_Et = 0;
   trig_L2_emcl_eta = 0;
   trig_L2_emcl_phi = 0;
   trig_L2_emcl_E237 = 0;
   trig_L2_emcl_E277 = 0;
   trig_L2_emcl_fracs1 = 0;
   trig_L2_emcl_weta2 = 0;
   trig_L2_emcl_Ehad1 = 0;
   trig_L2_emcl_eta1 = 0;
   trig_L2_emcl_emaxs1 = 0;
   trig_L2_emcl_e2tsts1 = 0;
   trig_L2_trk_idscan_eGamma_algorithmId = 0;
   trig_L2_trk_idscan_eGamma_trackStatus = 0;
   trig_L2_trk_idscan_eGamma_chi2Ndof = 0;
   trig_L2_trk_idscan_eGamma_nStrawHits = 0;
   trig_L2_trk_idscan_eGamma_nHighThrHits = 0;
   trig_L2_trk_idscan_eGamma_nPixelSpacePoints = 0;
   trig_L2_trk_idscan_eGamma_nSCT_SpacePoints = 0;
   trig_L2_trk_idscan_eGamma_param_a0 = 0;
   trig_L2_trk_idscan_eGamma_param_z0 = 0;
   trig_L2_trk_idscan_eGamma_param_phi0 = 0;
   trig_L2_trk_idscan_eGamma_param_eta = 0;
   trig_L2_trk_idscan_eGamma_param_pt = 0;
   trig_L2_trk_sitrack_eGamma_algorithmId = 0;
   trig_L2_trk_sitrack_eGamma_trackStatus = 0;
   trig_L2_trk_sitrack_eGamma_chi2Ndof = 0;
   trig_L2_trk_sitrack_eGamma_nStrawHits = 0;
   trig_L2_trk_sitrack_eGamma_nHighThrHits = 0;
   trig_L2_trk_sitrack_eGamma_nPixelSpacePoints = 0;
   trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints = 0;
   trig_L2_trk_sitrack_eGamma_param_a0 = 0;
   trig_L2_trk_sitrack_eGamma_param_z0 = 0;
   trig_L2_trk_sitrack_eGamma_param_phi0 = 0;
   trig_L2_trk_sitrack_eGamma_param_eta = 0;
   trig_L2_trk_sitrack_eGamma_param_pt = 0;
   trig_L2_el_E = 0;
   trig_L2_el_Et = 0;
   trig_L2_el_pt = 0;
   trig_L2_el_eta = 0;
   trig_L2_el_phi = 0;
   trig_L2_el_RoIWord = 0;
   trig_L2_el_zvertex = 0;
   trig_L2_el_charge = 0;
   trig_L2_el_trackAlgo = 0;
   trig_L2_el_TRTHighTHitsRatio = 0;
   trig_L2_el_deltaeta1 = 0;
   trig_L2_el_deltaphi2 = 0;
   trig_L2_el_EtOverPt = 0;
   trig_L2_el_reta = 0;
   trig_L2_el_Eratio = 0;
   trig_L2_el_Ethad1 = 0;
   trig_L2_el_nTRTHits = 0;
   trig_L2_el_nTRTHighTHits = 0;
   trig_L2_el_trackIndx = 0;
   trig_L2_el_trkPt = 0;
   trig_L2_el_trkEtaAtCalo = 0;
   trig_L2_el_trkPhiAtCalo = 0;
   trig_L2_el_caloEta = 0;
   trig_L2_el_caloPhi = 0;
   trig_L2_el_F1 = 0;
   trig_L2_ph_E = 0;
   trig_L2_ph_Et = 0;
   trig_L2_ph_pt = 0;
   trig_L2_ph_eta = 0;
   trig_L2_ph_phi = 0;
   trig_L2_ph_RoIWord = 0;
   trig_L2_ph_HadEt1 = 0;
   trig_L2_ph_Eratio = 0;
   trig_L2_ph_Reta = 0;
   trig_L2_ph_dPhi = 0;
   trig_L2_ph_dEta = 0;
   trig_L2_ph_F1 = 0;
   trig_EF_emcl_pt = 0;
   trig_EF_emcl_eta = 0;
   trig_EF_emcl_phi = 0;
   trig_EF_emcl_E_em = 0;
   trig_EF_emcl_E_had = 0;
   trig_EF_emcl_firstEdens = 0;
   trig_EF_emcl_cellmaxfrac = 0;
   trig_EF_emcl_longitudinal = 0;
   trig_EF_emcl_secondlambda = 0;
   trig_EF_emcl_lateral = 0;
   trig_EF_emcl_secondR = 0;
   trig_EF_emcl_centerlambda = 0;
   trig_EF_emcl_deltaTheta = 0;
   trig_EF_emcl_deltaPhi = 0;
   trig_EF_emcl_centermag = 0;
   trig_EF_emcl_time = 0;
   trig_EF_emcl_slw_pt = 0;
   trig_EF_emcl_slw_eta = 0;
   trig_EF_emcl_slw_phi = 0;
   trig_EF_emcl_slw_E_em = 0;
   trig_EF_emcl_slw_E_had = 0;
   trig_EF_emcl_slw_firstEdens = 0;
   trig_EF_emcl_slw_cellmaxfrac = 0;
   trig_EF_emcl_slw_longitudinal = 0;
   trig_EF_emcl_slw_secondlambda = 0;
   trig_EF_emcl_slw_lateral = 0;
   trig_EF_emcl_slw_secondR = 0;
   trig_EF_emcl_slw_centerlambda = 0;
   trig_EF_emcl_slw_deltaTheta = 0;
   trig_EF_emcl_slw_deltaPhi = 0;
   trig_EF_emcl_slw_centermag = 0;
   trig_EF_emcl_slw_time = 0;
   trig_EF_el_E = 0;
   trig_EF_el_Et = 0;
   trig_EF_el_pt = 0;
   trig_EF_el_m = 0;
   trig_EF_el_eta = 0;
   trig_EF_el_phi = 0;
   trig_EF_el_px = 0;
   trig_EF_el_py = 0;
   trig_EF_el_pz = 0;
   trig_EF_el_charge = 0;
   trig_EF_el_author = 0;
   trig_EF_el_isEM = 0;
   trig_EF_el_isEMLoose = 0;
   trig_EF_el_isEMMedium = 0;
   trig_EF_el_isEMTight = 0;
   trig_EF_el_loose = 0;
   trig_EF_el_looseIso = 0;
   trig_EF_el_medium = 0;
   trig_EF_el_mediumIso = 0;
   trig_EF_el_mediumWithoutTrack = 0;
   trig_EF_el_mediumIsoWithoutTrack = 0;
   trig_EF_el_tight = 0;
   trig_EF_el_tightIso = 0;
   trig_EF_el_tightWithoutTrack = 0;
   trig_EF_el_tightIsoWithoutTrack = 0;
   trig_EF_el_loosePP = 0;
   trig_EF_el_loosePPIso = 0;
   trig_EF_el_mediumPP = 0;
   trig_EF_el_mediumPPIso = 0;
   trig_EF_el_tightPP = 0;
   trig_EF_el_tightPPIso = 0;
   trig_EF_el_Ethad = 0;
   trig_EF_el_Ethad1 = 0;
   trig_EF_el_f1 = 0;
   trig_EF_el_f1core = 0;
   trig_EF_el_Emins1 = 0;
   trig_EF_el_fside = 0;
   trig_EF_el_Emax2 = 0;
   trig_EF_el_ws3 = 0;
   trig_EF_el_wstot = 0;
   trig_EF_el_emaxs1 = 0;
   trig_EF_el_deltaEs = 0;
   trig_EF_el_E233 = 0;
   trig_EF_el_E237 = 0;
   trig_EF_el_E277 = 0;
   trig_EF_el_weta2 = 0;
   trig_EF_el_f3 = 0;
   trig_EF_el_f3core = 0;
   trig_EF_el_rphiallcalo = 0;
   trig_EF_el_Etcone45 = 0;
   trig_EF_el_Etcone15 = 0;
   trig_EF_el_Etcone20 = 0;
   trig_EF_el_Etcone25 = 0;
   trig_EF_el_Etcone30 = 0;
   trig_EF_el_Etcone35 = 0;
   trig_EF_el_Etcone40 = 0;
   trig_EF_el_ptcone20 = 0;
   trig_EF_el_ptcone30 = 0;
   trig_EF_el_ptcone40 = 0;
   trig_EF_el_pos7 = 0;
   trig_EF_el_etacorrmag = 0;
   trig_EF_el_deltaeta1 = 0;
   trig_EF_el_deltaeta2 = 0;
   trig_EF_el_deltaphi2 = 0;
   trig_EF_el_expectHitInBLayer = 0;
   trig_EF_el_trackd0_physics = 0;
   trig_EF_el_reta = 0;
   trig_EF_el_rphi = 0;
   trig_EF_el_cl_E = 0;
   trig_EF_el_cl_pt = 0;
   trig_EF_el_cl_eta = 0;
   trig_EF_el_cl_phi = 0;
   trig_EF_el_cl_etas2 = 0;
   trig_EF_el_trackd0 = 0;
   trig_EF_el_trackz0 = 0;
   trig_EF_el_trackphi = 0;
   trig_EF_el_tracktheta = 0;
   trig_EF_el_trackqoverp = 0;
   trig_EF_el_trackpt = 0;
   trig_EF_el_tracketa = 0;
   trig_EF_el_nBLHits = 0;
   trig_EF_el_nPixHits = 0;
   trig_EF_el_nSCTHits = 0;
   trig_EF_el_nTRTHits = 0;
   trig_EF_el_nTRTHighTHits = 0;
   trig_EF_el_nPixHoles = 0;
   trig_EF_el_nSCTHoles = 0;
   trig_EF_el_nTRTHoles = 0;
   trig_EF_el_nBLSharedHits = 0;
   trig_EF_el_nPixSharedHits = 0;
   trig_EF_el_nSCTSharedHits = 0;
   trig_EF_el_nBLayerOutliers = 0;
   trig_EF_el_nPixelOutliers = 0;
   trig_EF_el_nSCTOutliers = 0;
   trig_EF_el_nTRTOutliers = 0;
   trig_EF_el_nTRTHighTOutliers = 0;
   trig_EF_el_expectBLayerHit = 0;
   trig_EF_el_nSiHits = 0;
   trig_EF_el_TRTHighTHitsRatio = 0;
   trig_EF_el_TRTHighTOutliersRatio = 0;
   trig_EF_el_pixeldEdx = 0;
   trig_EF_el_nGoodHitsPixeldEdx = 0;
   trig_EF_el_massPixeldEdx = 0;
   trig_EF_el_likelihoodsPixeldEdx = 0;
   trig_EF_el_eProbabilityComb = 0;
   trig_EF_el_eProbabilityHT = 0;
   trig_EF_el_eProbabilityToT = 0;
   trig_EF_el_eProbabilityBrem = 0;
   trig_EF_el_vertweight = 0;
   trig_EF_el_hastrack = 0;
   trig_EF_ph_E = 0;
   trig_EF_ph_Et = 0;
   trig_EF_ph_pt = 0;
   trig_EF_ph_m = 0;
   trig_EF_ph_eta = 0;
   trig_EF_ph_phi = 0;
   trig_EF_ph_px = 0;
   trig_EF_ph_py = 0;
   trig_EF_ph_pz = 0;
   trig_EF_ph_author = 0;
   trig_EF_ph_isRecovered = 0;
   trig_EF_ph_isEM = 0;
   trig_EF_ph_isEMLoose = 0;
   trig_EF_ph_isEMMedium = 0;
   trig_EF_ph_isEMTight = 0;
   trig_EF_ph_convFlag = 0;
   trig_EF_ph_isConv = 0;
   trig_EF_ph_nConv = 0;
   trig_EF_ph_nSingleTrackConv = 0;
   trig_EF_ph_nDoubleTrackConv = 0;
   trig_EF_ph_loose = 0;
   trig_EF_ph_looseIso = 0;
   trig_EF_ph_tight = 0;
   trig_EF_ph_tightIso = 0;
   trig_EF_ph_looseAR = 0;
   trig_EF_ph_looseARIso = 0;
   trig_EF_ph_tightAR = 0;
   trig_EF_ph_tightARIso = 0;
   trig_EF_ph_Ethad = 0;
   trig_EF_ph_Ethad1 = 0;
   trig_EF_ph_E033 = 0;
   trig_EF_ph_f1 = 0;
   trig_EF_ph_f1core = 0;
   trig_EF_ph_Emins1 = 0;
   trig_EF_ph_fside = 0;
   trig_EF_ph_Emax2 = 0;
   trig_EF_ph_ws3 = 0;
   trig_EF_ph_wstot = 0;
   trig_EF_ph_E132 = 0;
   trig_EF_ph_E1152 = 0;
   trig_EF_ph_emaxs1 = 0;
   trig_EF_ph_deltaEs = 0;
   trig_EF_ph_E233 = 0;
   trig_EF_ph_E237 = 0;
   trig_EF_ph_E277 = 0;
   trig_EF_ph_weta2 = 0;
   trig_EF_ph_f3 = 0;
   trig_EF_ph_f3core = 0;
   trig_EF_ph_rphiallcalo = 0;
   trig_EF_ph_Etcone45 = 0;
   trig_EF_ph_Etcone15 = 0;
   trig_EF_ph_Etcone20 = 0;
   trig_EF_ph_Etcone25 = 0;
   trig_EF_ph_Etcone30 = 0;
   trig_EF_ph_Etcone35 = 0;
   trig_EF_ph_Etcone40 = 0;
   trig_EF_ph_ptcone20 = 0;
   trig_EF_ph_ptcone30 = 0;
   trig_EF_ph_ptcone40 = 0;
   trig_EF_ph_convanglematch = 0;
   trig_EF_ph_convtrackmatch = 0;
   trig_EF_ph_hasconv = 0;
   trig_EF_ph_convvtxx = 0;
   trig_EF_ph_convvtxy = 0;
   trig_EF_ph_convvtxz = 0;
   trig_EF_ph_Rconv = 0;
   trig_EF_ph_zconv = 0;
   trig_EF_ph_convvtxchi2 = 0;
   trig_EF_ph_pt1conv = 0;
   trig_EF_ph_convtrk1nBLHits = 0;
   trig_EF_ph_convtrk1nPixHits = 0;
   trig_EF_ph_convtrk1nSCTHits = 0;
   trig_EF_ph_convtrk1nTRTHits = 0;
   trig_EF_ph_pt2conv = 0;
   trig_EF_ph_convtrk2nBLHits = 0;
   trig_EF_ph_convtrk2nPixHits = 0;
   trig_EF_ph_convtrk2nSCTHits = 0;
   trig_EF_ph_convtrk2nTRTHits = 0;
   trig_EF_ph_ptconv = 0;
   trig_EF_ph_pzconv = 0;
   trig_EF_ph_reta = 0;
   trig_EF_ph_rphi = 0;
   trig_EF_ph_cl_E = 0;
   trig_EF_ph_cl_pt = 0;
   trig_EF_ph_cl_eta = 0;
   trig_EF_ph_cl_phi = 0;
   trig_EF_ph_cl_etas2 = 0;
   trig_Nav_chain_ChainId = 0;
   trig_Nav_chain_RoIType = 0;
   trig_Nav_chain_RoIIndex = 0;
   trig_RoI_L2_e_type = 0;
   trig_RoI_L2_e_active = 0;
   trig_RoI_L2_e_lastStep = 0;
   trig_RoI_L2_e_TENumber = 0;
   trig_RoI_L2_e_roiNumber = 0;
   trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma = 0;
   trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus = 0;
   trig_RoI_L2_e_TrigEMCluster = 0;
   trig_RoI_L2_e_TrigEMClusterStatus = 0;
   trig_RoI_L2_e_EmTau_ROI = 0;
   trig_RoI_L2_e_EmTau_ROIStatus = 0;
   trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma = 0;
   trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus = 0;
   trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma = 0;
   trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus = 0;
   trig_RoI_L2_e_TrigElectronContainer = 0;
   trig_RoI_L2_e_TrigElectronContainerStatus = 0;
   trig_RoI_L2_e_TrigPhotonContainer = 0;
   trig_RoI_L2_e_TrigPhotonContainerStatus = 0;
   trig_RoI_EF_e_type = 0;
   trig_RoI_EF_e_active = 0;
   trig_RoI_EF_e_lastStep = 0;
   trig_RoI_EF_e_TENumber = 0;
   trig_RoI_EF_e_roiNumber = 0;
   trig_RoI_EF_e_EmTau_ROI = 0;
   trig_RoI_EF_e_EmTau_ROIStatus = 0;
   trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID = 0;
   trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus = 0;
   trig_RoI_EF_e_egammaContainer_egamma_Electrons = 0;
   trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus = 0;
   trig_RoI_EF_e_egammaContainer_egamma_Photons = 0;
   trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus = 0;
   PV_x = 0;
   PV_y = 0;
   PV_z = 0;
   PV_type = 0;
   PV_px = 0;
   PV_py = 0;
   PV_pz = 0;
   PV_E = 0;
   PV_m = 0;
   PV_nTracks = 0;
   PV_sumPt = 0;
   PV_trk_weight = 0;
   PV_trk_n = 0;
   PV_trk_index = 0;
   PhotonPV_px = 0;
   PhotonPV_py = 0;
   PhotonPV_pz = 0;
   PhotonPV_E = 0;
   PhotonPV_m = 0;
   PhotonPV_nTracks = 0;
   PhotonPV_sumPt = 0;
   PhotonPV_sumPt2 = 0;
   PhotonPV_type = 0;
   PhotonPV_missPt = 0;
   PhotonPV_meanPt = 0;
   PhotonPV_nTracks_05GeV = 0;
   PhotonPV_nTracks_07GeV = 0;
   PhotonPV_nTracks_1GeV = 0;
   PhotonPV_nTracks_2GeV = 0;
   mcevt_signal_process_id = 0;
   mcevt_event_number = 0;
   mcevt_event_scale = 0;
   mcevt_alphaQCD = 0;
   mcevt_alphaQED = 0;
   mcevt_pdf_id1 = 0;
   mcevt_pdf_id2 = 0;
   mcevt_pdf_x1 = 0;
   mcevt_pdf_x2 = 0;
   mcevt_pdf_scale = 0;
   mcevt_pdf1 = 0;
   mcevt_pdf2 = 0;
   mcevt_weight = 0;
   mcevt_nparticle = 0;
   mcevt_pileUpType = 0;
   mc_pt = 0;
   mc_m = 0;
   mc_eta = 0;
   mc_phi = 0;
   mc_status = 0;
   mc_barcode = 0;
   mc_parents = 0;
   mc_children = 0;
   mc_pdgId = 0;
   mc_charge = 0;
   mc_vx_x = 0;
   mc_vx_y = 0;
   mc_vx_z = 0;
   mc_vx_barcode = 0;
   mc_child_index = 0;
   mc_parent_index = 0;
   mc_PartonIsolation15_UE = 0;
   mc_PartonIsolation20_UE = 0;
   mc_PartonIsolation25_UE = 0;
   mc_PartonIsolation30_UE = 0;
   mc_PartonIsolation35_UE = 0;
   mc_PartonIsolation40_UE = 0;
   mc_PartonIsolation45_UE = 0;
   mc_PartonIsolation60_UE = 0;
   mc_PartonIsolation15 = 0;
   mc_PartonIsolation20 = 0;
   mc_PartonIsolation25 = 0;
   mc_PartonIsolation30 = 0;
   mc_PartonIsolation35 = 0;
   mc_PartonIsolation40 = 0;
   mc_PartonIsolation45 = 0;
   mc_PartonIsolation60 = 0;
   mc_ParticleIsolation40 = 0;
   mc_ParticleIsolation40_ED_corrected = 0;
   mc_ParticleIsolation40_ED_corrected_reco = 0;
   mc_ParticleIsolation40_ED_corrected_new = 0;
   mc_ParticleIsolation40_ED_corrected_reco_new = 0;
   mc_isBremPhoton = 0;
   mc_isHardProcPhoton = 0;
   jet_AntiKt4TruthJets_E = 0;
   jet_AntiKt4TruthJets_pt = 0;
   jet_AntiKt4TruthJets_m = 0;
   jet_AntiKt4TruthJets_eta = 0;
   jet_AntiKt4TruthJets_phi = 0;
   jet_AntiKt4TruthJets_EtaOrigin = 0;
   jet_AntiKt4TruthJets_PhiOrigin = 0;
   jet_AntiKt4TruthJets_MOrigin = 0;
   jet_AntiKt4TruthJets_EtaOriginEM = 0;
   jet_AntiKt4TruthJets_PhiOriginEM = 0;
   jet_AntiKt4TruthJets_MOriginEM = 0;
   jet_AntiKt4TruthJets_shapeBins = 0;
   jet_AntiKt4TruthJets_flavor_truth_label = 0;
   jet_AntiKt4TruthJets_flavor_truth_dRminToB = 0;
   jet_AntiKt4TruthJets_flavor_truth_dRminToC = 0;
   jet_AntiKt4TruthJets_flavor_truth_dRminToT = 0;
   jet_AntiKt4TruthJets_flavor_truth_BHadronpdg = 0;
   jet_AntiKt4TruthJets_flavor_truth_vx_x = 0;
   jet_AntiKt4TruthJets_flavor_truth_vx_y = 0;
   jet_AntiKt4TruthJets_flavor_truth_vx_z = 0;
   jet_AntiKt4TruthJets_el_dr = 0;
   jet_AntiKt4TruthJets_el_matched = 0;
   jet_AntiKt4TruthJets_mu_dr = 0;
   jet_AntiKt4TruthJets_mu_matched = 0;
   jet_AntiKt6TruthJets_E = 0;
   jet_AntiKt6TruthJets_pt = 0;
   jet_AntiKt6TruthJets_m = 0;
   jet_AntiKt6TruthJets_eta = 0;
   jet_AntiKt6TruthJets_phi = 0;
   jet_AntiKt6TruthJets_EtaOrigin = 0;
   jet_AntiKt6TruthJets_PhiOrigin = 0;
   jet_AntiKt6TruthJets_MOrigin = 0;
   jet_AntiKt6TruthJets_EtaOriginEM = 0;
   jet_AntiKt6TruthJets_PhiOriginEM = 0;
   jet_AntiKt6TruthJets_MOriginEM = 0;
   jet_AntiKt6TruthJets_shapeBins = 0;
   jet_AntiKt6TruthJets_flavor_truth_label = 0;
   jet_AntiKt6TruthJets_flavor_truth_dRminToB = 0;
   jet_AntiKt6TruthJets_flavor_truth_dRminToC = 0;
   jet_AntiKt6TruthJets_flavor_truth_dRminToT = 0;
   jet_AntiKt6TruthJets_flavor_truth_BHadronpdg = 0;
   jet_AntiKt6TruthJets_flavor_truth_vx_x = 0;
   jet_AntiKt6TruthJets_flavor_truth_vx_y = 0;
   jet_AntiKt6TruthJets_flavor_truth_vx_z = 0;
   jet_AntiKt6TruthJets_el_dr = 0;
   jet_AntiKt6TruthJets_el_matched = 0;
   jet_AntiKt6TruthJets_mu_dr = 0;
   jet_AntiKt6TruthJets_mu_matched = 0;
   jet_AntiKt4TruthWithMuNoIntJets_E = 0;
   jet_AntiKt4TruthWithMuNoIntJets_pt = 0;
   jet_AntiKt4TruthWithMuNoIntJets_m = 0;
   jet_AntiKt4TruthWithMuNoIntJets_eta = 0;
   jet_AntiKt4TruthWithMuNoIntJets_phi = 0;
   jet_AntiKt4TruthWithMuNoIntJets_EtaOrigin = 0;
   jet_AntiKt4TruthWithMuNoIntJets_PhiOrigin = 0;
   jet_AntiKt4TruthWithMuNoIntJets_MOrigin = 0;
   jet_AntiKt4TruthWithMuNoIntJets_EtaOriginEM = 0;
   jet_AntiKt4TruthWithMuNoIntJets_PhiOriginEM = 0;
   jet_AntiKt4TruthWithMuNoIntJets_MOriginEM = 0;
   jet_AntiKt4TruthWithMuNoIntJets_shapeBins = 0;
   jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_label = 0;
   jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToB = 0;
   jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToC = 0;
   jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToT = 0;
   jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_BHadronpdg = 0;
   jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_x = 0;
   jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_y = 0;
   jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_z = 0;
   jet_AntiKt4TruthWithMuNoIntJets_el_dr = 0;
   jet_AntiKt4TruthWithMuNoIntJets_el_matched = 0;
   jet_AntiKt4TruthWithMuNoIntJets_mu_dr = 0;
   jet_AntiKt4TruthWithMuNoIntJets_mu_matched = 0;
   jet_AntiKt6TruthWithMuNoIntJets_E = 0;
   jet_AntiKt6TruthWithMuNoIntJets_pt = 0;
   jet_AntiKt6TruthWithMuNoIntJets_m = 0;
   jet_AntiKt6TruthWithMuNoIntJets_eta = 0;
   jet_AntiKt6TruthWithMuNoIntJets_phi = 0;
   jet_AntiKt6TruthWithMuNoIntJets_EtaOrigin = 0;
   jet_AntiKt6TruthWithMuNoIntJets_PhiOrigin = 0;
   jet_AntiKt6TruthWithMuNoIntJets_MOrigin = 0;
   jet_AntiKt6TruthWithMuNoIntJets_EtaOriginEM = 0;
   jet_AntiKt6TruthWithMuNoIntJets_PhiOriginEM = 0;
   jet_AntiKt6TruthWithMuNoIntJets_MOriginEM = 0;
   jet_AntiKt6TruthWithMuNoIntJets_shapeBins = 0;
   jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_label = 0;
   jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToB = 0;
   jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToC = 0;
   jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToT = 0;
   jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_BHadronpdg = 0;
   jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_x = 0;
   jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_y = 0;
   jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_z = 0;
   jet_AntiKt6TruthWithMuNoIntJets_el_dr = 0;
   jet_AntiKt6TruthWithMuNoIntJets_el_matched = 0;
   jet_AntiKt6TruthWithMuNoIntJets_mu_dr = 0;
   jet_AntiKt6TruthWithMuNoIntJets_mu_matched = 0;
   trig_L2_el_L2_2e12Tvh_medium = 0;
   trig_L2_el_L2_2e15vh_loose1_Zee = 0;
   trig_L2_el_L2_2e15vh_loose_Zee = 0;
   trig_L2_el_L2_2e15vh_medium = 0;
   trig_L2_el_L2_e10_etcut_mu10 = 0;
   trig_L2_el_L2_e10_loose1 = 0;
   trig_L2_el_L2_e12Tvh_medium = 0;
   trig_L2_el_L2_e12Tvh_medium_2e6T_medium = 0;
   trig_L2_el_L2_e12Tvh_medium_mu6 = 0;
   trig_L2_el_L2_e12Tvh_medium_mu6_topo_medium = 0;
   trig_L2_el_L2_e13_etcutTrk_xs30_noMu = 0;
   trig_L2_el_L2_e13_etcutTrk_xs45_noMu = 0;
   trig_L2_el_L2_e14_tight_e4_etcut_Jpsi = 0;
   trig_L2_el_L2_e15vh_loose1_e12Tvh_loose1_Zee = 0;
   trig_L2_el_L2_e15vh_medium = 0;
   trig_L2_el_L2_e15vh_medium_xe30_noMu = 0;
   trig_L2_el_L2_e15vh_medium_xe35_noMu = 0;
   trig_L2_el_L2_e20_etcutTrk_xe25_noMu = 0;
   trig_L2_el_L2_e20_etcutTrk_xs45_noMu = 0;
   trig_L2_el_L2_e22_etcut_e10_loose1 = 0;
   trig_L2_el_L2_e22_etcut_mu10 = 0;
   trig_L2_el_L2_e22_loose1_e10_etcut = 0;
   trig_L2_el_L2_e22i6vh_medium2 = 0;
   trig_L2_el_L2_e22vh_loose = 0;
   trig_L2_el_L2_e22vh_loose1 = 0;
   trig_L2_el_L2_e22vh_loose1_e10_loose1 = 0;
   trig_L2_el_L2_e22vh_looseTrk = 0;
   trig_L2_el_L2_e22vh_loose_2j20_a4tc_EFFS = 0;
   trig_L2_el_L2_e22vh_loose_3L1J10 = 0;
   trig_L2_el_L2_e22vh_loose_3j20_a4tc_EFFS = 0;
   trig_L2_el_L2_e22vh_loose_4L1J10 = 0;
   trig_L2_el_L2_e22vh_loose_4j15_a4tc_EFFS = 0;
   trig_L2_el_L2_e22vh_medium = 0;
   trig_L2_el_L2_e22vh_medium1 = 0;
   trig_L2_el_L2_e22vh_medium1_EFxe20_noMu = 0;
   trig_L2_el_L2_e22vh_medium1_EFxe30_noMu = 0;
   trig_L2_el_L2_e22vh_medium1_EFxe40_noMu = 0;
   trig_L2_el_L2_e22vh_medium1_mu10_EFFS = 0;
   trig_L2_el_L2_e22vh_medium2 = 0;
   trig_L2_el_L2_e22vh_medium_IDTrkNoCut = 0;
   trig_L2_el_L2_e22vh_medium_SiTrk = 0;
   trig_L2_el_L2_e22vh_medium_TRT = 0;
   trig_L2_el_L2_e25_loose2_xe20_noL2 = 0;
   trig_L2_el_L2_e25i5vh_medium2 = 0;
   trig_L2_el_L2_e25i6vh_medium2 = 0;
   trig_L2_el_L2_e25vh_medium1 = 0;
   trig_L2_el_L2_e30vh_medium2 = 0;
   trig_L2_el_L2_e9_tight_e4_etcut_Jpsi = 0;
   trig_L2_ph_L2_g200_etcut = 0;
   trig_EF_el_EF_2e12Tvh_medium = 0;
   trig_EF_el_EF_2e15vh_loose1_Zee = 0;
   trig_EF_el_EF_2e15vh_loose_Zee = 0;
   trig_EF_el_EF_2e15vh_medium = 0;
   trig_EF_el_EF_e10_etcut_mu10 = 0;
   trig_EF_el_EF_e10_loose1 = 0;
   trig_EF_el_EF_e12Tvh_medium = 0;
   trig_EF_el_EF_e12Tvh_medium_2e6T_medium = 0;
   trig_EF_el_EF_e12Tvh_medium_mu6 = 0;
   trig_EF_el_EF_e12Tvh_medium_mu6_topo_medium = 0;
   trig_EF_el_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20 = 0;
   trig_EF_el_EF_e13_etcutTrk_xs60_noMu = 0;
   trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07 = 0;
   trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20 = 0;
   trig_EF_el_EF_e14_tight_e4_etcut_Jpsi = 0;
   trig_EF_el_EF_e15vh_loose1_e12Tvh_loose1_Zee = 0;
   trig_EF_el_EF_e15vh_medium = 0;
   trig_EF_el_EF_e15vh_medium_xe40_noMu = 0;
   trig_EF_el_EF_e15vh_medium_xe50_noMu = 0;
   trig_EF_el_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20 = 0;
   trig_EF_el_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07 = 0;
   trig_EF_el_EF_e22_etcut_e10_loose1 = 0;
   trig_EF_el_EF_e22_etcut_mu10 = 0;
   trig_EF_el_EF_e22_loose1_e10_etcut = 0;
   trig_EF_el_EF_e22i6vh_medium2 = 0;
   trig_EF_el_EF_e22vh_loose = 0;
   trig_EF_el_EF_e22vh_loose1 = 0;
   trig_EF_el_EF_e22vh_loose1_e10_loose1 = 0;
   trig_EF_el_EF_e22vh_looseTrk = 0;
   trig_EF_el_EF_e22vh_loose_2j20_a4tc_EFFS = 0;
   trig_EF_el_EF_e22vh_loose_3L1J10 = 0;
   trig_EF_el_EF_e22vh_loose_3j20_a4tc_EFFS = 0;
   trig_EF_el_EF_e22vh_loose_4L1J10 = 0;
   trig_EF_el_EF_e22vh_loose_4j15_a4tc_EFFS = 0;
   trig_EF_el_EF_e22vh_medium = 0;
   trig_EF_el_EF_e22vh_medium1 = 0;
   trig_EF_el_EF_e22vh_medium1_3j10_a4tc_EFFS = 0;
   trig_EF_el_EF_e22vh_medium1_3j15_a4tc_EFFS = 0;
   trig_EF_el_EF_e22vh_medium1_4j10_a4tc_EFFS = 0;
   trig_EF_el_EF_e22vh_medium1_EFxe20_noMu = 0;
   trig_EF_el_EF_e22vh_medium1_EFxe30_noMu = 0;
   trig_EF_el_EF_e22vh_medium1_EFxe40_noMu = 0;
   trig_EF_el_EF_e22vh_medium1_mu10_EFFS = 0;
   trig_EF_el_EF_e22vh_medium2 = 0;
   trig_EF_el_EF_e22vh_medium_IDTrkNoCut = 0;
   trig_EF_el_EF_e22vh_medium_SiTrk = 0;
   trig_EF_el_EF_e22vh_medium_TRT = 0;
   trig_EF_el_EF_e25_loose2_xe20_noMu_recoil40 = 0;
   trig_EF_el_EF_e25i5vh_medium2 = 0;
   trig_EF_el_EF_e25i6vh_medium2 = 0;
   trig_EF_el_EF_e25vh_medium1 = 0;
   trig_EF_el_EF_e30vh_medium2 = 0;
   trig_EF_el_EF_e9_tight_e4_etcut_Jpsi = 0;
   trig_EF_ph_EF_g200_etcut = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EF_2e10_medium", &EF_2e10_medium, &b_EF_2e10_medium);
   fChain->SetBranchAddress("EF_2e10_medium_mu6", &EF_2e10_medium_mu6, &b_EF_2e10_medium_mu6);
   fChain->SetBranchAddress("EF_2e11T_medium", &EF_2e11T_medium, &b_EF_2e11T_medium);
   fChain->SetBranchAddress("EF_2e12T_medium", &EF_2e12T_medium, &b_EF_2e12T_medium);
   fChain->SetBranchAddress("EF_2e12_medium", &EF_2e12_medium, &b_EF_2e12_medium);
   fChain->SetBranchAddress("EF_2e15_loose", &EF_2e15_loose, &b_EF_2e15_loose);
   fChain->SetBranchAddress("EF_2e15_medium", &EF_2e15_medium, &b_EF_2e15_medium);
   fChain->SetBranchAddress("EF_2e5_medium", &EF_2e5_medium, &b_EF_2e5_medium);
   fChain->SetBranchAddress("EF_2e5_medium_SiTrk", &EF_2e5_medium_SiTrk, &b_EF_2e5_medium_SiTrk);
   fChain->SetBranchAddress("EF_2e5_medium_TRT", &EF_2e5_medium_TRT, &b_EF_2e5_medium_TRT);
   fChain->SetBranchAddress("EF_2e5_tight", &EF_2e5_tight, &b_EF_2e5_tight);
   fChain->SetBranchAddress("EF_2e5_tight_Jpsi", &EF_2e5_tight_Jpsi, &b_EF_2e5_tight_Jpsi);
   fChain->SetBranchAddress("EF_2g10_loose", &EF_2g10_loose, &b_EF_2g10_loose);
   fChain->SetBranchAddress("EF_2g15_loose", &EF_2g15_loose, &b_EF_2g15_loose);
   fChain->SetBranchAddress("EF_2g20_loose", &EF_2g20_loose, &b_EF_2g20_loose);
   fChain->SetBranchAddress("EF_2g50_etcut", &EF_2g50_etcut, &b_EF_2g50_etcut);
   fChain->SetBranchAddress("EF_2j45_a4tc_EFFS_leadingmct100_xe40_medium_noMu", &EF_2j45_a4tc_EFFS_leadingmct100_xe40_medium_noMu, &b_EF_2j45_a4tc_EFFS_leadingmct100_xe40_medium_noMu);
   fChain->SetBranchAddress("EF_2j55_a4tc_EFFS_leadingmct100_xe40_medium_noMu", &EF_2j55_a4tc_EFFS_leadingmct100_xe40_medium_noMu, &b_EF_2j55_a4tc_EFFS_leadingmct100_xe40_medium_noMu);
   fChain->SetBranchAddress("EF_2mu10", &EF_2mu10, &b_EF_2mu10);
   fChain->SetBranchAddress("EF_2mu4", &EF_2mu4, &b_EF_2mu4);
   fChain->SetBranchAddress("EF_2mu4_xe30_noMu", &EF_2mu4_xe30_noMu, &b_EF_2mu4_xe30_noMu);
   fChain->SetBranchAddress("EF_2mu4_xe40_noMu", &EF_2mu4_xe40_noMu, &b_EF_2mu4_xe40_noMu);
   fChain->SetBranchAddress("EF_MU0_j45_a4tc_EFFS_xe45_loose_noMu", &EF_MU0_j45_a4tc_EFFS_xe45_loose_noMu, &b_EF_MU0_j45_a4tc_EFFS_xe45_loose_noMu);
   fChain->SetBranchAddress("EF_e10_NoCut", &EF_e10_NoCut, &b_EF_e10_NoCut);
   fChain->SetBranchAddress("EF_e10_loose", &EF_e10_loose, &b_EF_e10_loose);
   fChain->SetBranchAddress("EF_e10_loose_mu10", &EF_e10_loose_mu10, &b_EF_e10_loose_mu10);
   fChain->SetBranchAddress("EF_e10_loose_mu6", &EF_e10_loose_mu6, &b_EF_e10_loose_mu6);
   fChain->SetBranchAddress("EF_e10_medium", &EF_e10_medium, &b_EF_e10_medium);
   fChain->SetBranchAddress("EF_e10_medium_2mu6", &EF_e10_medium_2mu6, &b_EF_e10_medium_2mu6);
   fChain->SetBranchAddress("EF_e10_medium_mu10", &EF_e10_medium_mu10, &b_EF_e10_medium_mu10);
   fChain->SetBranchAddress("EF_e10_medium_mu6", &EF_e10_medium_mu6, &b_EF_e10_medium_mu6);
   fChain->SetBranchAddress("EF_e10_medium_mu6_topo_medium", &EF_e10_medium_mu6_topo_medium, &b_EF_e10_medium_mu6_topo_medium);
   fChain->SetBranchAddress("EF_e11T_medium", &EF_e11T_medium, &b_EF_e11T_medium);
   fChain->SetBranchAddress("EF_e11T_medium_2e6T_medium", &EF_e11T_medium_2e6T_medium, &b_EF_e11T_medium_2e6T_medium);
   fChain->SetBranchAddress("EF_e11_etcut", &EF_e11_etcut, &b_EF_e11_etcut);
   fChain->SetBranchAddress("EF_e12T_medium_mu6_topo_medium", &EF_e12T_medium_mu6_topo_medium, &b_EF_e12T_medium_mu6_topo_medium);
   fChain->SetBranchAddress("EF_e12_medium", &EF_e12_medium, &b_EF_e12_medium);
   fChain->SetBranchAddress("EF_e13_etcutTRT_xs60_noMu", &EF_e13_etcutTRT_xs60_noMu, &b_EF_e13_etcutTRT_xs60_noMu);
   fChain->SetBranchAddress("EF_e13_etcut_xs60_noMu", &EF_e13_etcut_xs60_noMu, &b_EF_e13_etcut_xs60_noMu);
   fChain->SetBranchAddress("EF_e13_etcut_xs70_noMu", &EF_e13_etcut_xs70_noMu, &b_EF_e13_etcut_xs70_noMu);
   fChain->SetBranchAddress("EF_e15_HLTtighter", &EF_e15_HLTtighter, &b_EF_e15_HLTtighter);
   fChain->SetBranchAddress("EF_e15_loose", &EF_e15_loose, &b_EF_e15_loose);
   fChain->SetBranchAddress("EF_e15_medium", &EF_e15_medium, &b_EF_e15_medium);
   fChain->SetBranchAddress("EF_e15_medium_e12_medium", &EF_e15_medium_e12_medium, &b_EF_e15_medium_e12_medium);
   fChain->SetBranchAddress("EF_e15_medium_mu6", &EF_e15_medium_mu6, &b_EF_e15_medium_mu6);
   fChain->SetBranchAddress("EF_e15_medium_xe30_noMu", &EF_e15_medium_xe30_noMu, &b_EF_e15_medium_xe30_noMu);
   fChain->SetBranchAddress("EF_e15_medium_xe35_loose_noMu", &EF_e15_medium_xe35_loose_noMu, &b_EF_e15_medium_xe35_loose_noMu);
   fChain->SetBranchAddress("EF_e15_medium_xe35_noMu", &EF_e15_medium_xe35_noMu, &b_EF_e15_medium_xe35_noMu);
   fChain->SetBranchAddress("EF_e15_medium_xe40_loose_noMu", &EF_e15_medium_xe40_loose_noMu, &b_EF_e15_medium_xe40_loose_noMu);
   fChain->SetBranchAddress("EF_e15_medium_xe40_noMu", &EF_e15_medium_xe40_noMu, &b_EF_e15_medium_xe40_noMu);
   fChain->SetBranchAddress("EF_e15_medium_xe50_noMu", &EF_e15_medium_xe50_noMu, &b_EF_e15_medium_xe50_noMu);
   fChain->SetBranchAddress("EF_e15_tight", &EF_e15_tight, &b_EF_e15_tight);
   fChain->SetBranchAddress("EF_e15_tight1", &EF_e15_tight1, &b_EF_e15_tight1);
   fChain->SetBranchAddress("EF_e15_tight_xe30_noMu", &EF_e15_tight_xe30_noMu, &b_EF_e15_tight_xe30_noMu);
   fChain->SetBranchAddress("EF_e18_medium", &EF_e18_medium, &b_EF_e18_medium);
   fChain->SetBranchAddress("EF_e18_medium_xe30_noMu", &EF_e18_medium_xe30_noMu, &b_EF_e18_medium_xe30_noMu);
   fChain->SetBranchAddress("EF_e18_tight", &EF_e18_tight, &b_EF_e18_tight);
   fChain->SetBranchAddress("EF_e20_L2Star_IDTrkNoCut", &EF_e20_L2Star_IDTrkNoCut, &b_EF_e20_L2Star_IDTrkNoCut);
   fChain->SetBranchAddress("EF_e20_etcut_xs60_noMu", &EF_e20_etcut_xs60_noMu, &b_EF_e20_etcut_xs60_noMu);
   fChain->SetBranchAddress("EF_e20_loose", &EF_e20_loose, &b_EF_e20_loose);
   fChain->SetBranchAddress("EF_e20_loose1", &EF_e20_loose1, &b_EF_e20_loose1);
   fChain->SetBranchAddress("EF_e20_looseTrk", &EF_e20_looseTrk, &b_EF_e20_looseTrk);
   fChain->SetBranchAddress("EF_e20_loose_2j10_a4tc_EFFS", &EF_e20_loose_2j10_a4tc_EFFS, &b_EF_e20_loose_2j10_a4tc_EFFS);
   fChain->SetBranchAddress("EF_e20_loose_3j10_a4tc_EFFS", &EF_e20_loose_3j10_a4tc_EFFS, &b_EF_e20_loose_3j10_a4tc_EFFS);
   fChain->SetBranchAddress("EF_e20_loose_4j10_a4tc_EFFS", &EF_e20_loose_4j10_a4tc_EFFS, &b_EF_e20_loose_4j10_a4tc_EFFS);
   fChain->SetBranchAddress("EF_e20_loose_IDTrkNoCut", &EF_e20_loose_IDTrkNoCut, &b_EF_e20_loose_IDTrkNoCut);
   fChain->SetBranchAddress("EF_e20_loose_TRT", &EF_e20_loose_TRT, &b_EF_e20_loose_TRT);
   fChain->SetBranchAddress("EF_e20_loose_xe20", &EF_e20_loose_xe20, &b_EF_e20_loose_xe20);
   fChain->SetBranchAddress("EF_e20_loose_xe20_noMu", &EF_e20_loose_xe20_noMu, &b_EF_e20_loose_xe20_noMu);
   fChain->SetBranchAddress("EF_e20_loose_xe30", &EF_e20_loose_xe30, &b_EF_e20_loose_xe30);
   fChain->SetBranchAddress("EF_e20_loose_xe30_noMu", &EF_e20_loose_xe30_noMu, &b_EF_e20_loose_xe30_noMu);
   fChain->SetBranchAddress("EF_e20_medium", &EF_e20_medium, &b_EF_e20_medium);
   fChain->SetBranchAddress("EF_e20_medium1", &EF_e20_medium1, &b_EF_e20_medium1);
   fChain->SetBranchAddress("EF_e20_medium2", &EF_e20_medium2, &b_EF_e20_medium2);
   fChain->SetBranchAddress("EF_e20_medium_IDTrkNoCut", &EF_e20_medium_IDTrkNoCut, &b_EF_e20_medium_IDTrkNoCut);
   fChain->SetBranchAddress("EF_e20_medium_SiTrk", &EF_e20_medium_SiTrk, &b_EF_e20_medium_SiTrk);
   fChain->SetBranchAddress("EF_e20_medium_TRT", &EF_e20_medium_TRT, &b_EF_e20_medium_TRT);
   fChain->SetBranchAddress("EF_e20_tight", &EF_e20_tight, &b_EF_e20_tight);
   fChain->SetBranchAddress("EF_e20_tight_e15_NoCut_Zee", &EF_e20_tight_e15_NoCut_Zee, &b_EF_e20_tight_e15_NoCut_Zee);
   fChain->SetBranchAddress("EF_e22_etcut_xs60_noMu", &EF_e22_etcut_xs60_noMu, &b_EF_e22_etcut_xs60_noMu);
   fChain->SetBranchAddress("EF_e22_loose", &EF_e22_loose, &b_EF_e22_loose);
   fChain->SetBranchAddress("EF_e22_loose1", &EF_e22_loose1, &b_EF_e22_loose1);
   fChain->SetBranchAddress("EF_e22_looseTrk", &EF_e22_looseTrk, &b_EF_e22_looseTrk);
   fChain->SetBranchAddress("EF_e22_medium", &EF_e22_medium, &b_EF_e22_medium);
   fChain->SetBranchAddress("EF_e22_medium1", &EF_e22_medium1, &b_EF_e22_medium1);
   fChain->SetBranchAddress("EF_e22_medium2", &EF_e22_medium2, &b_EF_e22_medium2);
   fChain->SetBranchAddress("EF_e22_medium_IDTrkNoCut", &EF_e22_medium_IDTrkNoCut, &b_EF_e22_medium_IDTrkNoCut);
   fChain->SetBranchAddress("EF_e22_medium_SiTrk", &EF_e22_medium_SiTrk, &b_EF_e22_medium_SiTrk);
   fChain->SetBranchAddress("EF_e22_medium_TRT", &EF_e22_medium_TRT, &b_EF_e22_medium_TRT);
   fChain->SetBranchAddress("EF_e22_tight", &EF_e22_tight, &b_EF_e22_tight);
   fChain->SetBranchAddress("EF_e25_loose", &EF_e25_loose, &b_EF_e25_loose);
   fChain->SetBranchAddress("EF_e25_medium", &EF_e25_medium, &b_EF_e25_medium);
   fChain->SetBranchAddress("EF_e30_loose", &EF_e30_loose, &b_EF_e30_loose);
   fChain->SetBranchAddress("EF_e30_medium", &EF_e30_medium, &b_EF_e30_medium);
   fChain->SetBranchAddress("EF_e33_medium", &EF_e33_medium, &b_EF_e33_medium);
   fChain->SetBranchAddress("EF_e35_medium", &EF_e35_medium, &b_EF_e35_medium);
   fChain->SetBranchAddress("EF_e40_medium", &EF_e40_medium, &b_EF_e40_medium);
   fChain->SetBranchAddress("EF_e45_medium", &EF_e45_medium, &b_EF_e45_medium);
   fChain->SetBranchAddress("EF_e45_medium1", &EF_e45_medium1, &b_EF_e45_medium1);
   fChain->SetBranchAddress("EF_e5_NoCut_L2SW", &EF_e5_NoCut_L2SW, &b_EF_e5_NoCut_L2SW);
   fChain->SetBranchAddress("EF_e5_NoCut_Ringer", &EF_e5_NoCut_Ringer, &b_EF_e5_NoCut_Ringer);
   fChain->SetBranchAddress("EF_e5_NoCut_firstempty", &EF_e5_NoCut_firstempty, &b_EF_e5_NoCut_firstempty);
   fChain->SetBranchAddress("EF_e5_medium_mu4", &EF_e5_medium_mu4, &b_EF_e5_medium_mu4);
   fChain->SetBranchAddress("EF_e5_medium_mu6", &EF_e5_medium_mu6, &b_EF_e5_medium_mu6);
   fChain->SetBranchAddress("EF_e5_medium_mu6_topo_loose", &EF_e5_medium_mu6_topo_loose, &b_EF_e5_medium_mu6_topo_loose);
   fChain->SetBranchAddress("EF_e5_medium_mu6_topo_medium", &EF_e5_medium_mu6_topo_medium, &b_EF_e5_medium_mu6_topo_medium);
   fChain->SetBranchAddress("EF_e5_tight", &EF_e5_tight, &b_EF_e5_tight);
   fChain->SetBranchAddress("EF_e5_tight_TRT", &EF_e5_tight_TRT, &b_EF_e5_tight_TRT);
   fChain->SetBranchAddress("EF_e5_tight_e14_etcut_Jpsi", &EF_e5_tight_e14_etcut_Jpsi, &b_EF_e5_tight_e14_etcut_Jpsi);
   fChain->SetBranchAddress("EF_e5_tight_e4_etcut_Jpsi", &EF_e5_tight_e4_etcut_Jpsi, &b_EF_e5_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("EF_e5_tight_e4_etcut_Jpsi_SiTrk", &EF_e5_tight_e4_etcut_Jpsi_SiTrk, &b_EF_e5_tight_e4_etcut_Jpsi_SiTrk);
   fChain->SetBranchAddress("EF_e5_tight_e4_etcut_Jpsi_TRT", &EF_e5_tight_e4_etcut_Jpsi_TRT, &b_EF_e5_tight_e4_etcut_Jpsi_TRT);
   fChain->SetBranchAddress("EF_e5_tight_e5_NoCut", &EF_e5_tight_e5_NoCut, &b_EF_e5_tight_e5_NoCut);
   fChain->SetBranchAddress("EF_e5_tight_e5_NoCut_Jpsi", &EF_e5_tight_e5_NoCut_Jpsi, &b_EF_e5_tight_e5_NoCut_Jpsi);
   fChain->SetBranchAddress("EF_e5_tight_e7_etcut_Jpsi", &EF_e5_tight_e7_etcut_Jpsi, &b_EF_e5_tight_e7_etcut_Jpsi);
   fChain->SetBranchAddress("EF_e5_tight_e9_etcut_Jpsi", &EF_e5_tight_e9_etcut_Jpsi, &b_EF_e5_tight_e9_etcut_Jpsi);
   fChain->SetBranchAddress("EF_e60_loose", &EF_e60_loose, &b_EF_e60_loose);
   fChain->SetBranchAddress("EF_e6T_medium", &EF_e6T_medium, &b_EF_e6T_medium);
   fChain->SetBranchAddress("EF_e7_tight_e14_etcut_Jpsi", &EF_e7_tight_e14_etcut_Jpsi, &b_EF_e7_tight_e14_etcut_Jpsi);
   fChain->SetBranchAddress("EF_e9_tight_e5_tight_Jpsi", &EF_e9_tight_e5_tight_Jpsi, &b_EF_e9_tight_e5_tight_Jpsi);
   fChain->SetBranchAddress("EF_eb_physics", &EF_eb_physics, &b_EF_eb_physics);
   fChain->SetBranchAddress("EF_eb_physics_empty", &EF_eb_physics_empty, &b_EF_eb_physics_empty);
   fChain->SetBranchAddress("EF_eb_physics_firstempty", &EF_eb_physics_firstempty, &b_EF_eb_physics_firstempty);
   fChain->SetBranchAddress("EF_eb_physics_noL1PS", &EF_eb_physics_noL1PS, &b_EF_eb_physics_noL1PS);
   fChain->SetBranchAddress("EF_eb_physics_unpaired_iso", &EF_eb_physics_unpaired_iso, &b_EF_eb_physics_unpaired_iso);
   fChain->SetBranchAddress("EF_eb_physics_unpaired_noniso", &EF_eb_physics_unpaired_noniso, &b_EF_eb_physics_unpaired_noniso);
   fChain->SetBranchAddress("EF_eb_random", &EF_eb_random, &b_EF_eb_random);
   fChain->SetBranchAddress("EF_eb_random_empty", &EF_eb_random_empty, &b_EF_eb_random_empty);
   fChain->SetBranchAddress("EF_eb_random_firstempty", &EF_eb_random_firstempty, &b_EF_eb_random_firstempty);
   fChain->SetBranchAddress("EF_eb_random_unpaired_iso", &EF_eb_random_unpaired_iso, &b_EF_eb_random_unpaired_iso);
   fChain->SetBranchAddress("EF_em105_passHLT", &EF_em105_passHLT, &b_EF_em105_passHLT);
   fChain->SetBranchAddress("EF_g100_etcut_g50_etcut", &EF_g100_etcut_g50_etcut, &b_EF_g100_etcut_g50_etcut);
   fChain->SetBranchAddress("EF_g100_loose", &EF_g100_loose, &b_EF_g100_loose);
   fChain->SetBranchAddress("EF_g10_NoCut_cosmic", &EF_g10_NoCut_cosmic, &b_EF_g10_NoCut_cosmic);
   fChain->SetBranchAddress("EF_g11_etcut", &EF_g11_etcut, &b_EF_g11_etcut);
   fChain->SetBranchAddress("EF_g11_etcut_larcalib", &EF_g11_etcut_larcalib, &b_EF_g11_etcut_larcalib);
   fChain->SetBranchAddress("EF_g13_etcut_xs60_noMu", &EF_g13_etcut_xs60_noMu, &b_EF_g13_etcut_xs60_noMu);
   fChain->SetBranchAddress("EF_g150_etcut", &EF_g150_etcut, &b_EF_g150_etcut);
   fChain->SetBranchAddress("EF_g15_loose", &EF_g15_loose, &b_EF_g15_loose);
   fChain->SetBranchAddress("EF_g15_loose_larcalib", &EF_g15_loose_larcalib, &b_EF_g15_loose_larcalib);
   fChain->SetBranchAddress("EF_g17_etcut", &EF_g17_etcut, &b_EF_g17_etcut);
   fChain->SetBranchAddress("EF_g17_etcut_EFxe20_noMu", &EF_g17_etcut_EFxe20_noMu, &b_EF_g17_etcut_EFxe20_noMu);
   fChain->SetBranchAddress("EF_g17_etcut_EFxe30_noMu", &EF_g17_etcut_EFxe30_noMu, &b_EF_g17_etcut_EFxe30_noMu);
   fChain->SetBranchAddress("EF_g20_etcut", &EF_g20_etcut, &b_EF_g20_etcut);
   fChain->SetBranchAddress("EF_g20_etcut_xe30_noMu", &EF_g20_etcut_xe30_noMu, &b_EF_g20_etcut_xe30_noMu);
   fChain->SetBranchAddress("EF_g20_loose", &EF_g20_loose, &b_EF_g20_loose);
   fChain->SetBranchAddress("EF_g20_loose_cnv", &EF_g20_loose_cnv, &b_EF_g20_loose_cnv);
   fChain->SetBranchAddress("EF_g20_loose_larcalib", &EF_g20_loose_larcalib, &b_EF_g20_loose_larcalib);
   fChain->SetBranchAddress("EF_g20_loose_xe20_noMu", &EF_g20_loose_xe20_noMu, &b_EF_g20_loose_xe20_noMu);
   fChain->SetBranchAddress("EF_g20_loose_xe30_noMu", &EF_g20_loose_xe30_noMu, &b_EF_g20_loose_xe30_noMu);
   fChain->SetBranchAddress("EF_g20_tight", &EF_g20_tight, &b_EF_g20_tight);
   fChain->SetBranchAddress("EF_g22_hiptrt", &EF_g22_hiptrt, &b_EF_g22_hiptrt);
   fChain->SetBranchAddress("EF_g25_loose_xe30_noMu", &EF_g25_loose_xe30_noMu, &b_EF_g25_loose_xe30_noMu);
   fChain->SetBranchAddress("EF_g27_etcut", &EF_g27_etcut, &b_EF_g27_etcut);
   fChain->SetBranchAddress("EF_g27_etcut_EFxe30_noMu", &EF_g27_etcut_EFxe30_noMu, &b_EF_g27_etcut_EFxe30_noMu);
   fChain->SetBranchAddress("EF_g30_loose_g20_loose", &EF_g30_loose_g20_loose, &b_EF_g30_loose_g20_loose);
   fChain->SetBranchAddress("EF_g40_loose", &EF_g40_loose, &b_EF_g40_loose);
   fChain->SetBranchAddress("EF_g40_loose_EFxe35_noMu", &EF_g40_loose_EFxe35_noMu, &b_EF_g40_loose_EFxe35_noMu);
   fChain->SetBranchAddress("EF_g40_loose_EFxe40_noMu", &EF_g40_loose_EFxe40_noMu, &b_EF_g40_loose_EFxe40_noMu);
   fChain->SetBranchAddress("EF_g40_loose_b10_medium", &EF_g40_loose_b10_medium, &b_EF_g40_loose_b10_medium);
   fChain->SetBranchAddress("EF_g40_loose_larcalib", &EF_g40_loose_larcalib, &b_EF_g40_loose_larcalib);
   fChain->SetBranchAddress("EF_g40_loose_xe40_noMu", &EF_g40_loose_xe40_noMu, &b_EF_g40_loose_xe40_noMu);
   fChain->SetBranchAddress("EF_g40_loose_xe45_medium_noMu", &EF_g40_loose_xe45_medium_noMu, &b_EF_g40_loose_xe45_medium_noMu);
   fChain->SetBranchAddress("EF_g40_loose_xe55_medium_noMu", &EF_g40_loose_xe55_medium_noMu, &b_EF_g40_loose_xe55_medium_noMu);
   fChain->SetBranchAddress("EF_g40_loose_xs35_noMu", &EF_g40_loose_xs35_noMu, &b_EF_g40_loose_xs35_noMu);
   fChain->SetBranchAddress("EF_g40_tight", &EF_g40_tight, &b_EF_g40_tight);
   fChain->SetBranchAddress("EF_g40_tight_b10_medium", &EF_g40_tight_b10_medium, &b_EF_g40_tight_b10_medium);
   fChain->SetBranchAddress("EF_g40_tight_b15_medium", &EF_g40_tight_b15_medium, &b_EF_g40_tight_b15_medium);
   fChain->SetBranchAddress("EF_g50_loose", &EF_g50_loose, &b_EF_g50_loose);
   fChain->SetBranchAddress("EF_g5_NoCut_cosmic", &EF_g5_NoCut_cosmic, &b_EF_g5_NoCut_cosmic);
   fChain->SetBranchAddress("EF_g60_loose", &EF_g60_loose, &b_EF_g60_loose);
   fChain->SetBranchAddress("EF_g60_loose_larcalib", &EF_g60_loose_larcalib, &b_EF_g60_loose_larcalib);
   fChain->SetBranchAddress("EF_g80_loose", &EF_g80_loose, &b_EF_g80_loose);
   fChain->SetBranchAddress("EF_g80_loose_larcalib", &EF_g80_loose_larcalib, &b_EF_g80_loose_larcalib);
   fChain->SetBranchAddress("EF_j55_a4tc_EFFS_xe55_medium_noMu_dphi2j30xe10", &EF_j55_a4tc_EFFS_xe55_medium_noMu_dphi2j30xe10, &b_EF_j55_a4tc_EFFS_xe55_medium_noMu_dphi2j30xe10);
   fChain->SetBranchAddress("EF_j55_a4tc_EFFS_xe55_medium_noMu_dphi2j30xe10_l2cleancons", &EF_j55_a4tc_EFFS_xe55_medium_noMu_dphi2j30xe10_l2cleancons, &b_EF_j55_a4tc_EFFS_xe55_medium_noMu_dphi2j30xe10_l2cleancons);
   fChain->SetBranchAddress("EF_j65_a4tc_EFFS_xe65_noMu_dphi2j30xe10", &EF_j65_a4tc_EFFS_xe65_noMu_dphi2j30xe10, &b_EF_j65_a4tc_EFFS_xe65_noMu_dphi2j30xe10);
   fChain->SetBranchAddress("EF_j75_a4tc_EFFS_xe40_loose_noMu", &EF_j75_a4tc_EFFS_xe40_loose_noMu, &b_EF_j75_a4tc_EFFS_xe40_loose_noMu);
   fChain->SetBranchAddress("EF_j75_a4tc_EFFS_xe40_loose_noMu_dphijxe03", &EF_j75_a4tc_EFFS_xe40_loose_noMu_dphijxe03, &b_EF_j75_a4tc_EFFS_xe40_loose_noMu_dphijxe03);
   fChain->SetBranchAddress("EF_j75_a4tc_EFFS_xe45_loose_noMu", &EF_j75_a4tc_EFFS_xe45_loose_noMu, &b_EF_j75_a4tc_EFFS_xe45_loose_noMu);
   fChain->SetBranchAddress("EF_j75_a4tc_EFFS_xe55_loose_noMu", &EF_j75_a4tc_EFFS_xe55_loose_noMu, &b_EF_j75_a4tc_EFFS_xe55_loose_noMu);
   fChain->SetBranchAddress("EF_j75_a4tc_EFFS_xe55_noMu", &EF_j75_a4tc_EFFS_xe55_noMu, &b_EF_j75_a4tc_EFFS_xe55_noMu);
   fChain->SetBranchAddress("EF_j75_a4tc_EFFS_xe55_noMu_l2cleancons", &EF_j75_a4tc_EFFS_xe55_noMu_l2cleancons, &b_EF_j75_a4tc_EFFS_xe55_noMu_l2cleancons);
   fChain->SetBranchAddress("EF_j80_a4tc_EFFS_xe60_noMu", &EF_j80_a4tc_EFFS_xe60_noMu, &b_EF_j80_a4tc_EFFS_xe60_noMu);
   fChain->SetBranchAddress("EF_mu10", &EF_mu10, &b_EF_mu10);
   fChain->SetBranchAddress("EF_mu13", &EF_mu13, &b_EF_mu13);
   fChain->SetBranchAddress("EF_mu15_xe30_noMu", &EF_mu15_xe30_noMu, &b_EF_mu15_xe30_noMu);
   fChain->SetBranchAddress("EF_mu15_xe35_noMu", &EF_mu15_xe35_noMu, &b_EF_mu15_xe35_noMu);
   fChain->SetBranchAddress("EF_mu20", &EF_mu20, &b_EF_mu20);
   fChain->SetBranchAddress("EF_mu20_MSonly", &EF_mu20_MSonly, &b_EF_mu20_MSonly);
   fChain->SetBranchAddress("EF_mu4", &EF_mu4, &b_EF_mu4);
   fChain->SetBranchAddress("EF_mu4_j45_a4tc_EFFS_xe45_loose_noMu", &EF_mu4_j45_a4tc_EFFS_xe45_loose_noMu, &b_EF_mu4_j45_a4tc_EFFS_xe45_loose_noMu);
   fChain->SetBranchAddress("EF_mu6", &EF_mu6, &b_EF_mu6);
   fChain->SetBranchAddress("EF_tau16_j75_a4tc_EFFS_xe40_loose_noMu", &EF_tau16_j75_a4tc_EFFS_xe40_loose_noMu, &b_EF_tau16_j75_a4tc_EFFS_xe40_loose_noMu);
   fChain->SetBranchAddress("EF_tau16_loose_xe20_noMu", &EF_tau16_loose_xe20_noMu, &b_EF_tau16_loose_xe20_noMu);
   fChain->SetBranchAddress("EF_tau16_loose_xe25_noMu", &EF_tau16_loose_xe25_noMu, &b_EF_tau16_loose_xe25_noMu);
   fChain->SetBranchAddress("EF_tau16_loose_xe30_noMu", &EF_tau16_loose_xe30_noMu, &b_EF_tau16_loose_xe30_noMu);
   fChain->SetBranchAddress("EF_tau16_medium_xe22_noMu", &EF_tau16_medium_xe22_noMu, &b_EF_tau16_medium_xe22_noMu);
   fChain->SetBranchAddress("EF_tau16_medium_xe25_noMu", &EF_tau16_medium_xe25_noMu, &b_EF_tau16_medium_xe25_noMu);
   fChain->SetBranchAddress("EF_tau16_medium_xe25_tight_noMu", &EF_tau16_medium_xe25_tight_noMu, &b_EF_tau16_medium_xe25_tight_noMu);
   fChain->SetBranchAddress("EF_tau29_loose_j45_a4tc_EFFS_xe40_noMu", &EF_tau29_loose_j45_a4tc_EFFS_xe40_noMu, &b_EF_tau29_loose_j45_a4tc_EFFS_xe40_noMu);
   fChain->SetBranchAddress("EF_tau29_medium_xe35_noMu", &EF_tau29_medium_xe35_noMu, &b_EF_tau29_medium_xe35_noMu);
   fChain->SetBranchAddress("EF_tau29_medium_xe40_loose_noMu", &EF_tau29_medium_xe40_loose_noMu, &b_EF_tau29_medium_xe40_loose_noMu);
   fChain->SetBranchAddress("EF_xe20_noMu", &EF_xe20_noMu, &b_EF_xe20_noMu);
   fChain->SetBranchAddress("EF_xe30_noMu", &EF_xe30_noMu, &b_EF_xe30_noMu);
   fChain->SetBranchAddress("EF_xe35_noMu", &EF_xe35_noMu, &b_EF_xe35_noMu);
   fChain->SetBranchAddress("EF_xe40_noMu", &EF_xe40_noMu, &b_EF_xe40_noMu);
   fChain->SetBranchAddress("EF_xe50_noMu", &EF_xe50_noMu, &b_EF_xe50_noMu);
   fChain->SetBranchAddress("EF_xe60_noMu", &EF_xe60_noMu, &b_EF_xe60_noMu);
   fChain->SetBranchAddress("EF_xe60_tight_noMu", &EF_xe60_tight_noMu, &b_EF_xe60_tight_noMu);
   fChain->SetBranchAddress("EF_xe60_verytight_noMu", &EF_xe60_verytight_noMu, &b_EF_xe60_verytight_noMu);
   fChain->SetBranchAddress("EF_xe70_noMu", &EF_xe70_noMu, &b_EF_xe70_noMu);
   fChain->SetBranchAddress("EF_xe70_tight_noMu", &EF_xe70_tight_noMu, &b_EF_xe70_tight_noMu);
   fChain->SetBranchAddress("EF_xe80_noMu", &EF_xe80_noMu, &b_EF_xe80_noMu);
   fChain->SetBranchAddress("EF_xe90_noMu", &EF_xe90_noMu, &b_EF_xe90_noMu);
   fChain->SetBranchAddress("L1_2EM10", &L1_2EM10, &b_L1_2EM10);
   fChain->SetBranchAddress("L1_2EM14", &L1_2EM14, &b_L1_2EM14);
   fChain->SetBranchAddress("L1_2EM3", &L1_2EM3, &b_L1_2EM3);
   fChain->SetBranchAddress("L1_2EM3_EM10", &L1_2EM3_EM10, &b_L1_2EM3_EM10);
   fChain->SetBranchAddress("L1_2EM3_EM12", &L1_2EM3_EM12, &b_L1_2EM3_EM12);
   fChain->SetBranchAddress("L1_2EM3_EM7", &L1_2EM3_EM7, &b_L1_2EM3_EM7);
   fChain->SetBranchAddress("L1_2EM5", &L1_2EM5, &b_L1_2EM5);
   fChain->SetBranchAddress("L1_2EM5_EM10", &L1_2EM5_EM10, &b_L1_2EM5_EM10);
   fChain->SetBranchAddress("L1_2EM5_EM12", &L1_2EM5_EM12, &b_L1_2EM5_EM12);
   fChain->SetBranchAddress("L1_2EM5_MU6", &L1_2EM5_MU6, &b_L1_2EM5_MU6);
   fChain->SetBranchAddress("L1_2EM5_NL", &L1_2EM5_NL, &b_L1_2EM5_NL);
   fChain->SetBranchAddress("L1_2EM7", &L1_2EM7, &b_L1_2EM7);
   fChain->SetBranchAddress("L1_2EM7_EM10", &L1_2EM7_EM10, &b_L1_2EM7_EM10);
   fChain->SetBranchAddress("L1_2J20_XE20", &L1_2J20_XE20, &b_L1_2J20_XE20);
   fChain->SetBranchAddress("L1_2J30_XE20", &L1_2J30_XE20, &b_L1_2J30_XE20);
   fChain->SetBranchAddress("L1_2MU0_XE20", &L1_2MU0_XE20, &b_L1_2MU0_XE20);
   fChain->SetBranchAddress("L1_2MU0_XE25", &L1_2MU0_XE25, &b_L1_2MU0_XE25);
   fChain->SetBranchAddress("L1_EM10", &L1_EM10, &b_L1_EM10);
   fChain->SetBranchAddress("L1_EM10_MU6", &L1_EM10_MU6, &b_L1_EM10_MU6);
   fChain->SetBranchAddress("L1_EM10_XE20", &L1_EM10_XE20, &b_L1_EM10_XE20);
   fChain->SetBranchAddress("L1_EM10_XE30", &L1_EM10_XE30, &b_L1_EM10_XE30);
   fChain->SetBranchAddress("L1_EM10_XS45", &L1_EM10_XS45, &b_L1_EM10_XS45);
   fChain->SetBranchAddress("L1_EM10_XS50", &L1_EM10_XS50, &b_L1_EM10_XS50);
   fChain->SetBranchAddress("L1_EM12", &L1_EM12, &b_L1_EM12);
   fChain->SetBranchAddress("L1_EM14", &L1_EM14, &b_L1_EM14);
   fChain->SetBranchAddress("L1_EM14_XE10", &L1_EM14_XE10, &b_L1_EM14_XE10);
   fChain->SetBranchAddress("L1_EM14_XE20", &L1_EM14_XE20, &b_L1_EM14_XE20);
   fChain->SetBranchAddress("L1_EM16", &L1_EM16, &b_L1_EM16);
   fChain->SetBranchAddress("L1_EM3", &L1_EM3, &b_L1_EM3);
   fChain->SetBranchAddress("L1_EM30", &L1_EM30, &b_L1_EM30);
   fChain->SetBranchAddress("L1_EM3_EMPTY", &L1_EM3_EMPTY, &b_L1_EM3_EMPTY);
   fChain->SetBranchAddress("L1_EM3_FIRSTEMPTY", &L1_EM3_FIRSTEMPTY, &b_L1_EM3_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_EM3_MU0", &L1_EM3_MU0, &b_L1_EM3_MU0);
   fChain->SetBranchAddress("L1_EM3_MU6", &L1_EM3_MU6, &b_L1_EM3_MU6);
   fChain->SetBranchAddress("L1_EM3_UNPAIRED_ISO", &L1_EM3_UNPAIRED_ISO, &b_L1_EM3_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_EM3_UNPAIRED_NONISO", &L1_EM3_UNPAIRED_NONISO, &b_L1_EM3_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_EM5", &L1_EM5, &b_L1_EM5);
   fChain->SetBranchAddress("L1_EM5_2MU6", &L1_EM5_2MU6, &b_L1_EM5_2MU6);
   fChain->SetBranchAddress("L1_EM5_EMPTY", &L1_EM5_EMPTY, &b_L1_EM5_EMPTY);
   fChain->SetBranchAddress("L1_EM5_MU10", &L1_EM5_MU10, &b_L1_EM5_MU10);
   fChain->SetBranchAddress("L1_EM5_MU6", &L1_EM5_MU6, &b_L1_EM5_MU6);
   fChain->SetBranchAddress("L1_EM7", &L1_EM7, &b_L1_EM7);
   fChain->SetBranchAddress("L1_J30_XE35", &L1_J30_XE35, &b_L1_J30_XE35);
   fChain->SetBranchAddress("L1_J30_XE40", &L1_J30_XE40, &b_L1_J30_XE40);
   fChain->SetBranchAddress("L1_J50_XE20", &L1_J50_XE20, &b_L1_J50_XE20);
   fChain->SetBranchAddress("L1_J50_XE30", &L1_J50_XE30, &b_L1_J50_XE30);
   fChain->SetBranchAddress("L1_J50_XE35", &L1_J50_XE35, &b_L1_J50_XE35);
   fChain->SetBranchAddress("L1_J50_XE40", &L1_J50_XE40, &b_L1_J50_XE40);
   fChain->SetBranchAddress("L1_MU0", &L1_MU0, &b_L1_MU0);
   fChain->SetBranchAddress("L1_MU0_J20_XE20", &L1_MU0_J20_XE20, &b_L1_MU0_J20_XE20);
   fChain->SetBranchAddress("L1_MU10", &L1_MU10, &b_L1_MU10);
   fChain->SetBranchAddress("L1_MU10_XE20", &L1_MU10_XE20, &b_L1_MU10_XE20);
   fChain->SetBranchAddress("L1_MU20", &L1_MU20, &b_L1_MU20);
   fChain->SetBranchAddress("L1_MU6", &L1_MU6, &b_L1_MU6);
   fChain->SetBranchAddress("L1_TAU11_2J10_J20_XE20", &L1_TAU11_2J10_J20_XE20, &b_L1_TAU11_2J10_J20_XE20);
   fChain->SetBranchAddress("L1_TAU11_XE10_3J10", &L1_TAU11_XE10_3J10, &b_L1_TAU11_XE10_3J10);
   fChain->SetBranchAddress("L1_TAU11_XE20", &L1_TAU11_XE20, &b_L1_TAU11_XE20);
   fChain->SetBranchAddress("L1_TAU15_XE10_3J10", &L1_TAU15_XE10_3J10, &b_L1_TAU15_XE10_3J10);
   fChain->SetBranchAddress("L1_TAU15_XE20", &L1_TAU15_XE20, &b_L1_TAU15_XE20);
   fChain->SetBranchAddress("L1_TAU6_J50_XE20", &L1_TAU6_J50_XE20, &b_L1_TAU6_J50_XE20);
   fChain->SetBranchAddress("L1_TAU6_XE10", &L1_TAU6_XE10, &b_L1_TAU6_XE10);
   fChain->SetBranchAddress("L1_XE10", &L1_XE10, &b_L1_XE10);
   fChain->SetBranchAddress("L1_XE20", &L1_XE20, &b_L1_XE20);
   fChain->SetBranchAddress("L1_XE25", &L1_XE25, &b_L1_XE25);
   fChain->SetBranchAddress("L1_XE30", &L1_XE30, &b_L1_XE30);
   fChain->SetBranchAddress("L1_XE35", &L1_XE35, &b_L1_XE35);
   fChain->SetBranchAddress("L1_XE40", &L1_XE40, &b_L1_XE40);
   fChain->SetBranchAddress("L1_XE50", &L1_XE50, &b_L1_XE50);
   fChain->SetBranchAddress("L1_XE60", &L1_XE60, &b_L1_XE60);
   fChain->SetBranchAddress("L2_2e10_medium", &L2_2e10_medium, &b_L2_2e10_medium);
   fChain->SetBranchAddress("L2_2e10_medium_mu6", &L2_2e10_medium_mu6, &b_L2_2e10_medium_mu6);
   fChain->SetBranchAddress("L2_2e11T_medium", &L2_2e11T_medium, &b_L2_2e11T_medium);
   fChain->SetBranchAddress("L2_2e12T_medium", &L2_2e12T_medium, &b_L2_2e12T_medium);
   fChain->SetBranchAddress("L2_2e12_medium", &L2_2e12_medium, &b_L2_2e12_medium);
   fChain->SetBranchAddress("L2_2e15_loose", &L2_2e15_loose, &b_L2_2e15_loose);
   fChain->SetBranchAddress("L2_2e15_medium", &L2_2e15_medium, &b_L2_2e15_medium);
   fChain->SetBranchAddress("L2_2e5_medium", &L2_2e5_medium, &b_L2_2e5_medium);
   fChain->SetBranchAddress("L2_2e5_medium_SiTrk", &L2_2e5_medium_SiTrk, &b_L2_2e5_medium_SiTrk);
   fChain->SetBranchAddress("L2_2e5_medium_TRT", &L2_2e5_medium_TRT, &b_L2_2e5_medium_TRT);
   fChain->SetBranchAddress("L2_2e5_tight", &L2_2e5_tight, &b_L2_2e5_tight);
   fChain->SetBranchAddress("L2_2e5_tight_Jpsi", &L2_2e5_tight_Jpsi, &b_L2_2e5_tight_Jpsi);
   fChain->SetBranchAddress("L2_2g10_loose", &L2_2g10_loose, &b_L2_2g10_loose);
   fChain->SetBranchAddress("L2_2g15_loose", &L2_2g15_loose, &b_L2_2g15_loose);
   fChain->SetBranchAddress("L2_2g20_loose", &L2_2g20_loose, &b_L2_2g20_loose);
   fChain->SetBranchAddress("L2_2g50_etcut", &L2_2g50_etcut, &b_L2_2g50_etcut);
   fChain->SetBranchAddress("L2_2j40_anymct100_xe20_medium_noMu", &L2_2j40_anymct100_xe20_medium_noMu, &b_L2_2j40_anymct100_xe20_medium_noMu);
   fChain->SetBranchAddress("L2_2j50_anymct100_xe20_medium_noMu", &L2_2j50_anymct100_xe20_medium_noMu, &b_L2_2j50_anymct100_xe20_medium_noMu);
   fChain->SetBranchAddress("L2_2mu4", &L2_2mu4, &b_L2_2mu4);
   fChain->SetBranchAddress("L2_2mu4_xe20_noMu", &L2_2mu4_xe20_noMu, &b_L2_2mu4_xe20_noMu);
   fChain->SetBranchAddress("L2_2mu4_xe25_noMu", &L2_2mu4_xe25_noMu, &b_L2_2mu4_xe25_noMu);
   fChain->SetBranchAddress("L2_MU0_j40_xe20_loose_noMu", &L2_MU0_j40_xe20_loose_noMu, &b_L2_MU0_j40_xe20_loose_noMu);
   fChain->SetBranchAddress("L2_e10_NoCut", &L2_e10_NoCut, &b_L2_e10_NoCut);
   fChain->SetBranchAddress("L2_e10_loose", &L2_e10_loose, &b_L2_e10_loose);
   fChain->SetBranchAddress("L2_e10_loose_mu10", &L2_e10_loose_mu10, &b_L2_e10_loose_mu10);
   fChain->SetBranchAddress("L2_e10_loose_mu6", &L2_e10_loose_mu6, &b_L2_e10_loose_mu6);
   fChain->SetBranchAddress("L2_e10_medium", &L2_e10_medium, &b_L2_e10_medium);
   fChain->SetBranchAddress("L2_e10_medium_2mu6", &L2_e10_medium_2mu6, &b_L2_e10_medium_2mu6);
   fChain->SetBranchAddress("L2_e10_medium_mu10", &L2_e10_medium_mu10, &b_L2_e10_medium_mu10);
   fChain->SetBranchAddress("L2_e10_medium_mu6", &L2_e10_medium_mu6, &b_L2_e10_medium_mu6);
   fChain->SetBranchAddress("L2_e10_medium_mu6_topo_medium", &L2_e10_medium_mu6_topo_medium, &b_L2_e10_medium_mu6_topo_medium);
   fChain->SetBranchAddress("L2_e11T_medium", &L2_e11T_medium, &b_L2_e11T_medium);
   fChain->SetBranchAddress("L2_e11T_medium_2e6T_medium", &L2_e11T_medium_2e6T_medium, &b_L2_e11T_medium_2e6T_medium);
   fChain->SetBranchAddress("L2_e11_etcut", &L2_e11_etcut, &b_L2_e11_etcut);
   fChain->SetBranchAddress("L2_e12T_medium_mu6_topo_medium", &L2_e12T_medium_mu6_topo_medium, &b_L2_e12T_medium_mu6_topo_medium);
   fChain->SetBranchAddress("L2_e12_medium", &L2_e12_medium, &b_L2_e12_medium);
   fChain->SetBranchAddress("L2_e13_etcut_xs45_noMu", &L2_e13_etcut_xs45_noMu, &b_L2_e13_etcut_xs45_noMu);
   fChain->SetBranchAddress("L2_e15_HLTtighter", &L2_e15_HLTtighter, &b_L2_e15_HLTtighter);
   fChain->SetBranchAddress("L2_e15_loose", &L2_e15_loose, &b_L2_e15_loose);
   fChain->SetBranchAddress("L2_e15_medium", &L2_e15_medium, &b_L2_e15_medium);
   fChain->SetBranchAddress("L2_e15_medium_e12_medium", &L2_e15_medium_e12_medium, &b_L2_e15_medium_e12_medium);
   fChain->SetBranchAddress("L2_e15_medium_mu6", &L2_e15_medium_mu6, &b_L2_e15_medium_mu6);
   fChain->SetBranchAddress("L2_e15_medium_xe20_noMu", &L2_e15_medium_xe20_noMu, &b_L2_e15_medium_xe20_noMu);
   fChain->SetBranchAddress("L2_e15_medium_xe25_noMu", &L2_e15_medium_xe25_noMu, &b_L2_e15_medium_xe25_noMu);
   fChain->SetBranchAddress("L2_e15_medium_xe30_noMu", &L2_e15_medium_xe30_noMu, &b_L2_e15_medium_xe30_noMu);
   fChain->SetBranchAddress("L2_e15_medium_xe35_noMu", &L2_e15_medium_xe35_noMu, &b_L2_e15_medium_xe35_noMu);
   fChain->SetBranchAddress("L2_e15_medium_xe40_loose_noMu", &L2_e15_medium_xe40_loose_noMu, &b_L2_e15_medium_xe40_loose_noMu);
   fChain->SetBranchAddress("L2_e15_tight", &L2_e15_tight, &b_L2_e15_tight);
   fChain->SetBranchAddress("L2_e15_tight1", &L2_e15_tight1, &b_L2_e15_tight1);
   fChain->SetBranchAddress("L2_e15_tight_xe30_noMu", &L2_e15_tight_xe30_noMu, &b_L2_e15_tight_xe30_noMu);
   fChain->SetBranchAddress("L2_e18_medium", &L2_e18_medium, &b_L2_e18_medium);
   fChain->SetBranchAddress("L2_e18_medium_xe20_noMu", &L2_e18_medium_xe20_noMu, &b_L2_e18_medium_xe20_noMu);
   fChain->SetBranchAddress("L2_e18_tight", &L2_e18_tight, &b_L2_e18_tight);
   fChain->SetBranchAddress("L2_e20_L2Star_IDTrkNoCut", &L2_e20_L2Star_IDTrkNoCut, &b_L2_e20_L2Star_IDTrkNoCut);
   fChain->SetBranchAddress("L2_e20_etcut_xs45_noMu", &L2_e20_etcut_xs45_noMu, &b_L2_e20_etcut_xs45_noMu);
   fChain->SetBranchAddress("L2_e20_loose", &L2_e20_loose, &b_L2_e20_loose);
   fChain->SetBranchAddress("L2_e20_loose1", &L2_e20_loose1, &b_L2_e20_loose1);
   fChain->SetBranchAddress("L2_e20_looseTrk", &L2_e20_looseTrk, &b_L2_e20_looseTrk);
   fChain->SetBranchAddress("L2_e20_loose_2j10_a4tc_EFFS", &L2_e20_loose_2j10_a4tc_EFFS, &b_L2_e20_loose_2j10_a4tc_EFFS);
   fChain->SetBranchAddress("L2_e20_loose_3j10_a4tc_EFFS", &L2_e20_loose_3j10_a4tc_EFFS, &b_L2_e20_loose_3j10_a4tc_EFFS);
   fChain->SetBranchAddress("L2_e20_loose_4j10_a4tc_EFFS", &L2_e20_loose_4j10_a4tc_EFFS, &b_L2_e20_loose_4j10_a4tc_EFFS);
   fChain->SetBranchAddress("L2_e20_loose_IDTrkNoCut", &L2_e20_loose_IDTrkNoCut, &b_L2_e20_loose_IDTrkNoCut);
   fChain->SetBranchAddress("L2_e20_loose_TRT", &L2_e20_loose_TRT, &b_L2_e20_loose_TRT);
   fChain->SetBranchAddress("L2_e20_loose_xe20", &L2_e20_loose_xe20, &b_L2_e20_loose_xe20);
   fChain->SetBranchAddress("L2_e20_loose_xe20_noMu", &L2_e20_loose_xe20_noMu, &b_L2_e20_loose_xe20_noMu);
   fChain->SetBranchAddress("L2_e20_loose_xe30", &L2_e20_loose_xe30, &b_L2_e20_loose_xe30);
   fChain->SetBranchAddress("L2_e20_loose_xe30_noMu", &L2_e20_loose_xe30_noMu, &b_L2_e20_loose_xe30_noMu);
   fChain->SetBranchAddress("L2_e20_medium", &L2_e20_medium, &b_L2_e20_medium);
   fChain->SetBranchAddress("L2_e20_medium1", &L2_e20_medium1, &b_L2_e20_medium1);
   fChain->SetBranchAddress("L2_e20_medium2", &L2_e20_medium2, &b_L2_e20_medium2);
   fChain->SetBranchAddress("L2_e20_medium_IDTrkNoCut", &L2_e20_medium_IDTrkNoCut, &b_L2_e20_medium_IDTrkNoCut);
   fChain->SetBranchAddress("L2_e20_medium_SiTrk", &L2_e20_medium_SiTrk, &b_L2_e20_medium_SiTrk);
   fChain->SetBranchAddress("L2_e20_medium_TRT", &L2_e20_medium_TRT, &b_L2_e20_medium_TRT);
   fChain->SetBranchAddress("L2_e20_tight", &L2_e20_tight, &b_L2_e20_tight);
   fChain->SetBranchAddress("L2_e20_tight_e15_NoCut_Zee", &L2_e20_tight_e15_NoCut_Zee, &b_L2_e20_tight_e15_NoCut_Zee);
   fChain->SetBranchAddress("L2_e22_etcut_xs45_noMu", &L2_e22_etcut_xs45_noMu, &b_L2_e22_etcut_xs45_noMu);
   fChain->SetBranchAddress("L2_e22_loose", &L2_e22_loose, &b_L2_e22_loose);
   fChain->SetBranchAddress("L2_e22_loose1", &L2_e22_loose1, &b_L2_e22_loose1);
   fChain->SetBranchAddress("L2_e22_looseTrk", &L2_e22_looseTrk, &b_L2_e22_looseTrk);
   fChain->SetBranchAddress("L2_e22_medium", &L2_e22_medium, &b_L2_e22_medium);
   fChain->SetBranchAddress("L2_e22_medium1", &L2_e22_medium1, &b_L2_e22_medium1);
   fChain->SetBranchAddress("L2_e22_medium2", &L2_e22_medium2, &b_L2_e22_medium2);
   fChain->SetBranchAddress("L2_e22_medium_IDTrkNoCut", &L2_e22_medium_IDTrkNoCut, &b_L2_e22_medium_IDTrkNoCut);
   fChain->SetBranchAddress("L2_e22_medium_SiTrk", &L2_e22_medium_SiTrk, &b_L2_e22_medium_SiTrk);
   fChain->SetBranchAddress("L2_e22_medium_TRT", &L2_e22_medium_TRT, &b_L2_e22_medium_TRT);
   fChain->SetBranchAddress("L2_e22_tight", &L2_e22_tight, &b_L2_e22_tight);
   fChain->SetBranchAddress("L2_e25_loose", &L2_e25_loose, &b_L2_e25_loose);
   fChain->SetBranchAddress("L2_e25_medium", &L2_e25_medium, &b_L2_e25_medium);
   fChain->SetBranchAddress("L2_e30_loose", &L2_e30_loose, &b_L2_e30_loose);
   fChain->SetBranchAddress("L2_e30_medium", &L2_e30_medium, &b_L2_e30_medium);
   fChain->SetBranchAddress("L2_e33_medium", &L2_e33_medium, &b_L2_e33_medium);
   fChain->SetBranchAddress("L2_e35_medium", &L2_e35_medium, &b_L2_e35_medium);
   fChain->SetBranchAddress("L2_e40_medium", &L2_e40_medium, &b_L2_e40_medium);
   fChain->SetBranchAddress("L2_e45_medium", &L2_e45_medium, &b_L2_e45_medium);
   fChain->SetBranchAddress("L2_e45_medium1", &L2_e45_medium1, &b_L2_e45_medium1);
   fChain->SetBranchAddress("L2_e5_NoCut_L2SW", &L2_e5_NoCut_L2SW, &b_L2_e5_NoCut_L2SW);
   fChain->SetBranchAddress("L2_e5_NoCut_Ringer", &L2_e5_NoCut_Ringer, &b_L2_e5_NoCut_Ringer);
   fChain->SetBranchAddress("L2_e5_NoCut_firstempty", &L2_e5_NoCut_firstempty, &b_L2_e5_NoCut_firstempty);
   fChain->SetBranchAddress("L2_e5_medium_mu4", &L2_e5_medium_mu4, &b_L2_e5_medium_mu4);
   fChain->SetBranchAddress("L2_e5_medium_mu6", &L2_e5_medium_mu6, &b_L2_e5_medium_mu6);
   fChain->SetBranchAddress("L2_e5_medium_mu6_topo_loose", &L2_e5_medium_mu6_topo_loose, &b_L2_e5_medium_mu6_topo_loose);
   fChain->SetBranchAddress("L2_e5_medium_mu6_topo_medium", &L2_e5_medium_mu6_topo_medium, &b_L2_e5_medium_mu6_topo_medium);
   fChain->SetBranchAddress("L2_e5_tight", &L2_e5_tight, &b_L2_e5_tight);
   fChain->SetBranchAddress("L2_e5_tight_TRT", &L2_e5_tight_TRT, &b_L2_e5_tight_TRT);
   fChain->SetBranchAddress("L2_e5_tight_e14_etcut_Jpsi", &L2_e5_tight_e14_etcut_Jpsi, &b_L2_e5_tight_e14_etcut_Jpsi);
   fChain->SetBranchAddress("L2_e5_tight_e4_etcut_Jpsi", &L2_e5_tight_e4_etcut_Jpsi, &b_L2_e5_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("L2_e5_tight_e4_etcut_Jpsi_SiTrk", &L2_e5_tight_e4_etcut_Jpsi_SiTrk, &b_L2_e5_tight_e4_etcut_Jpsi_SiTrk);
   fChain->SetBranchAddress("L2_e5_tight_e4_etcut_Jpsi_TRT", &L2_e5_tight_e4_etcut_Jpsi_TRT, &b_L2_e5_tight_e4_etcut_Jpsi_TRT);
   fChain->SetBranchAddress("L2_e5_tight_e5_NoCut", &L2_e5_tight_e5_NoCut, &b_L2_e5_tight_e5_NoCut);
   fChain->SetBranchAddress("L2_e5_tight_e5_NoCut_Jpsi", &L2_e5_tight_e5_NoCut_Jpsi, &b_L2_e5_tight_e5_NoCut_Jpsi);
   fChain->SetBranchAddress("L2_e5_tight_e7_etcut_Jpsi", &L2_e5_tight_e7_etcut_Jpsi, &b_L2_e5_tight_e7_etcut_Jpsi);
   fChain->SetBranchAddress("L2_e5_tight_e9_etcut_Jpsi", &L2_e5_tight_e9_etcut_Jpsi, &b_L2_e5_tight_e9_etcut_Jpsi);
   fChain->SetBranchAddress("L2_e60_loose", &L2_e60_loose, &b_L2_e60_loose);
   fChain->SetBranchAddress("L2_e6T_medium", &L2_e6T_medium, &b_L2_e6T_medium);
   fChain->SetBranchAddress("L2_e7_tight_e14_etcut_Jpsi", &L2_e7_tight_e14_etcut_Jpsi, &b_L2_e7_tight_e14_etcut_Jpsi);
   fChain->SetBranchAddress("L2_e9_tight_e5_tight_Jpsi", &L2_e9_tight_e5_tight_Jpsi, &b_L2_e9_tight_e5_tight_Jpsi);
   fChain->SetBranchAddress("L2_eb_physics", &L2_eb_physics, &b_L2_eb_physics);
   fChain->SetBranchAddress("L2_eb_physics_empty", &L2_eb_physics_empty, &b_L2_eb_physics_empty);
   fChain->SetBranchAddress("L2_eb_physics_firstempty", &L2_eb_physics_firstempty, &b_L2_eb_physics_firstempty);
   fChain->SetBranchAddress("L2_eb_physics_noL1PS", &L2_eb_physics_noL1PS, &b_L2_eb_physics_noL1PS);
   fChain->SetBranchAddress("L2_eb_physics_unpaired_iso", &L2_eb_physics_unpaired_iso, &b_L2_eb_physics_unpaired_iso);
   fChain->SetBranchAddress("L2_eb_physics_unpaired_noniso", &L2_eb_physics_unpaired_noniso, &b_L2_eb_physics_unpaired_noniso);
   fChain->SetBranchAddress("L2_eb_random", &L2_eb_random, &b_L2_eb_random);
   fChain->SetBranchAddress("L2_eb_random_empty", &L2_eb_random_empty, &b_L2_eb_random_empty);
   fChain->SetBranchAddress("L2_eb_random_firstempty", &L2_eb_random_firstempty, &b_L2_eb_random_firstempty);
   fChain->SetBranchAddress("L2_eb_random_unpaired_iso", &L2_eb_random_unpaired_iso, &b_L2_eb_random_unpaired_iso);
   fChain->SetBranchAddress("L2_em105_passHLT", &L2_em105_passHLT, &b_L2_em105_passHLT);
   fChain->SetBranchAddress("L2_em3_empty_larcalib", &L2_em3_empty_larcalib, &b_L2_em3_empty_larcalib);
   fChain->SetBranchAddress("L2_em5_empty_larcalib", &L2_em5_empty_larcalib, &b_L2_em5_empty_larcalib);
   fChain->SetBranchAddress("L2_g100_etcut_g50_etcut", &L2_g100_etcut_g50_etcut, &b_L2_g100_etcut_g50_etcut);
   fChain->SetBranchAddress("L2_g100_loose", &L2_g100_loose, &b_L2_g100_loose);
   fChain->SetBranchAddress("L2_g10_NoCut_cosmic", &L2_g10_NoCut_cosmic, &b_L2_g10_NoCut_cosmic);
   fChain->SetBranchAddress("L2_g11_etcut", &L2_g11_etcut, &b_L2_g11_etcut);
   fChain->SetBranchAddress("L2_g13_etcut_xs45_noMu", &L2_g13_etcut_xs45_noMu, &b_L2_g13_etcut_xs45_noMu);
   fChain->SetBranchAddress("L2_g150_etcut", &L2_g150_etcut, &b_L2_g150_etcut);
   fChain->SetBranchAddress("L2_g15_loose", &L2_g15_loose, &b_L2_g15_loose);
   fChain->SetBranchAddress("L2_g17_etcut", &L2_g17_etcut, &b_L2_g17_etcut);
   fChain->SetBranchAddress("L2_g17_etcut_EFxe20_noMu", &L2_g17_etcut_EFxe20_noMu, &b_L2_g17_etcut_EFxe20_noMu);
   fChain->SetBranchAddress("L2_g17_etcut_EFxe30_noMu", &L2_g17_etcut_EFxe30_noMu, &b_L2_g17_etcut_EFxe30_noMu);
   fChain->SetBranchAddress("L2_g20_etcut", &L2_g20_etcut, &b_L2_g20_etcut);
   fChain->SetBranchAddress("L2_g20_etcut_xe30_noMu", &L2_g20_etcut_xe30_noMu, &b_L2_g20_etcut_xe30_noMu);
   fChain->SetBranchAddress("L2_g20_loose", &L2_g20_loose, &b_L2_g20_loose);
   fChain->SetBranchAddress("L2_g20_loose_cnv", &L2_g20_loose_cnv, &b_L2_g20_loose_cnv);
   fChain->SetBranchAddress("L2_g20_loose_xe20_noMu", &L2_g20_loose_xe20_noMu, &b_L2_g20_loose_xe20_noMu);
   fChain->SetBranchAddress("L2_g20_loose_xe30_noMu", &L2_g20_loose_xe30_noMu, &b_L2_g20_loose_xe30_noMu);
   fChain->SetBranchAddress("L2_g20_tight", &L2_g20_tight, &b_L2_g20_tight);
   fChain->SetBranchAddress("L2_g22_hiptrt", &L2_g22_hiptrt, &b_L2_g22_hiptrt);
   fChain->SetBranchAddress("L2_g25_loose_xe30_noMu", &L2_g25_loose_xe30_noMu, &b_L2_g25_loose_xe30_noMu);
   fChain->SetBranchAddress("L2_g27_etcut", &L2_g27_etcut, &b_L2_g27_etcut);
   fChain->SetBranchAddress("L2_g27_etcut_EFxe30_noMu", &L2_g27_etcut_EFxe30_noMu, &b_L2_g27_etcut_EFxe30_noMu);
   fChain->SetBranchAddress("L2_g30_loose_g20_loose", &L2_g30_loose_g20_loose, &b_L2_g30_loose_g20_loose);
   fChain->SetBranchAddress("L2_g40_loose", &L2_g40_loose, &b_L2_g40_loose);
   fChain->SetBranchAddress("L2_g40_loose_EFxe35_noMu", &L2_g40_loose_EFxe35_noMu, &b_L2_g40_loose_EFxe35_noMu);
   fChain->SetBranchAddress("L2_g40_loose_EFxe40_noMu", &L2_g40_loose_EFxe40_noMu, &b_L2_g40_loose_EFxe40_noMu);
   fChain->SetBranchAddress("L2_g40_loose_b10_medium", &L2_g40_loose_b10_medium, &b_L2_g40_loose_b10_medium);
   fChain->SetBranchAddress("L2_g40_loose_xe30_medium_noMu", &L2_g40_loose_xe30_medium_noMu, &b_L2_g40_loose_xe30_medium_noMu);
   fChain->SetBranchAddress("L2_g40_loose_xe35_medium_noMu", &L2_g40_loose_xe35_medium_noMu, &b_L2_g40_loose_xe35_medium_noMu);
   fChain->SetBranchAddress("L2_g40_loose_xe40_noMu", &L2_g40_loose_xe40_noMu, &b_L2_g40_loose_xe40_noMu);
   fChain->SetBranchAddress("L2_g40_loose_xs35_noMu", &L2_g40_loose_xs35_noMu, &b_L2_g40_loose_xs35_noMu);
   fChain->SetBranchAddress("L2_g40_tight", &L2_g40_tight, &b_L2_g40_tight);
   fChain->SetBranchAddress("L2_g40_tight_b10_medium", &L2_g40_tight_b10_medium, &b_L2_g40_tight_b10_medium);
   fChain->SetBranchAddress("L2_g40_tight_b15_medium", &L2_g40_tight_b15_medium, &b_L2_g40_tight_b15_medium);
   fChain->SetBranchAddress("L2_g50_loose", &L2_g50_loose, &b_L2_g50_loose);
   fChain->SetBranchAddress("L2_g5_NoCut_cosmic", &L2_g5_NoCut_cosmic, &b_L2_g5_NoCut_cosmic);
   fChain->SetBranchAddress("L2_g60_loose", &L2_g60_loose, &b_L2_g60_loose);
   fChain->SetBranchAddress("L2_g80_loose", &L2_g80_loose, &b_L2_g80_loose);
   fChain->SetBranchAddress("L2_j50_xe35_medium_noMu", &L2_j50_xe35_medium_noMu, &b_L2_j50_xe35_medium_noMu);
   fChain->SetBranchAddress("L2_j50_xe35_medium_noMu_l2cleancons", &L2_j50_xe35_medium_noMu_l2cleancons, &b_L2_j50_xe35_medium_noMu_l2cleancons);
   fChain->SetBranchAddress("L2_j60_xe45_noMu", &L2_j60_xe45_noMu, &b_L2_j60_xe45_noMu);
   fChain->SetBranchAddress("L2_j70_xe20_loose_noMu", &L2_j70_xe20_loose_noMu, &b_L2_j70_xe20_loose_noMu);
   fChain->SetBranchAddress("L2_j70_xe25_loose_noMu", &L2_j70_xe25_loose_noMu, &b_L2_j70_xe25_loose_noMu);
   fChain->SetBranchAddress("L2_j70_xe35_noMu", &L2_j70_xe35_noMu, &b_L2_j70_xe35_noMu);
   fChain->SetBranchAddress("L2_j70_xe35_noMu_l2cleancons", &L2_j70_xe35_noMu_l2cleancons, &b_L2_j70_xe35_noMu_l2cleancons);
   fChain->SetBranchAddress("L2_j75_xe40_noMu", &L2_j75_xe40_noMu, &b_L2_j75_xe40_noMu);
   fChain->SetBranchAddress("L2_mu10", &L2_mu10, &b_L2_mu10);
   fChain->SetBranchAddress("L2_mu13", &L2_mu13, &b_L2_mu13);
   fChain->SetBranchAddress("L2_mu15_xe20_noMu", &L2_mu15_xe20_noMu, &b_L2_mu15_xe20_noMu);
   fChain->SetBranchAddress("L2_mu20", &L2_mu20, &b_L2_mu20);
   fChain->SetBranchAddress("L2_mu20_MSonly", &L2_mu20_MSonly, &b_L2_mu20_MSonly);
   fChain->SetBranchAddress("L2_mu4", &L2_mu4, &b_L2_mu4);
   fChain->SetBranchAddress("L2_mu4_j40_xe20_loose_noMu", &L2_mu4_j40_xe20_loose_noMu, &b_L2_mu4_j40_xe20_loose_noMu);
   fChain->SetBranchAddress("L2_mu6", &L2_mu6, &b_L2_mu6);
   fChain->SetBranchAddress("L2_tau16_j70_xe20_loose_noMu", &L2_tau16_j70_xe20_loose_noMu, &b_L2_tau16_j70_xe20_loose_noMu);
   fChain->SetBranchAddress("L2_tau16_loose_xe20_noMu", &L2_tau16_loose_xe20_noMu, &b_L2_tau16_loose_xe20_noMu);
   fChain->SetBranchAddress("L2_tau16_loose_xe25_noMu", &L2_tau16_loose_xe25_noMu, &b_L2_tau16_loose_xe25_noMu);
   fChain->SetBranchAddress("L2_tau16_loose_xe30_noMu", &L2_tau16_loose_xe30_noMu, &b_L2_tau16_loose_xe30_noMu);
   fChain->SetBranchAddress("L2_tau16_medium_xe22_noMu", &L2_tau16_medium_xe22_noMu, &b_L2_tau16_medium_xe22_noMu);
   fChain->SetBranchAddress("L2_tau16_medium_xe25_noMu", &L2_tau16_medium_xe25_noMu, &b_L2_tau16_medium_xe25_noMu);
   fChain->SetBranchAddress("L2_tau16_medium_xe25_tight_noMu", &L2_tau16_medium_xe25_tight_noMu, &b_L2_tau16_medium_xe25_tight_noMu);
   fChain->SetBranchAddress("L2_tau29_loose_j40_xe20_noMu", &L2_tau29_loose_j40_xe20_noMu, &b_L2_tau29_loose_j40_xe20_noMu);
   fChain->SetBranchAddress("L2_tau29_medium_xe25_noMu", &L2_tau29_medium_xe25_noMu, &b_L2_tau29_medium_xe25_noMu);
   fChain->SetBranchAddress("L2_tau29_medium_xe30_loose_noMu", &L2_tau29_medium_xe30_loose_noMu, &b_L2_tau29_medium_xe30_loose_noMu);
   fChain->SetBranchAddress("L2_xe10_noMu", &L2_xe10_noMu, &b_L2_xe10_noMu);
   fChain->SetBranchAddress("L2_xe20_noMu", &L2_xe20_noMu, &b_L2_xe20_noMu);
   fChain->SetBranchAddress("L2_xe25_noMu", &L2_xe25_noMu, &b_L2_xe25_noMu);
   fChain->SetBranchAddress("L2_xe30_noMu", &L2_xe30_noMu, &b_L2_xe30_noMu);
   fChain->SetBranchAddress("L2_xe35_noMu", &L2_xe35_noMu, &b_L2_xe35_noMu);
   fChain->SetBranchAddress("L2_xe40_noMu", &L2_xe40_noMu, &b_L2_xe40_noMu);
   fChain->SetBranchAddress("L2_xe45_noMu", &L2_xe45_noMu, &b_L2_xe45_noMu);
   fChain->SetBranchAddress("L2_xe50_noMu", &L2_xe50_noMu, &b_L2_xe50_noMu);
   fChain->SetBranchAddress("L2_xe55_noMu", &L2_xe55_noMu, &b_L2_xe55_noMu);
   fChain->SetBranchAddress("L2_xe60_noMu", &L2_xe60_noMu, &b_L2_xe60_noMu);
   fChain->SetBranchAddress("L2_xe70_noMu", &L2_xe70_noMu, &b_L2_xe70_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_2e10_medium", &trig_L2_el_L2_2e10_medium, &b_trig_L2_el_L2_2e10_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_2e10_medium_mu6", &trig_L2_el_L2_2e10_medium_mu6, &b_trig_L2_el_L2_2e10_medium_mu6);
   fChain->SetBranchAddress("trig_L2_el_L2_2e11T_medium", &trig_L2_el_L2_2e11T_medium, &b_trig_L2_el_L2_2e11T_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_2e12T_medium", &trig_L2_el_L2_2e12T_medium, &b_trig_L2_el_L2_2e12T_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_2e12_medium", &trig_L2_el_L2_2e12_medium, &b_trig_L2_el_L2_2e12_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_2e15_loose", &trig_L2_el_L2_2e15_loose, &b_trig_L2_el_L2_2e15_loose);
   fChain->SetBranchAddress("trig_L2_el_L2_2e15_medium", &trig_L2_el_L2_2e15_medium, &b_trig_L2_el_L2_2e15_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_2e5_medium", &trig_L2_el_L2_2e5_medium, &b_trig_L2_el_L2_2e5_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_2e5_medium_SiTrk", &trig_L2_el_L2_2e5_medium_SiTrk, &b_trig_L2_el_L2_2e5_medium_SiTrk);
   fChain->SetBranchAddress("trig_L2_el_L2_2e5_medium_TRT", &trig_L2_el_L2_2e5_medium_TRT, &b_trig_L2_el_L2_2e5_medium_TRT);
   fChain->SetBranchAddress("trig_L2_el_L2_2e5_tight", &trig_L2_el_L2_2e5_tight, &b_trig_L2_el_L2_2e5_tight);
   fChain->SetBranchAddress("trig_L2_el_L2_2e5_tight_Jpsi", &trig_L2_el_L2_2e5_tight_Jpsi, &b_trig_L2_el_L2_2e5_tight_Jpsi);
   fChain->SetBranchAddress("trig_L2_el_L2_e10_NoCut", &trig_L2_el_L2_e10_NoCut, &b_trig_L2_el_L2_e10_NoCut);
   fChain->SetBranchAddress("trig_L2_el_L2_e10_loose", &trig_L2_el_L2_e10_loose, &b_trig_L2_el_L2_e10_loose);
   fChain->SetBranchAddress("trig_L2_el_L2_e10_loose_mu10", &trig_L2_el_L2_e10_loose_mu10, &b_trig_L2_el_L2_e10_loose_mu10);
   fChain->SetBranchAddress("trig_L2_el_L2_e10_loose_mu6", &trig_L2_el_L2_e10_loose_mu6, &b_trig_L2_el_L2_e10_loose_mu6);
   fChain->SetBranchAddress("trig_L2_el_L2_e10_medium", &trig_L2_el_L2_e10_medium, &b_trig_L2_el_L2_e10_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e10_medium_2mu6", &trig_L2_el_L2_e10_medium_2mu6, &b_trig_L2_el_L2_e10_medium_2mu6);
   fChain->SetBranchAddress("trig_L2_el_L2_e10_medium_mu10", &trig_L2_el_L2_e10_medium_mu10, &b_trig_L2_el_L2_e10_medium_mu10);
   fChain->SetBranchAddress("trig_L2_el_L2_e10_medium_mu6", &trig_L2_el_L2_e10_medium_mu6, &b_trig_L2_el_L2_e10_medium_mu6);
   fChain->SetBranchAddress("trig_L2_el_L2_e10_medium_mu6_topo_medium", &trig_L2_el_L2_e10_medium_mu6_topo_medium, &b_trig_L2_el_L2_e10_medium_mu6_topo_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e11T_medium", &trig_L2_el_L2_e11T_medium, &b_trig_L2_el_L2_e11T_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e11T_medium_2e6T_medium", &trig_L2_el_L2_e11T_medium_2e6T_medium, &b_trig_L2_el_L2_e11T_medium_2e6T_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e11_etcut", &trig_L2_el_L2_e11_etcut, &b_trig_L2_el_L2_e11_etcut);
   fChain->SetBranchAddress("trig_L2_el_L2_e12T_medium_mu6_topo_medium", &trig_L2_el_L2_e12T_medium_mu6_topo_medium, &b_trig_L2_el_L2_e12T_medium_mu6_topo_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e12_medium", &trig_L2_el_L2_e12_medium, &b_trig_L2_el_L2_e12_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e13_etcut_xs45_noMu", &trig_L2_el_L2_e13_etcut_xs45_noMu, &b_trig_L2_el_L2_e13_etcut_xs45_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_HLTtighter", &trig_L2_el_L2_e15_HLTtighter, &b_trig_L2_el_L2_e15_HLTtighter);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_loose", &trig_L2_el_L2_e15_loose, &b_trig_L2_el_L2_e15_loose);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_medium", &trig_L2_el_L2_e15_medium, &b_trig_L2_el_L2_e15_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_medium_e12_medium", &trig_L2_el_L2_e15_medium_e12_medium, &b_trig_L2_el_L2_e15_medium_e12_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_medium_mu6", &trig_L2_el_L2_e15_medium_mu6, &b_trig_L2_el_L2_e15_medium_mu6);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_medium_xe20_noMu", &trig_L2_el_L2_e15_medium_xe20_noMu, &b_trig_L2_el_L2_e15_medium_xe20_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_medium_xe25_noMu", &trig_L2_el_L2_e15_medium_xe25_noMu, &b_trig_L2_el_L2_e15_medium_xe25_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_medium_xe30_noMu", &trig_L2_el_L2_e15_medium_xe30_noMu, &b_trig_L2_el_L2_e15_medium_xe30_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_medium_xe35_noMu", &trig_L2_el_L2_e15_medium_xe35_noMu, &b_trig_L2_el_L2_e15_medium_xe35_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_medium_xe40_loose_noMu", &trig_L2_el_L2_e15_medium_xe40_loose_noMu, &b_trig_L2_el_L2_e15_medium_xe40_loose_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_tight", &trig_L2_el_L2_e15_tight, &b_trig_L2_el_L2_e15_tight);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_tight1", &trig_L2_el_L2_e15_tight1, &b_trig_L2_el_L2_e15_tight1);
   fChain->SetBranchAddress("trig_L2_el_L2_e15_tight_xe30_noMu", &trig_L2_el_L2_e15_tight_xe30_noMu, &b_trig_L2_el_L2_e15_tight_xe30_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e18_medium", &trig_L2_el_L2_e18_medium, &b_trig_L2_el_L2_e18_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e18_medium_xe20_noMu", &trig_L2_el_L2_e18_medium_xe20_noMu, &b_trig_L2_el_L2_e18_medium_xe20_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e18_tight", &trig_L2_el_L2_e18_tight, &b_trig_L2_el_L2_e18_tight);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_L2Star_IDTrkNoCut", &trig_L2_el_L2_e20_L2Star_IDTrkNoCut, &b_trig_L2_el_L2_e20_L2Star_IDTrkNoCut);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_etcut_xs45_noMu", &trig_L2_el_L2_e20_etcut_xs45_noMu, &b_trig_L2_el_L2_e20_etcut_xs45_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_loose", &trig_L2_el_L2_e20_loose, &b_trig_L2_el_L2_e20_loose);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_loose1", &trig_L2_el_L2_e20_loose1, &b_trig_L2_el_L2_e20_loose1);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_looseTrk", &trig_L2_el_L2_e20_looseTrk, &b_trig_L2_el_L2_e20_looseTrk);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_loose_2j10_a4tc_EFFS", &trig_L2_el_L2_e20_loose_2j10_a4tc_EFFS, &b_trig_L2_el_L2_e20_loose_2j10_a4tc_EFFS);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_loose_3j10_a4tc_EFFS", &trig_L2_el_L2_e20_loose_3j10_a4tc_EFFS, &b_trig_L2_el_L2_e20_loose_3j10_a4tc_EFFS);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_loose_4j10_a4tc_EFFS", &trig_L2_el_L2_e20_loose_4j10_a4tc_EFFS, &b_trig_L2_el_L2_e20_loose_4j10_a4tc_EFFS);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_loose_IDTrkNoCut", &trig_L2_el_L2_e20_loose_IDTrkNoCut, &b_trig_L2_el_L2_e20_loose_IDTrkNoCut);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_loose_TRT", &trig_L2_el_L2_e20_loose_TRT, &b_trig_L2_el_L2_e20_loose_TRT);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_loose_xe20", &trig_L2_el_L2_e20_loose_xe20, &b_trig_L2_el_L2_e20_loose_xe20);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_loose_xe20_noMu", &trig_L2_el_L2_e20_loose_xe20_noMu, &b_trig_L2_el_L2_e20_loose_xe20_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_loose_xe30", &trig_L2_el_L2_e20_loose_xe30, &b_trig_L2_el_L2_e20_loose_xe30);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_loose_xe30_noMu", &trig_L2_el_L2_e20_loose_xe30_noMu, &b_trig_L2_el_L2_e20_loose_xe30_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_medium", &trig_L2_el_L2_e20_medium, &b_trig_L2_el_L2_e20_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_medium1", &trig_L2_el_L2_e20_medium1, &b_trig_L2_el_L2_e20_medium1);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_medium2", &trig_L2_el_L2_e20_medium2, &b_trig_L2_el_L2_e20_medium2);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_medium_IDTrkNoCut", &trig_L2_el_L2_e20_medium_IDTrkNoCut, &b_trig_L2_el_L2_e20_medium_IDTrkNoCut);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_medium_SiTrk", &trig_L2_el_L2_e20_medium_SiTrk, &b_trig_L2_el_L2_e20_medium_SiTrk);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_medium_TRT", &trig_L2_el_L2_e20_medium_TRT, &b_trig_L2_el_L2_e20_medium_TRT);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_tight", &trig_L2_el_L2_e20_tight, &b_trig_L2_el_L2_e20_tight);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_tight_e15_NoCut_Zee", &trig_L2_el_L2_e20_tight_e15_NoCut_Zee, &b_trig_L2_el_L2_e20_tight_e15_NoCut_Zee);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_etcut_xs45_noMu", &trig_L2_el_L2_e22_etcut_xs45_noMu, &b_trig_L2_el_L2_e22_etcut_xs45_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_loose", &trig_L2_el_L2_e22_loose, &b_trig_L2_el_L2_e22_loose);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_loose1", &trig_L2_el_L2_e22_loose1, &b_trig_L2_el_L2_e22_loose1);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_looseTrk", &trig_L2_el_L2_e22_looseTrk, &b_trig_L2_el_L2_e22_looseTrk);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_medium", &trig_L2_el_L2_e22_medium, &b_trig_L2_el_L2_e22_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_medium1", &trig_L2_el_L2_e22_medium1, &b_trig_L2_el_L2_e22_medium1);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_medium2", &trig_L2_el_L2_e22_medium2, &b_trig_L2_el_L2_e22_medium2);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_medium_IDTrkNoCut", &trig_L2_el_L2_e22_medium_IDTrkNoCut, &b_trig_L2_el_L2_e22_medium_IDTrkNoCut);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_medium_SiTrk", &trig_L2_el_L2_e22_medium_SiTrk, &b_trig_L2_el_L2_e22_medium_SiTrk);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_medium_TRT", &trig_L2_el_L2_e22_medium_TRT, &b_trig_L2_el_L2_e22_medium_TRT);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_tight", &trig_L2_el_L2_e22_tight, &b_trig_L2_el_L2_e22_tight);
   fChain->SetBranchAddress("trig_L2_el_L2_e25_loose", &trig_L2_el_L2_e25_loose, &b_trig_L2_el_L2_e25_loose);
   fChain->SetBranchAddress("trig_L2_el_L2_e25_medium", &trig_L2_el_L2_e25_medium, &b_trig_L2_el_L2_e25_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e30_loose", &trig_L2_el_L2_e30_loose, &b_trig_L2_el_L2_e30_loose);
   fChain->SetBranchAddress("trig_L2_el_L2_e30_medium", &trig_L2_el_L2_e30_medium, &b_trig_L2_el_L2_e30_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e33_medium", &trig_L2_el_L2_e33_medium, &b_trig_L2_el_L2_e33_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e35_medium", &trig_L2_el_L2_e35_medium, &b_trig_L2_el_L2_e35_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e40_medium", &trig_L2_el_L2_e40_medium, &b_trig_L2_el_L2_e40_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e45_medium", &trig_L2_el_L2_e45_medium, &b_trig_L2_el_L2_e45_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e45_medium1", &trig_L2_el_L2_e45_medium1, &b_trig_L2_el_L2_e45_medium1);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_NoCut_L2SW", &trig_L2_el_L2_e5_NoCut_L2SW, &b_trig_L2_el_L2_e5_NoCut_L2SW);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_NoCut_Ringer", &trig_L2_el_L2_e5_NoCut_Ringer, &b_trig_L2_el_L2_e5_NoCut_Ringer);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_NoCut_firstempty", &trig_L2_el_L2_e5_NoCut_firstempty, &b_trig_L2_el_L2_e5_NoCut_firstempty);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_medium_mu4", &trig_L2_el_L2_e5_medium_mu4, &b_trig_L2_el_L2_e5_medium_mu4);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_medium_mu6", &trig_L2_el_L2_e5_medium_mu6, &b_trig_L2_el_L2_e5_medium_mu6);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_medium_mu6_topo_loose", &trig_L2_el_L2_e5_medium_mu6_topo_loose, &b_trig_L2_el_L2_e5_medium_mu6_topo_loose);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_medium_mu6_topo_medium", &trig_L2_el_L2_e5_medium_mu6_topo_medium, &b_trig_L2_el_L2_e5_medium_mu6_topo_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_tight", &trig_L2_el_L2_e5_tight, &b_trig_L2_el_L2_e5_tight);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_tight_TRT", &trig_L2_el_L2_e5_tight_TRT, &b_trig_L2_el_L2_e5_tight_TRT);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_tight_e14_etcut_Jpsi", &trig_L2_el_L2_e5_tight_e14_etcut_Jpsi, &b_trig_L2_el_L2_e5_tight_e14_etcut_Jpsi);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_tight_e4_etcut_Jpsi", &trig_L2_el_L2_e5_tight_e4_etcut_Jpsi, &b_trig_L2_el_L2_e5_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_SiTrk", &trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_SiTrk, &b_trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_SiTrk);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_TRT", &trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_TRT, &b_trig_L2_el_L2_e5_tight_e4_etcut_Jpsi_TRT);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_tight_e5_NoCut", &trig_L2_el_L2_e5_tight_e5_NoCut, &b_trig_L2_el_L2_e5_tight_e5_NoCut);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_tight_e5_NoCut_Jpsi", &trig_L2_el_L2_e5_tight_e5_NoCut_Jpsi, &b_trig_L2_el_L2_e5_tight_e5_NoCut_Jpsi);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_tight_e7_etcut_Jpsi", &trig_L2_el_L2_e5_tight_e7_etcut_Jpsi, &b_trig_L2_el_L2_e5_tight_e7_etcut_Jpsi);
   fChain->SetBranchAddress("trig_L2_el_L2_e5_tight_e9_etcut_Jpsi", &trig_L2_el_L2_e5_tight_e9_etcut_Jpsi, &b_trig_L2_el_L2_e5_tight_e9_etcut_Jpsi);
   fChain->SetBranchAddress("trig_L2_el_L2_e60_loose", &trig_L2_el_L2_e60_loose, &b_trig_L2_el_L2_e60_loose);
   fChain->SetBranchAddress("trig_L2_el_L2_e6T_medium", &trig_L2_el_L2_e6T_medium, &b_trig_L2_el_L2_e6T_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e7_tight_e14_etcut_Jpsi", &trig_L2_el_L2_e7_tight_e14_etcut_Jpsi, &b_trig_L2_el_L2_e7_tight_e14_etcut_Jpsi);
   fChain->SetBranchAddress("trig_L2_el_L2_e9_tight_e5_tight_Jpsi", &trig_L2_el_L2_e9_tight_e5_tight_Jpsi, &b_trig_L2_el_L2_e9_tight_e5_tight_Jpsi);
   fChain->SetBranchAddress("trig_L2_el_L2_eb_physics", &trig_L2_el_L2_eb_physics, &b_trig_L2_el_L2_eb_physics);
   fChain->SetBranchAddress("trig_L2_el_L2_eb_physics_empty", &trig_L2_el_L2_eb_physics_empty, &b_trig_L2_el_L2_eb_physics_empty);
   fChain->SetBranchAddress("trig_L2_el_L2_eb_physics_firstempty", &trig_L2_el_L2_eb_physics_firstempty, &b_trig_L2_el_L2_eb_physics_firstempty);
   fChain->SetBranchAddress("trig_L2_el_L2_eb_physics_noL1PS", &trig_L2_el_L2_eb_physics_noL1PS, &b_trig_L2_el_L2_eb_physics_noL1PS);
   fChain->SetBranchAddress("trig_L2_el_L2_eb_physics_unpaired_iso", &trig_L2_el_L2_eb_physics_unpaired_iso, &b_trig_L2_el_L2_eb_physics_unpaired_iso);
   fChain->SetBranchAddress("trig_L2_el_L2_eb_physics_unpaired_noniso", &trig_L2_el_L2_eb_physics_unpaired_noniso, &b_trig_L2_el_L2_eb_physics_unpaired_noniso);
   fChain->SetBranchAddress("trig_L2_el_L2_eb_random", &trig_L2_el_L2_eb_random, &b_trig_L2_el_L2_eb_random);
   fChain->SetBranchAddress("trig_L2_el_L2_eb_random_empty", &trig_L2_el_L2_eb_random_empty, &b_trig_L2_el_L2_eb_random_empty);
   fChain->SetBranchAddress("trig_L2_el_L2_eb_random_firstempty", &trig_L2_el_L2_eb_random_firstempty, &b_trig_L2_el_L2_eb_random_firstempty);
   fChain->SetBranchAddress("trig_L2_el_L2_eb_random_unpaired_iso", &trig_L2_el_L2_eb_random_unpaired_iso, &b_trig_L2_el_L2_eb_random_unpaired_iso);
   fChain->SetBranchAddress("trig_L2_el_L2_em105_passHLT", &trig_L2_el_L2_em105_passHLT, &b_trig_L2_el_L2_em105_passHLT);
   fChain->SetBranchAddress("trig_L2_el_L2_em3_empty_larcalib", &trig_L2_el_L2_em3_empty_larcalib, &b_trig_L2_el_L2_em3_empty_larcalib);
   fChain->SetBranchAddress("trig_L2_el_L2_em5_empty_larcalib", &trig_L2_el_L2_em5_empty_larcalib, &b_trig_L2_el_L2_em5_empty_larcalib);
   fChain->SetBranchAddress("trig_L2_ph_L2_2g10_loose", &trig_L2_ph_L2_2g10_loose, &b_trig_L2_ph_L2_2g10_loose);
   fChain->SetBranchAddress("trig_L2_ph_L2_2g15_loose", &trig_L2_ph_L2_2g15_loose, &b_trig_L2_ph_L2_2g15_loose);
   fChain->SetBranchAddress("trig_L2_ph_L2_2g20_loose", &trig_L2_ph_L2_2g20_loose, &b_trig_L2_ph_L2_2g20_loose);
   fChain->SetBranchAddress("trig_L2_ph_L2_2g50_etcut", &trig_L2_ph_L2_2g50_etcut, &b_trig_L2_ph_L2_2g50_etcut);
   fChain->SetBranchAddress("trig_L2_ph_L2_g100_etcut_g50_etcut", &trig_L2_ph_L2_g100_etcut_g50_etcut, &b_trig_L2_ph_L2_g100_etcut_g50_etcut);
   fChain->SetBranchAddress("trig_L2_ph_L2_g100_loose", &trig_L2_ph_L2_g100_loose, &b_trig_L2_ph_L2_g100_loose);
   fChain->SetBranchAddress("trig_L2_ph_L2_g10_NoCut_cosmic", &trig_L2_ph_L2_g10_NoCut_cosmic, &b_trig_L2_ph_L2_g10_NoCut_cosmic);
   fChain->SetBranchAddress("trig_L2_ph_L2_g11_etcut", &trig_L2_ph_L2_g11_etcut, &b_trig_L2_ph_L2_g11_etcut);
   fChain->SetBranchAddress("trig_L2_ph_L2_g13_etcut_xs45_noMu", &trig_L2_ph_L2_g13_etcut_xs45_noMu, &b_trig_L2_ph_L2_g13_etcut_xs45_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g150_etcut", &trig_L2_ph_L2_g150_etcut, &b_trig_L2_ph_L2_g150_etcut);
   fChain->SetBranchAddress("trig_L2_ph_L2_g15_loose", &trig_L2_ph_L2_g15_loose, &b_trig_L2_ph_L2_g15_loose);
   fChain->SetBranchAddress("trig_L2_ph_L2_g17_etcut", &trig_L2_ph_L2_g17_etcut, &b_trig_L2_ph_L2_g17_etcut);
   fChain->SetBranchAddress("trig_L2_ph_L2_g17_etcut_EFxe20_noMu", &trig_L2_ph_L2_g17_etcut_EFxe20_noMu, &b_trig_L2_ph_L2_g17_etcut_EFxe20_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g17_etcut_EFxe30_noMu", &trig_L2_ph_L2_g17_etcut_EFxe30_noMu, &b_trig_L2_ph_L2_g17_etcut_EFxe30_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g20_etcut", &trig_L2_ph_L2_g20_etcut, &b_trig_L2_ph_L2_g20_etcut);
   fChain->SetBranchAddress("trig_L2_ph_L2_g20_etcut_xe30_noMu", &trig_L2_ph_L2_g20_etcut_xe30_noMu, &b_trig_L2_ph_L2_g20_etcut_xe30_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g20_loose", &trig_L2_ph_L2_g20_loose, &b_trig_L2_ph_L2_g20_loose);
   fChain->SetBranchAddress("trig_L2_ph_L2_g20_loose_cnv", &trig_L2_ph_L2_g20_loose_cnv, &b_trig_L2_ph_L2_g20_loose_cnv);
   fChain->SetBranchAddress("trig_L2_ph_L2_g20_loose_xe20_noMu", &trig_L2_ph_L2_g20_loose_xe20_noMu, &b_trig_L2_ph_L2_g20_loose_xe20_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g20_loose_xe30_noMu", &trig_L2_ph_L2_g20_loose_xe30_noMu, &b_trig_L2_ph_L2_g20_loose_xe30_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g20_tight", &trig_L2_ph_L2_g20_tight, &b_trig_L2_ph_L2_g20_tight);
   fChain->SetBranchAddress("trig_L2_ph_L2_g22_hiptrt", &trig_L2_ph_L2_g22_hiptrt, &b_trig_L2_ph_L2_g22_hiptrt);
   fChain->SetBranchAddress("trig_L2_ph_L2_g25_loose_xe30_noMu", &trig_L2_ph_L2_g25_loose_xe30_noMu, &b_trig_L2_ph_L2_g25_loose_xe30_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g27_etcut", &trig_L2_ph_L2_g27_etcut, &b_trig_L2_ph_L2_g27_etcut);
   fChain->SetBranchAddress("trig_L2_ph_L2_g27_etcut_EFxe30_noMu", &trig_L2_ph_L2_g27_etcut_EFxe30_noMu, &b_trig_L2_ph_L2_g27_etcut_EFxe30_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g30_loose_g20_loose", &trig_L2_ph_L2_g30_loose_g20_loose, &b_trig_L2_ph_L2_g30_loose_g20_loose);
   fChain->SetBranchAddress("trig_L2_ph_L2_g40_loose", &trig_L2_ph_L2_g40_loose, &b_trig_L2_ph_L2_g40_loose);
   fChain->SetBranchAddress("trig_L2_ph_L2_g40_loose_EFxe35_noMu", &trig_L2_ph_L2_g40_loose_EFxe35_noMu, &b_trig_L2_ph_L2_g40_loose_EFxe35_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g40_loose_EFxe40_noMu", &trig_L2_ph_L2_g40_loose_EFxe40_noMu, &b_trig_L2_ph_L2_g40_loose_EFxe40_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g40_loose_b10_medium", &trig_L2_ph_L2_g40_loose_b10_medium, &b_trig_L2_ph_L2_g40_loose_b10_medium);
   fChain->SetBranchAddress("trig_L2_ph_L2_g40_loose_xe30_medium_noMu", &trig_L2_ph_L2_g40_loose_xe30_medium_noMu, &b_trig_L2_ph_L2_g40_loose_xe30_medium_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g40_loose_xe35_medium_noMu", &trig_L2_ph_L2_g40_loose_xe35_medium_noMu, &b_trig_L2_ph_L2_g40_loose_xe35_medium_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g40_loose_xe40_noMu", &trig_L2_ph_L2_g40_loose_xe40_noMu, &b_trig_L2_ph_L2_g40_loose_xe40_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g40_loose_xs35_noMu", &trig_L2_ph_L2_g40_loose_xs35_noMu, &b_trig_L2_ph_L2_g40_loose_xs35_noMu);
   fChain->SetBranchAddress("trig_L2_ph_L2_g40_tight", &trig_L2_ph_L2_g40_tight, &b_trig_L2_ph_L2_g40_tight);
   fChain->SetBranchAddress("trig_L2_ph_L2_g40_tight_b10_medium", &trig_L2_ph_L2_g40_tight_b10_medium, &b_trig_L2_ph_L2_g40_tight_b10_medium);
   fChain->SetBranchAddress("trig_L2_ph_L2_g40_tight_b15_medium", &trig_L2_ph_L2_g40_tight_b15_medium, &b_trig_L2_ph_L2_g40_tight_b15_medium);
   fChain->SetBranchAddress("trig_L2_ph_L2_g50_loose", &trig_L2_ph_L2_g50_loose, &b_trig_L2_ph_L2_g50_loose);
   fChain->SetBranchAddress("trig_L2_ph_L2_g5_NoCut_cosmic", &trig_L2_ph_L2_g5_NoCut_cosmic, &b_trig_L2_ph_L2_g5_NoCut_cosmic);
   fChain->SetBranchAddress("trig_L2_ph_L2_g60_loose", &trig_L2_ph_L2_g60_loose, &b_trig_L2_ph_L2_g60_loose);
   fChain->SetBranchAddress("trig_L2_ph_L2_g80_loose", &trig_L2_ph_L2_g80_loose, &b_trig_L2_ph_L2_g80_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_2e10_medium", &trig_EF_el_EF_2e10_medium, &b_trig_EF_el_EF_2e10_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_2e10_medium_mu6", &trig_EF_el_EF_2e10_medium_mu6, &b_trig_EF_el_EF_2e10_medium_mu6);
   fChain->SetBranchAddress("trig_EF_el_EF_2e11T_medium", &trig_EF_el_EF_2e11T_medium, &b_trig_EF_el_EF_2e11T_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_2e12T_medium", &trig_EF_el_EF_2e12T_medium, &b_trig_EF_el_EF_2e12T_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_2e12_medium", &trig_EF_el_EF_2e12_medium, &b_trig_EF_el_EF_2e12_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_2e15_loose", &trig_EF_el_EF_2e15_loose, &b_trig_EF_el_EF_2e15_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_2e15_medium", &trig_EF_el_EF_2e15_medium, &b_trig_EF_el_EF_2e15_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_2e5_medium", &trig_EF_el_EF_2e5_medium, &b_trig_EF_el_EF_2e5_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_2e5_medium_SiTrk", &trig_EF_el_EF_2e5_medium_SiTrk, &b_trig_EF_el_EF_2e5_medium_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_2e5_medium_TRT", &trig_EF_el_EF_2e5_medium_TRT, &b_trig_EF_el_EF_2e5_medium_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_2e5_tight", &trig_EF_el_EF_2e5_tight, &b_trig_EF_el_EF_2e5_tight);
   fChain->SetBranchAddress("trig_EF_el_EF_2e5_tight_Jpsi", &trig_EF_el_EF_2e5_tight_Jpsi, &b_trig_EF_el_EF_2e5_tight_Jpsi);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_NoCut", &trig_EF_el_EF_e10_NoCut, &b_trig_EF_el_EF_e10_NoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_loose", &trig_EF_el_EF_e10_loose, &b_trig_EF_el_EF_e10_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_loose_mu10", &trig_EF_el_EF_e10_loose_mu10, &b_trig_EF_el_EF_e10_loose_mu10);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_loose_mu6", &trig_EF_el_EF_e10_loose_mu6, &b_trig_EF_el_EF_e10_loose_mu6);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_medium", &trig_EF_el_EF_e10_medium, &b_trig_EF_el_EF_e10_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_medium_2mu6", &trig_EF_el_EF_e10_medium_2mu6, &b_trig_EF_el_EF_e10_medium_2mu6);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_medium_mu10", &trig_EF_el_EF_e10_medium_mu10, &b_trig_EF_el_EF_e10_medium_mu10);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_medium_mu6", &trig_EF_el_EF_e10_medium_mu6, &b_trig_EF_el_EF_e10_medium_mu6);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_medium_mu6_topo_medium", &trig_EF_el_EF_e10_medium_mu6_topo_medium, &b_trig_EF_el_EF_e10_medium_mu6_topo_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e11T_medium", &trig_EF_el_EF_e11T_medium, &b_trig_EF_el_EF_e11T_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e11T_medium_2e6T_medium", &trig_EF_el_EF_e11T_medium_2e6T_medium, &b_trig_EF_el_EF_e11T_medium_2e6T_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e11_etcut", &trig_EF_el_EF_e11_etcut, &b_trig_EF_el_EF_e11_etcut);
   fChain->SetBranchAddress("trig_EF_el_EF_e12T_medium_mu6_topo_medium", &trig_EF_el_EF_e12T_medium_mu6_topo_medium, &b_trig_EF_el_EF_e12T_medium_mu6_topo_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e12_medium", &trig_EF_el_EF_e12_medium, &b_trig_EF_el_EF_e12_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e13_etcutTRT_xs60_noMu", &trig_EF_el_EF_e13_etcutTRT_xs60_noMu, &b_trig_EF_el_EF_e13_etcutTRT_xs60_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e13_etcut_xs60_noMu", &trig_EF_el_EF_e13_etcut_xs60_noMu, &b_trig_EF_el_EF_e13_etcut_xs60_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e13_etcut_xs70_noMu", &trig_EF_el_EF_e13_etcut_xs70_noMu, &b_trig_EF_el_EF_e13_etcut_xs70_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_HLTtighter", &trig_EF_el_EF_e15_HLTtighter, &b_trig_EF_el_EF_e15_HLTtighter);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_loose", &trig_EF_el_EF_e15_loose, &b_trig_EF_el_EF_e15_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium", &trig_EF_el_EF_e15_medium, &b_trig_EF_el_EF_e15_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium_e12_medium", &trig_EF_el_EF_e15_medium_e12_medium, &b_trig_EF_el_EF_e15_medium_e12_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium_mu6", &trig_EF_el_EF_e15_medium_mu6, &b_trig_EF_el_EF_e15_medium_mu6);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium_xe30_noMu", &trig_EF_el_EF_e15_medium_xe30_noMu, &b_trig_EF_el_EF_e15_medium_xe30_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium_xe35_loose_noMu", &trig_EF_el_EF_e15_medium_xe35_loose_noMu, &b_trig_EF_el_EF_e15_medium_xe35_loose_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium_xe35_noMu", &trig_EF_el_EF_e15_medium_xe35_noMu, &b_trig_EF_el_EF_e15_medium_xe35_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium_xe40_loose_noMu", &trig_EF_el_EF_e15_medium_xe40_loose_noMu, &b_trig_EF_el_EF_e15_medium_xe40_loose_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium_xe40_noMu", &trig_EF_el_EF_e15_medium_xe40_noMu, &b_trig_EF_el_EF_e15_medium_xe40_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium_xe50_noMu", &trig_EF_el_EF_e15_medium_xe50_noMu, &b_trig_EF_el_EF_e15_medium_xe50_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_tight", &trig_EF_el_EF_e15_tight, &b_trig_EF_el_EF_e15_tight);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_tight1", &trig_EF_el_EF_e15_tight1, &b_trig_EF_el_EF_e15_tight1);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_tight_xe30_noMu", &trig_EF_el_EF_e15_tight_xe30_noMu, &b_trig_EF_el_EF_e15_tight_xe30_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e18_medium", &trig_EF_el_EF_e18_medium, &b_trig_EF_el_EF_e18_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e18_medium_xe30_noMu", &trig_EF_el_EF_e18_medium_xe30_noMu, &b_trig_EF_el_EF_e18_medium_xe30_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e18_tight", &trig_EF_el_EF_e18_tight, &b_trig_EF_el_EF_e18_tight);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_L2Star_IDTrkNoCut", &trig_EF_el_EF_e20_L2Star_IDTrkNoCut, &b_trig_EF_el_EF_e20_L2Star_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_etcut_xs60_noMu", &trig_EF_el_EF_e20_etcut_xs60_noMu, &b_trig_EF_el_EF_e20_etcut_xs60_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose", &trig_EF_el_EF_e20_loose, &b_trig_EF_el_EF_e20_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose1", &trig_EF_el_EF_e20_loose1, &b_trig_EF_el_EF_e20_loose1);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_looseTrk", &trig_EF_el_EF_e20_looseTrk, &b_trig_EF_el_EF_e20_looseTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_2j10_a4tc_EFFS", &trig_EF_el_EF_e20_loose_2j10_a4tc_EFFS, &b_trig_EF_el_EF_e20_loose_2j10_a4tc_EFFS);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_3j10_a4tc_EFFS", &trig_EF_el_EF_e20_loose_3j10_a4tc_EFFS, &b_trig_EF_el_EF_e20_loose_3j10_a4tc_EFFS);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_4j10_a4tc_EFFS", &trig_EF_el_EF_e20_loose_4j10_a4tc_EFFS, &b_trig_EF_el_EF_e20_loose_4j10_a4tc_EFFS);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_IDTrkNoCut", &trig_EF_el_EF_e20_loose_IDTrkNoCut, &b_trig_EF_el_EF_e20_loose_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_TRT", &trig_EF_el_EF_e20_loose_TRT, &b_trig_EF_el_EF_e20_loose_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_xe20", &trig_EF_el_EF_e20_loose_xe20, &b_trig_EF_el_EF_e20_loose_xe20);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_xe20_noMu", &trig_EF_el_EF_e20_loose_xe20_noMu, &b_trig_EF_el_EF_e20_loose_xe20_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_xe30", &trig_EF_el_EF_e20_loose_xe30, &b_trig_EF_el_EF_e20_loose_xe30);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_xe30_noMu", &trig_EF_el_EF_e20_loose_xe30_noMu, &b_trig_EF_el_EF_e20_loose_xe30_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_medium", &trig_EF_el_EF_e20_medium, &b_trig_EF_el_EF_e20_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_medium1", &trig_EF_el_EF_e20_medium1, &b_trig_EF_el_EF_e20_medium1);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_medium2", &trig_EF_el_EF_e20_medium2, &b_trig_EF_el_EF_e20_medium2);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_medium_IDTrkNoCut", &trig_EF_el_EF_e20_medium_IDTrkNoCut, &b_trig_EF_el_EF_e20_medium_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_medium_SiTrk", &trig_EF_el_EF_e20_medium_SiTrk, &b_trig_EF_el_EF_e20_medium_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_medium_TRT", &trig_EF_el_EF_e20_medium_TRT, &b_trig_EF_el_EF_e20_medium_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_tight", &trig_EF_el_EF_e20_tight, &b_trig_EF_el_EF_e20_tight);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_tight_e15_NoCut_Zee", &trig_EF_el_EF_e20_tight_e15_NoCut_Zee, &b_trig_EF_el_EF_e20_tight_e15_NoCut_Zee);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_etcut_xs60_noMu", &trig_EF_el_EF_e22_etcut_xs60_noMu, &b_trig_EF_el_EF_e22_etcut_xs60_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_loose", &trig_EF_el_EF_e22_loose, &b_trig_EF_el_EF_e22_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_loose1", &trig_EF_el_EF_e22_loose1, &b_trig_EF_el_EF_e22_loose1);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_looseTrk", &trig_EF_el_EF_e22_looseTrk, &b_trig_EF_el_EF_e22_looseTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_medium", &trig_EF_el_EF_e22_medium, &b_trig_EF_el_EF_e22_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_medium1", &trig_EF_el_EF_e22_medium1, &b_trig_EF_el_EF_e22_medium1);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_medium2", &trig_EF_el_EF_e22_medium2, &b_trig_EF_el_EF_e22_medium2);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_medium_IDTrkNoCut", &trig_EF_el_EF_e22_medium_IDTrkNoCut, &b_trig_EF_el_EF_e22_medium_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_medium_SiTrk", &trig_EF_el_EF_e22_medium_SiTrk, &b_trig_EF_el_EF_e22_medium_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_medium_TRT", &trig_EF_el_EF_e22_medium_TRT, &b_trig_EF_el_EF_e22_medium_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_tight", &trig_EF_el_EF_e22_tight, &b_trig_EF_el_EF_e22_tight);
   fChain->SetBranchAddress("trig_EF_el_EF_e25_loose", &trig_EF_el_EF_e25_loose, &b_trig_EF_el_EF_e25_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e25_medium", &trig_EF_el_EF_e25_medium, &b_trig_EF_el_EF_e25_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e30_loose", &trig_EF_el_EF_e30_loose, &b_trig_EF_el_EF_e30_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e30_medium", &trig_EF_el_EF_e30_medium, &b_trig_EF_el_EF_e30_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e33_medium", &trig_EF_el_EF_e33_medium, &b_trig_EF_el_EF_e33_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e35_medium", &trig_EF_el_EF_e35_medium, &b_trig_EF_el_EF_e35_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e40_medium", &trig_EF_el_EF_e40_medium, &b_trig_EF_el_EF_e40_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e45_medium", &trig_EF_el_EF_e45_medium, &b_trig_EF_el_EF_e45_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e45_medium1", &trig_EF_el_EF_e45_medium1, &b_trig_EF_el_EF_e45_medium1);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_NoCut_L2SW", &trig_EF_el_EF_e5_NoCut_L2SW, &b_trig_EF_el_EF_e5_NoCut_L2SW);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_NoCut_Ringer", &trig_EF_el_EF_e5_NoCut_Ringer, &b_trig_EF_el_EF_e5_NoCut_Ringer);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_NoCut_firstempty", &trig_EF_el_EF_e5_NoCut_firstempty, &b_trig_EF_el_EF_e5_NoCut_firstempty);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_medium_mu4", &trig_EF_el_EF_e5_medium_mu4, &b_trig_EF_el_EF_e5_medium_mu4);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_medium_mu6", &trig_EF_el_EF_e5_medium_mu6, &b_trig_EF_el_EF_e5_medium_mu6);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_medium_mu6_topo_loose", &trig_EF_el_EF_e5_medium_mu6_topo_loose, &b_trig_EF_el_EF_e5_medium_mu6_topo_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_medium_mu6_topo_medium", &trig_EF_el_EF_e5_medium_mu6_topo_medium, &b_trig_EF_el_EF_e5_medium_mu6_topo_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight", &trig_EF_el_EF_e5_tight, &b_trig_EF_el_EF_e5_tight);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_TRT", &trig_EF_el_EF_e5_tight_TRT, &b_trig_EF_el_EF_e5_tight_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_e14_etcut_Jpsi", &trig_EF_el_EF_e5_tight_e14_etcut_Jpsi, &b_trig_EF_el_EF_e5_tight_e14_etcut_Jpsi);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_e4_etcut_Jpsi", &trig_EF_el_EF_e5_tight_e4_etcut_Jpsi, &b_trig_EF_el_EF_e5_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_SiTrk", &trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_SiTrk, &b_trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_TRT", &trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_TRT, &b_trig_EF_el_EF_e5_tight_e4_etcut_Jpsi_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_e5_NoCut", &trig_EF_el_EF_e5_tight_e5_NoCut, &b_trig_EF_el_EF_e5_tight_e5_NoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_e5_NoCut_Jpsi", &trig_EF_el_EF_e5_tight_e5_NoCut_Jpsi, &b_trig_EF_el_EF_e5_tight_e5_NoCut_Jpsi);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_e7_etcut_Jpsi", &trig_EF_el_EF_e5_tight_e7_etcut_Jpsi, &b_trig_EF_el_EF_e5_tight_e7_etcut_Jpsi);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_e9_etcut_Jpsi", &trig_EF_el_EF_e5_tight_e9_etcut_Jpsi, &b_trig_EF_el_EF_e5_tight_e9_etcut_Jpsi);
   fChain->SetBranchAddress("trig_EF_el_EF_e60_loose", &trig_EF_el_EF_e60_loose, &b_trig_EF_el_EF_e60_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e6T_medium", &trig_EF_el_EF_e6T_medium, &b_trig_EF_el_EF_e6T_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e7_tight_e14_etcut_Jpsi", &trig_EF_el_EF_e7_tight_e14_etcut_Jpsi, &b_trig_EF_el_EF_e7_tight_e14_etcut_Jpsi);
   fChain->SetBranchAddress("trig_EF_el_EF_e9_tight_e5_tight_Jpsi", &trig_EF_el_EF_e9_tight_e5_tight_Jpsi, &b_trig_EF_el_EF_e9_tight_e5_tight_Jpsi);
   fChain->SetBranchAddress("trig_EF_el_EF_eb_physics", &trig_EF_el_EF_eb_physics, &b_trig_EF_el_EF_eb_physics);
   fChain->SetBranchAddress("trig_EF_el_EF_eb_physics_empty", &trig_EF_el_EF_eb_physics_empty, &b_trig_EF_el_EF_eb_physics_empty);
   fChain->SetBranchAddress("trig_EF_el_EF_eb_physics_firstempty", &trig_EF_el_EF_eb_physics_firstempty, &b_trig_EF_el_EF_eb_physics_firstempty);
   fChain->SetBranchAddress("trig_EF_el_EF_eb_physics_noL1PS", &trig_EF_el_EF_eb_physics_noL1PS, &b_trig_EF_el_EF_eb_physics_noL1PS);
   fChain->SetBranchAddress("trig_EF_el_EF_eb_physics_unpaired_iso", &trig_EF_el_EF_eb_physics_unpaired_iso, &b_trig_EF_el_EF_eb_physics_unpaired_iso);
   fChain->SetBranchAddress("trig_EF_el_EF_eb_physics_unpaired_noniso", &trig_EF_el_EF_eb_physics_unpaired_noniso, &b_trig_EF_el_EF_eb_physics_unpaired_noniso);
   fChain->SetBranchAddress("trig_EF_el_EF_eb_random", &trig_EF_el_EF_eb_random, &b_trig_EF_el_EF_eb_random);
   fChain->SetBranchAddress("trig_EF_el_EF_eb_random_empty", &trig_EF_el_EF_eb_random_empty, &b_trig_EF_el_EF_eb_random_empty);
   fChain->SetBranchAddress("trig_EF_el_EF_eb_random_firstempty", &trig_EF_el_EF_eb_random_firstempty, &b_trig_EF_el_EF_eb_random_firstempty);
   fChain->SetBranchAddress("trig_EF_el_EF_eb_random_unpaired_iso", &trig_EF_el_EF_eb_random_unpaired_iso, &b_trig_EF_el_EF_eb_random_unpaired_iso);
   fChain->SetBranchAddress("trig_EF_el_EF_em105_passHLT", &trig_EF_el_EF_em105_passHLT, &b_trig_EF_el_EF_em105_passHLT);
   fChain->SetBranchAddress("trig_EF_ph_EF_2g10_loose", &trig_EF_ph_EF_2g10_loose, &b_trig_EF_ph_EF_2g10_loose);
   fChain->SetBranchAddress("trig_EF_ph_EF_2g15_loose", &trig_EF_ph_EF_2g15_loose, &b_trig_EF_ph_EF_2g15_loose);
   fChain->SetBranchAddress("trig_EF_ph_EF_2g20_loose", &trig_EF_ph_EF_2g20_loose, &b_trig_EF_ph_EF_2g20_loose);
   fChain->SetBranchAddress("trig_EF_ph_EF_2g50_etcut", &trig_EF_ph_EF_2g50_etcut, &b_trig_EF_ph_EF_2g50_etcut);
   fChain->SetBranchAddress("trig_EF_ph_EF_g100_etcut_g50_etcut", &trig_EF_ph_EF_g100_etcut_g50_etcut, &b_trig_EF_ph_EF_g100_etcut_g50_etcut);
   fChain->SetBranchAddress("trig_EF_ph_EF_g100_loose", &trig_EF_ph_EF_g100_loose, &b_trig_EF_ph_EF_g100_loose);
   fChain->SetBranchAddress("trig_EF_ph_EF_g10_NoCut_cosmic", &trig_EF_ph_EF_g10_NoCut_cosmic, &b_trig_EF_ph_EF_g10_NoCut_cosmic);
   fChain->SetBranchAddress("trig_EF_ph_EF_g11_etcut", &trig_EF_ph_EF_g11_etcut, &b_trig_EF_ph_EF_g11_etcut);
   fChain->SetBranchAddress("trig_EF_ph_EF_g11_etcut_larcalib", &trig_EF_ph_EF_g11_etcut_larcalib, &b_trig_EF_ph_EF_g11_etcut_larcalib);
   fChain->SetBranchAddress("trig_EF_ph_EF_g13_etcut_xs60_noMu", &trig_EF_ph_EF_g13_etcut_xs60_noMu, &b_trig_EF_ph_EF_g13_etcut_xs60_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g150_etcut", &trig_EF_ph_EF_g150_etcut, &b_trig_EF_ph_EF_g150_etcut);
   fChain->SetBranchAddress("trig_EF_ph_EF_g15_loose", &trig_EF_ph_EF_g15_loose, &b_trig_EF_ph_EF_g15_loose);
   fChain->SetBranchAddress("trig_EF_ph_EF_g15_loose_larcalib", &trig_EF_ph_EF_g15_loose_larcalib, &b_trig_EF_ph_EF_g15_loose_larcalib);
   fChain->SetBranchAddress("trig_EF_ph_EF_g17_etcut", &trig_EF_ph_EF_g17_etcut, &b_trig_EF_ph_EF_g17_etcut);
   fChain->SetBranchAddress("trig_EF_ph_EF_g17_etcut_EFxe20_noMu", &trig_EF_ph_EF_g17_etcut_EFxe20_noMu, &b_trig_EF_ph_EF_g17_etcut_EFxe20_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g17_etcut_EFxe30_noMu", &trig_EF_ph_EF_g17_etcut_EFxe30_noMu, &b_trig_EF_ph_EF_g17_etcut_EFxe30_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g20_etcut", &trig_EF_ph_EF_g20_etcut, &b_trig_EF_ph_EF_g20_etcut);
   fChain->SetBranchAddress("trig_EF_ph_EF_g20_etcut_xe30_noMu", &trig_EF_ph_EF_g20_etcut_xe30_noMu, &b_trig_EF_ph_EF_g20_etcut_xe30_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g20_loose", &trig_EF_ph_EF_g20_loose, &b_trig_EF_ph_EF_g20_loose);
   fChain->SetBranchAddress("trig_EF_ph_EF_g20_loose_cnv", &trig_EF_ph_EF_g20_loose_cnv, &b_trig_EF_ph_EF_g20_loose_cnv);
   fChain->SetBranchAddress("trig_EF_ph_EF_g20_loose_larcalib", &trig_EF_ph_EF_g20_loose_larcalib, &b_trig_EF_ph_EF_g20_loose_larcalib);
   fChain->SetBranchAddress("trig_EF_ph_EF_g20_loose_xe20_noMu", &trig_EF_ph_EF_g20_loose_xe20_noMu, &b_trig_EF_ph_EF_g20_loose_xe20_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g20_loose_xe30_noMu", &trig_EF_ph_EF_g20_loose_xe30_noMu, &b_trig_EF_ph_EF_g20_loose_xe30_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g20_tight", &trig_EF_ph_EF_g20_tight, &b_trig_EF_ph_EF_g20_tight);
   fChain->SetBranchAddress("trig_EF_ph_EF_g22_hiptrt", &trig_EF_ph_EF_g22_hiptrt, &b_trig_EF_ph_EF_g22_hiptrt);
   fChain->SetBranchAddress("trig_EF_ph_EF_g25_loose_xe30_noMu", &trig_EF_ph_EF_g25_loose_xe30_noMu, &b_trig_EF_ph_EF_g25_loose_xe30_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g27_etcut", &trig_EF_ph_EF_g27_etcut, &b_trig_EF_ph_EF_g27_etcut);
   fChain->SetBranchAddress("trig_EF_ph_EF_g27_etcut_EFxe30_noMu", &trig_EF_ph_EF_g27_etcut_EFxe30_noMu, &b_trig_EF_ph_EF_g27_etcut_EFxe30_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g30_loose_g20_loose", &trig_EF_ph_EF_g30_loose_g20_loose, &b_trig_EF_ph_EF_g30_loose_g20_loose);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_loose", &trig_EF_ph_EF_g40_loose, &b_trig_EF_ph_EF_g40_loose);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_loose_EFxe35_noMu", &trig_EF_ph_EF_g40_loose_EFxe35_noMu, &b_trig_EF_ph_EF_g40_loose_EFxe35_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_loose_EFxe40_noMu", &trig_EF_ph_EF_g40_loose_EFxe40_noMu, &b_trig_EF_ph_EF_g40_loose_EFxe40_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_loose_b10_medium", &trig_EF_ph_EF_g40_loose_b10_medium, &b_trig_EF_ph_EF_g40_loose_b10_medium);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_loose_larcalib", &trig_EF_ph_EF_g40_loose_larcalib, &b_trig_EF_ph_EF_g40_loose_larcalib);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_loose_xe40_noMu", &trig_EF_ph_EF_g40_loose_xe40_noMu, &b_trig_EF_ph_EF_g40_loose_xe40_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_loose_xe45_medium_noMu", &trig_EF_ph_EF_g40_loose_xe45_medium_noMu, &b_trig_EF_ph_EF_g40_loose_xe45_medium_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_loose_xe55_medium_noMu", &trig_EF_ph_EF_g40_loose_xe55_medium_noMu, &b_trig_EF_ph_EF_g40_loose_xe55_medium_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_loose_xs35_noMu", &trig_EF_ph_EF_g40_loose_xs35_noMu, &b_trig_EF_ph_EF_g40_loose_xs35_noMu);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_tight", &trig_EF_ph_EF_g40_tight, &b_trig_EF_ph_EF_g40_tight);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_tight_b10_medium", &trig_EF_ph_EF_g40_tight_b10_medium, &b_trig_EF_ph_EF_g40_tight_b10_medium);
   fChain->SetBranchAddress("trig_EF_ph_EF_g40_tight_b15_medium", &trig_EF_ph_EF_g40_tight_b15_medium, &b_trig_EF_ph_EF_g40_tight_b15_medium);
   fChain->SetBranchAddress("trig_EF_ph_EF_g50_loose", &trig_EF_ph_EF_g50_loose, &b_trig_EF_ph_EF_g50_loose);
   fChain->SetBranchAddress("trig_EF_ph_EF_g5_NoCut_cosmic", &trig_EF_ph_EF_g5_NoCut_cosmic, &b_trig_EF_ph_EF_g5_NoCut_cosmic);
   fChain->SetBranchAddress("trig_EF_ph_EF_g60_loose", &trig_EF_ph_EF_g60_loose, &b_trig_EF_ph_EF_g60_loose);
   fChain->SetBranchAddress("trig_EF_ph_EF_g60_loose_larcalib", &trig_EF_ph_EF_g60_loose_larcalib, &b_trig_EF_ph_EF_g60_loose_larcalib);
   fChain->SetBranchAddress("trig_EF_ph_EF_g80_loose", &trig_EF_ph_EF_g80_loose, &b_trig_EF_ph_EF_g80_loose);
   fChain->SetBranchAddress("trig_EF_ph_EF_g80_loose_larcalib", &trig_EF_ph_EF_g80_loose_larcalib, &b_trig_EF_ph_EF_g80_loose_larcalib);
   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("timestamp", &timestamp, &b_timestamp);
   fChain->SetBranchAddress("timestamp_ns", &timestamp_ns, &b_timestamp_ns);
   fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
   fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
   fChain->SetBranchAddress("detmask0", &detmask0, &b_detmask0);
   fChain->SetBranchAddress("detmask1", &detmask1, &b_detmask1);
   fChain->SetBranchAddress("actualIntPerXing", &actualIntPerXing, &b_actualIntPerXing);
   fChain->SetBranchAddress("averageIntPerXing", &averageIntPerXing, &b_averageIntPerXing);
   fChain->SetBranchAddress("mc_channel_number", &mc_channel_number, &b_mc_channel_number);
   fChain->SetBranchAddress("mc_event_number", &mc_event_number, &b_mc_event_number);
   fChain->SetBranchAddress("mc_event_weight", &mc_event_weight, &b_mc_event_weight);
   fChain->SetBranchAddress("pixelFlags", &pixelFlags, &b_pixelFlags);
   fChain->SetBranchAddress("sctFlags", &sctFlags, &b_sctFlags);
   fChain->SetBranchAddress("trtFlags", &trtFlags, &b_trtFlags);
   fChain->SetBranchAddress("larFlags", &larFlags, &b_larFlags);
   fChain->SetBranchAddress("tileFlags", &tileFlags, &b_tileFlags);
   fChain->SetBranchAddress("muonFlags", &muonFlags, &b_muonFlags);
   fChain->SetBranchAddress("fwdFlags", &fwdFlags, &b_fwdFlags);
   fChain->SetBranchAddress("coreFlags", &coreFlags, &b_coreFlags);
   fChain->SetBranchAddress("pixelError", &pixelError, &b_pixelError);
   fChain->SetBranchAddress("sctError", &sctError, &b_sctError);
   fChain->SetBranchAddress("trtError", &trtError, &b_trtError);
   fChain->SetBranchAddress("larError", &larError, &b_larError);
   fChain->SetBranchAddress("tileError", &tileError, &b_tileError);
   fChain->SetBranchAddress("muonError", &muonError, &b_muonError);
   fChain->SetBranchAddress("fwdError", &fwdError, &b_fwdError);
   fChain->SetBranchAddress("coreError", &coreError, &b_coreError);
   fChain->SetBranchAddress("isSimulation", &isSimulation, &b_isSimulation);
   fChain->SetBranchAddress("isCalibration", &isCalibration, &b_isCalibration);
   fChain->SetBranchAddress("isTestBeam", &isTestBeam, &b_isTestBeam);
   fChain->SetBranchAddress("mb_n", &mb_n, &b_mb_n);
   fChain->SetBranchAddress("mb_E", &mb_E, &b_mb_E);
   fChain->SetBranchAddress("mb_eta", &mb_eta, &b_mb_eta);
   fChain->SetBranchAddress("mb_phi", &mb_phi, &b_mb_phi);
   fChain->SetBranchAddress("mb_time", &mb_time, &b_mb_time);
   fChain->SetBranchAddress("mb_quality", &mb_quality, &b_mb_quality);
   fChain->SetBranchAddress("mb_type", &mb_type, &b_mb_type);
   fChain->SetBranchAddress("mb_module", &mb_module, &b_mb_module);
   fChain->SetBranchAddress("mb_channel", &mb_channel, &b_mb_channel);
   fChain->SetBranchAddress("mbtime_timeDiff", &mbtime_timeDiff, &b_mbtime_timeDiff);
   fChain->SetBranchAddress("mbtime_timeA", &mbtime_timeA, &b_mbtime_timeA);
   fChain->SetBranchAddress("mbtime_timeC", &mbtime_timeC, &b_mbtime_timeC);
   fChain->SetBranchAddress("mbtime_countA", &mbtime_countA, &b_mbtime_countA);
   fChain->SetBranchAddress("mbtime_countC", &mbtime_countC, &b_mbtime_countC);
   fChain->SetBranchAddress("L1_MBTS_2", &L1_MBTS_2, &b_L1_MBTS_2);
   fChain->SetBranchAddress("L1_MBTS_2_BGRP7", &L1_MBTS_2_BGRP7, &b_L1_MBTS_2_BGRP7);
   fChain->SetBranchAddress("L1_MBTS_2_UNPAIRED_ISO", &L1_MBTS_2_UNPAIRED_ISO, &b_L1_MBTS_2_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_MBTS_4_4", &L1_MBTS_4_4, &b_L1_MBTS_4_4);
   fChain->SetBranchAddress("L1_MBTS_4_4_EMPTY", &L1_MBTS_4_4_EMPTY, &b_L1_MBTS_4_4_EMPTY);
   fChain->SetBranchAddress("collcand_passCaloTime", &collcand_passCaloTime, &b_collcand_passCaloTime);
   fChain->SetBranchAddress("collcand_passMBTSTime", &collcand_passMBTSTime, &b_collcand_passMBTSTime);
   fChain->SetBranchAddress("collcand_passTrigger", &collcand_passTrigger, &b_collcand_passTrigger);
   fChain->SetBranchAddress("collcand_pass", &collcand_pass, &b_collcand_pass);
   fChain->SetBranchAddress("trk_n", &trk_n, &b_trk_n);
   fChain->SetBranchAddress("trk_d0", &trk_d0, &b_trk_d0);
   fChain->SetBranchAddress("trk_z0", &trk_z0, &b_trk_z0);
   fChain->SetBranchAddress("trk_phi", &trk_phi, &b_trk_phi);
   fChain->SetBranchAddress("trk_theta", &trk_theta, &b_trk_theta);
   fChain->SetBranchAddress("trk_qoverp", &trk_qoverp, &b_trk_qoverp);
   fChain->SetBranchAddress("trk_pt", &trk_pt, &b_trk_pt);
   fChain->SetBranchAddress("trk_eta", &trk_eta, &b_trk_eta);
   fChain->SetBranchAddress("trk_d0_wrtPV", &trk_d0_wrtPV, &b_trk_d0_wrtPV);
   fChain->SetBranchAddress("trk_z0_wrtPV", &trk_z0_wrtPV, &b_trk_z0_wrtPV);
   fChain->SetBranchAddress("trk_phi_wrtPV", &trk_phi_wrtPV, &b_trk_phi_wrtPV);
   fChain->SetBranchAddress("trk_d0_wrtBS", &trk_d0_wrtBS, &b_trk_d0_wrtBS);
   fChain->SetBranchAddress("trk_z0_wrtBS", &trk_z0_wrtBS, &b_trk_z0_wrtBS);
   fChain->SetBranchAddress("trk_phi_wrtBS", &trk_phi_wrtBS, &b_trk_phi_wrtBS);
   fChain->SetBranchAddress("trk_chi2", &trk_chi2, &b_trk_chi2);
   fChain->SetBranchAddress("trk_ndof", &trk_ndof, &b_trk_ndof);
   fChain->SetBranchAddress("trk_nBLHits", &trk_nBLHits, &b_trk_nBLHits);
   fChain->SetBranchAddress("trk_nPixHits", &trk_nPixHits, &b_trk_nPixHits);
   fChain->SetBranchAddress("trk_nSCTHits", &trk_nSCTHits, &b_trk_nSCTHits);
   fChain->SetBranchAddress("trk_nTRTHits", &trk_nTRTHits, &b_trk_nTRTHits);
   fChain->SetBranchAddress("trk_nTRTHighTHits", &trk_nTRTHighTHits, &b_trk_nTRTHighTHits);
   fChain->SetBranchAddress("trk_nPixHoles", &trk_nPixHoles, &b_trk_nPixHoles);
   fChain->SetBranchAddress("trk_nSCTHoles", &trk_nSCTHoles, &b_trk_nSCTHoles);
   fChain->SetBranchAddress("trk_nTRTHoles", &trk_nTRTHoles, &b_trk_nTRTHoles);
   fChain->SetBranchAddress("trk_expectBLayerHit", &trk_expectBLayerHit, &b_trk_expectBLayerHit);
   fChain->SetBranchAddress("trk_nMDTHits", &trk_nMDTHits, &b_trk_nMDTHits);
   fChain->SetBranchAddress("trk_nCSCEtaHits", &trk_nCSCEtaHits, &b_trk_nCSCEtaHits);
   fChain->SetBranchAddress("trk_nCSCPhiHits", &trk_nCSCPhiHits, &b_trk_nCSCPhiHits);
   fChain->SetBranchAddress("trk_nRPCEtaHits", &trk_nRPCEtaHits, &b_trk_nRPCEtaHits);
   fChain->SetBranchAddress("trk_nRPCPhiHits", &trk_nRPCPhiHits, &b_trk_nRPCPhiHits);
   fChain->SetBranchAddress("trk_nTGCEtaHits", &trk_nTGCEtaHits, &b_trk_nTGCEtaHits);
   fChain->SetBranchAddress("trk_nTGCPhiHits", &trk_nTGCPhiHits, &b_trk_nTGCPhiHits);
   fChain->SetBranchAddress("trk_nHits", &trk_nHits, &b_trk_nHits);
   fChain->SetBranchAddress("trk_nHoles", &trk_nHoles, &b_trk_nHoles);
   fChain->SetBranchAddress("trk_hitPattern", &trk_hitPattern, &b_trk_hitPattern);
   fChain->SetBranchAddress("trk_TRTHighTHitsRatio", &trk_TRTHighTHitsRatio, &b_trk_TRTHighTHitsRatio);
   fChain->SetBranchAddress("trk_TRTHighTOutliersRatio", &trk_TRTHighTOutliersRatio, &b_trk_TRTHighTOutliersRatio);
   fChain->SetBranchAddress("trk_mc_probability", &trk_mc_probability, &b_trk_mc_probability);
   fChain->SetBranchAddress("trk_mc_barcode", &trk_mc_barcode, &b_trk_mc_barcode);
   fChain->SetBranchAddress("trk_conv_weight", &trk_conv_weight, &b_trk_conv_weight);
   fChain->SetBranchAddress("beamSpot_x", &beamSpot_x, &b_beamSpot_x);
   fChain->SetBranchAddress("beamSpot_y", &beamSpot_y, &b_beamSpot_y);
   fChain->SetBranchAddress("beamSpot_z", &beamSpot_z, &b_beamSpot_z);
   fChain->SetBranchAddress("beamSpot_sigma_x", &beamSpot_sigma_x, &b_beamSpot_sigma_x);
   fChain->SetBranchAddress("beamSpot_sigma_y", &beamSpot_sigma_y, &b_beamSpot_sigma_y);
   fChain->SetBranchAddress("beamSpot_sigma_z", &beamSpot_sigma_z, &b_beamSpot_sigma_z);
   fChain->SetBranchAddress("mu_n", &mu_n, &b_mu_n);
   fChain->SetBranchAddress("mu_E", &mu_E, &b_mu_E);
   fChain->SetBranchAddress("mu_pt", &mu_pt, &b_mu_pt);
   fChain->SetBranchAddress("mu_m", &mu_m, &b_mu_m);
   fChain->SetBranchAddress("mu_eta", &mu_eta, &b_mu_eta);
   fChain->SetBranchAddress("mu_phi", &mu_phi, &b_mu_phi);
   fChain->SetBranchAddress("mu_px", &mu_px, &b_mu_px);
   fChain->SetBranchAddress("mu_py", &mu_py, &b_mu_py);
   fChain->SetBranchAddress("mu_pz", &mu_pz, &b_mu_pz);
   fChain->SetBranchAddress("mu_charge", &mu_charge, &b_mu_charge);
   fChain->SetBranchAddress("mu_allauthor", &mu_allauthor, &b_mu_allauthor);
   fChain->SetBranchAddress("mu_hastrack", &mu_hastrack, &b_mu_hastrack);
   fChain->SetBranchAddress("mu_truth_dr", &mu_truth_dr, &b_mu_truth_dr);
   fChain->SetBranchAddress("mu_truth_E", &mu_truth_E, &b_mu_truth_E);
   fChain->SetBranchAddress("mu_truth_pt", &mu_truth_pt, &b_mu_truth_pt);
   fChain->SetBranchAddress("mu_truth_eta", &mu_truth_eta, &b_mu_truth_eta);
   fChain->SetBranchAddress("mu_truth_phi", &mu_truth_phi, &b_mu_truth_phi);
   fChain->SetBranchAddress("mu_truth_type", &mu_truth_type, &b_mu_truth_type);
   fChain->SetBranchAddress("mu_truth_status", &mu_truth_status, &b_mu_truth_status);
   fChain->SetBranchAddress("mu_truth_barcode", &mu_truth_barcode, &b_mu_truth_barcode);
   fChain->SetBranchAddress("mu_truth_mothertype", &mu_truth_mothertype, &b_mu_truth_mothertype);
   fChain->SetBranchAddress("mu_truth_motherbarcode", &mu_truth_motherbarcode, &b_mu_truth_motherbarcode);
   fChain->SetBranchAddress("mu_truth_matched", &mu_truth_matched, &b_mu_truth_matched);
   fChain->SetBranchAddress("mu_author", &mu_author, &b_mu_author);
   fChain->SetBranchAddress("mu_beta", &mu_beta, &b_mu_beta);
   fChain->SetBranchAddress("mu_isMuonLikelihood", &mu_isMuonLikelihood, &b_mu_isMuonLikelihood);
   fChain->SetBranchAddress("mu_matchchi2", &mu_matchchi2, &b_mu_matchchi2);
   fChain->SetBranchAddress("mu_matchndof", &mu_matchndof, &b_mu_matchndof);
   fChain->SetBranchAddress("mu_etcone20", &mu_etcone20, &b_mu_etcone20);
   fChain->SetBranchAddress("mu_etcone30", &mu_etcone30, &b_mu_etcone30);
   fChain->SetBranchAddress("mu_etcone40", &mu_etcone40, &b_mu_etcone40);
   fChain->SetBranchAddress("mu_nucone20", &mu_nucone20, &b_mu_nucone20);
   fChain->SetBranchAddress("mu_nucone30", &mu_nucone30, &b_mu_nucone30);
   fChain->SetBranchAddress("mu_nucone40", &mu_nucone40, &b_mu_nucone40);
   fChain->SetBranchAddress("mu_ptcone20", &mu_ptcone20, &b_mu_ptcone20);
   fChain->SetBranchAddress("mu_ptcone30", &mu_ptcone30, &b_mu_ptcone30);
   fChain->SetBranchAddress("mu_ptcone40", &mu_ptcone40, &b_mu_ptcone40);
   fChain->SetBranchAddress("mu_energyLossPar", &mu_energyLossPar, &b_mu_energyLossPar);
   fChain->SetBranchAddress("mu_energyLossErr", &mu_energyLossErr, &b_mu_energyLossErr);
   fChain->SetBranchAddress("mu_etCore", &mu_etCore, &b_mu_etCore);
   fChain->SetBranchAddress("mu_energyLossType", &mu_energyLossType, &b_mu_energyLossType);
   fChain->SetBranchAddress("mu_caloMuonIdTag", &mu_caloMuonIdTag, &b_mu_caloMuonIdTag);
   fChain->SetBranchAddress("mu_caloLRLikelihood", &mu_caloLRLikelihood, &b_mu_caloLRLikelihood);
   fChain->SetBranchAddress("mu_bestMatch", &mu_bestMatch, &b_mu_bestMatch);
   fChain->SetBranchAddress("mu_isStandAloneMuon", &mu_isStandAloneMuon, &b_mu_isStandAloneMuon);
   fChain->SetBranchAddress("mu_isCombinedMuon", &mu_isCombinedMuon, &b_mu_isCombinedMuon);
   fChain->SetBranchAddress("mu_isLowPtReconstructedMuon", &mu_isLowPtReconstructedMuon, &b_mu_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_isSegmentTaggedMuon", &mu_isSegmentTaggedMuon, &b_mu_isSegmentTaggedMuon);
   fChain->SetBranchAddress("mu_isCaloMuonId", &mu_isCaloMuonId, &b_mu_isCaloMuonId);
   fChain->SetBranchAddress("mu_alsoFoundByLowPt", &mu_alsoFoundByLowPt, &b_mu_alsoFoundByLowPt);
   fChain->SetBranchAddress("mu_alsoFoundByCaloMuonId", &mu_alsoFoundByCaloMuonId, &b_mu_alsoFoundByCaloMuonId);
   fChain->SetBranchAddress("mu_loose", &mu_loose, &b_mu_loose);
   fChain->SetBranchAddress("mu_medium", &mu_medium, &b_mu_medium);
   fChain->SetBranchAddress("mu_tight", &mu_tight, &b_mu_tight);
   fChain->SetBranchAddress("diphoton_n", &diphoton_n, &b_diphoton_n);
   fChain->SetBranchAddress("diphoton_fit_etaLead_zcommon", &diphoton_fit_etaLead_zcommon, &b_diphoton_fit_etaLead_zcommon);
   fChain->SetBranchAddress("diphoton_fit_etaSublead_zcommon", &diphoton_fit_etaSublead_zcommon, &b_diphoton_fit_etaSublead_zcommon);
   fChain->SetBranchAddress("diphoton_fit_zcommon", &diphoton_fit_zcommon, &b_diphoton_fit_zcommon);
   fChain->SetBranchAddress("diphoton_fit_sigma_zcommon", &diphoton_fit_sigma_zcommon, &b_diphoton_fit_sigma_zcommon);
   fChain->SetBranchAddress("diphoton_fit_vtxLikelihood", &diphoton_fit_vtxLikelihood, &b_diphoton_fit_vtxLikelihood);
   fChain->SetBranchAddress("diphoton_fit_mgg", &diphoton_fit_mgg, &b_diphoton_fit_mgg);
   fChain->SetBranchAddress("diphoton_fit_mgg_trueDir", &diphoton_fit_mgg_trueDir, &b_diphoton_fit_mgg_trueDir);
   fChain->SetBranchAddress("diphoton_fit_mgg_trueE", &diphoton_fit_mgg_trueE, &b_diphoton_fit_mgg_trueE);
   fChain->SetBranchAddress("diphoton_fit_fitFlag", &diphoton_fit_fitFlag, &b_diphoton_fit_fitFlag);
   fChain->SetBranchAddress("diphoton_fit_ptgg", &diphoton_fit_ptgg, &b_diphoton_fit_ptgg);
   fChain->SetBranchAddress("diphoton_fit_detagg", &diphoton_fit_detagg, &b_diphoton_fit_detagg);
   fChain->SetBranchAddress("diphoton_fit_cosThetaStar", &diphoton_fit_cosThetaStar, &b_diphoton_fit_cosThetaStar);
   fChain->SetBranchAddress("diphoton_onejet_cutStatus", &diphoton_onejet_cutStatus, &b_diphoton_onejet_cutStatus);
   fChain->SetBranchAddress("diphoton_onejet_ok", &diphoton_onejet_ok, &b_diphoton_onejet_ok);
   fChain->SetBranchAddress("diphoton_onejet_mgg", &diphoton_onejet_mgg, &b_diphoton_onejet_mgg);
   fChain->SetBranchAddress("diphoton_onejet_mggj", &diphoton_onejet_mggj, &b_diphoton_onejet_mggj);
   fChain->SetBranchAddress("diphoton_twojet_cutStatus", &diphoton_twojet_cutStatus, &b_diphoton_twojet_cutStatus);
   fChain->SetBranchAddress("diphoton_twojet_ok", &diphoton_twojet_ok, &b_diphoton_twojet_ok);
   fChain->SetBranchAddress("diphoton_twojet_mgg", &diphoton_twojet_mgg, &b_diphoton_twojet_mgg);
   fChain->SetBranchAddress("diphoton_twojet_mjj", &diphoton_twojet_mjj, &b_diphoton_twojet_mjj);
   fChain->SetBranchAddress("diphoton_hggZWjj_SumTracksPT", &diphoton_hggZWjj_SumTracksPT, &b_diphoton_hggZWjj_SumTracksPT);
   fChain->SetBranchAddress("diphoton_hggZWjj_mjjZW_tracks", &diphoton_hggZWjj_mjjZW_tracks, &b_diphoton_hggZWjj_mjjZW_tracks);
   fChain->SetBranchAddress("diphoton_hggZWjj_mjjZW", &diphoton_hggZWjj_mjjZW, &b_diphoton_hggZWjj_mjjZW);
   fChain->SetBranchAddress("diphoton_hggZWjj_ZW7Njet", &diphoton_hggZWjj_ZW7Njet, &b_diphoton_hggZWjj_ZW7Njet);
   fChain->SetBranchAddress("diphoton_hggZWjj_PTjjZW", &diphoton_hggZWjj_PTjjZW, &b_diphoton_hggZWjj_PTjjZW);
   fChain->SetBranchAddress("diphoton_hggZWjj_PTjjZW_tracks", &diphoton_hggZWjj_PTjjZW_tracks, &b_diphoton_hggZWjj_PTjjZW_tracks);
   fChain->SetBranchAddress("diphoton_hggZWjj_hggZWjj_ok", &diphoton_hggZWjj_hggZWjj_ok, &b_diphoton_hggZWjj_hggZWjj_ok);
   fChain->SetBranchAddress("diphoton_hggZWjj_hggZWdeltaRjj", &diphoton_hggZWjj_hggZWdeltaRjj, &b_diphoton_hggZWjj_hggZWdeltaRjj);
   fChain->SetBranchAddress("diphoton_hggZWjj_PTjZW", &diphoton_hggZWjj_PTjZW, &b_diphoton_hggZWjj_PTjZW);
   fChain->SetBranchAddress("diphoton_hggZWjj_PTjZWTracks", &diphoton_hggZWjj_PTjZWTracks, &b_diphoton_hggZWjj_PTjZWTracks);
   fChain->SetBranchAddress("diphoton_hggZWjj_EtajZW", &diphoton_hggZWjj_EtajZW, &b_diphoton_hggZWjj_EtajZW);
   fChain->SetBranchAddress("diphoton_hggZWjj_SumTracksPT4", &diphoton_hggZWjj_SumTracksPT4, &b_diphoton_hggZWjj_SumTracksPT4);
   fChain->SetBranchAddress("diphoton_hggZWjj_mjjZW4_tracks", &diphoton_hggZWjj_mjjZW4_tracks, &b_diphoton_hggZWjj_mjjZW4_tracks);
   fChain->SetBranchAddress("diphoton_hggZWjj_mjjZW4", &diphoton_hggZWjj_mjjZW4, &b_diphoton_hggZWjj_mjjZW4);
   fChain->SetBranchAddress("diphoton_hggZWjj_ZW4Njet", &diphoton_hggZWjj_ZW4Njet, &b_diphoton_hggZWjj_ZW4Njet);
   fChain->SetBranchAddress("diphoton_hggZWjj_PTjjZW4", &diphoton_hggZWjj_PTjjZW4, &b_diphoton_hggZWjj_PTjjZW4);
   fChain->SetBranchAddress("diphoton_hggZWjj_PTjjZW4_tracks", &diphoton_hggZWjj_PTjjZW4_tracks, &b_diphoton_hggZWjj_PTjjZW4_tracks);
   fChain->SetBranchAddress("diphoton_hggZWjj_DeltaRphotons", &diphoton_hggZWjj_DeltaRphotons, &b_diphoton_hggZWjj_DeltaRphotons);
   fChain->SetBranchAddress("diphoton_hggZWjj_PTjZW4", &diphoton_hggZWjj_PTjZW4, &b_diphoton_hggZWjj_PTjZW4);
   fChain->SetBranchAddress("diphoton_hggZWjj_PTjZW4Tracks", &diphoton_hggZWjj_PTjZW4Tracks, &b_diphoton_hggZWjj_PTjZW4Tracks);
   fChain->SetBranchAddress("diphoton_hggZWjj_EtajZW4", &diphoton_hggZWjj_EtajZW4, &b_diphoton_hggZWjj_EtajZW4);
   fChain->SetBranchAddress("diphoton_hggZWjj_hggetmiss_ok", &diphoton_hggZWjj_hggetmiss_ok, &b_diphoton_hggZWjj_hggetmiss_ok);
   fChain->SetBranchAddress("diphoton_hggZWjj_hgglepton_ok", &diphoton_hggZWjj_hgglepton_ok, &b_diphoton_hggZWjj_hgglepton_ok);
   fChain->SetBranchAddress("diphoton_hggZWjj_DeltaRmujet", &diphoton_hggZWjj_DeltaRmujet, &b_diphoton_hggZWjj_DeltaRmujet);
   fChain->SetBranchAddress("diphoton_HPV_zcommon", &diphoton_HPV_zcommon, &b_diphoton_HPV_zcommon);
   fChain->SetBranchAddress("diphoton_HPV_sigma_zcommon", &diphoton_HPV_sigma_zcommon, &b_diphoton_HPV_sigma_zcommon);
   fChain->SetBranchAddress("diphoton_HPV_zcommon_primVtxLH", &diphoton_HPV_zcommon_primVtxLH, &b_diphoton_HPV_zcommon_primVtxLH);
   fChain->SetBranchAddress("diphoton_HPV_vtxLikelihood", &diphoton_HPV_vtxLikelihood, &b_diphoton_HPV_vtxLikelihood);
   fChain->SetBranchAddress("diphoton_HPV_etaLead_zcommon", &diphoton_HPV_etaLead_zcommon, &b_diphoton_HPV_etaLead_zcommon);
   fChain->SetBranchAddress("diphoton_HPV_etaSublead_zcommon", &diphoton_HPV_etaSublead_zcommon, &b_diphoton_HPV_etaSublead_zcommon);
   fChain->SetBranchAddress("diphoton_HPV_mgg", &diphoton_HPV_mgg, &b_diphoton_HPV_mgg);
   fChain->SetBranchAddress("diphoton_HPV_etaLead_zcommon_primVtxLH", &diphoton_HPV_etaLead_zcommon_primVtxLH, &b_diphoton_HPV_etaLead_zcommon_primVtxLH);
   fChain->SetBranchAddress("diphoton_HPV_etaSublead_zcommon_primVtxLH", &diphoton_HPV_etaSublead_zcommon_primVtxLH, &b_diphoton_HPV_etaSublead_zcommon_primVtxLH);
   fChain->SetBranchAddress("diphoton_HPV_mgg_primVtxLH", &diphoton_HPV_mgg_primVtxLH, &b_diphoton_HPV_mgg_primVtxLH);
   fChain->SetBranchAddress("diphoton_HPV_mgg_Ztruth", &diphoton_HPV_mgg_Ztruth, &b_diphoton_HPV_mgg_Ztruth);
   fChain->SetBranchAddress("diphoton_HPV_ptgg", &diphoton_HPV_ptgg, &b_diphoton_HPV_ptgg);
   fChain->SetBranchAddress("diphoton_HPV_detagg", &diphoton_HPV_detagg, &b_diphoton_HPV_detagg);
   fChain->SetBranchAddress("diphoton_HPV_dphigg", &diphoton_HPV_dphigg, &b_diphoton_HPV_dphigg);
   fChain->SetBranchAddress("diphoton_HPV_cosTh", &diphoton_HPV_cosTh, &b_diphoton_HPV_cosTh);
   fChain->SetBranchAddress("diphoton_HPV_cosThCS", &diphoton_HPV_cosThCS, &b_diphoton_HPV_cosThCS);
   fChain->SetBranchAddress("diphoton_ph_n", &diphoton_ph_n, &b_diphoton_ph_n);
   fChain->SetBranchAddress("diphoton_ph_index", &diphoton_ph_index, &b_diphoton_ph_index);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_n", &jet_AntiKt4TopoEMJets_n, &b_jet_AntiKt4TopoEMJets_n);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_E", &jet_AntiKt4TopoEMJets_E, &b_jet_AntiKt4TopoEMJets_E);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_pt", &jet_AntiKt4TopoEMJets_pt, &b_jet_AntiKt4TopoEMJets_pt);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_m", &jet_AntiKt4TopoEMJets_m, &b_jet_AntiKt4TopoEMJets_m);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_eta", &jet_AntiKt4TopoEMJets_eta, &b_jet_AntiKt4TopoEMJets_eta);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_phi", &jet_AntiKt4TopoEMJets_phi, &b_jet_AntiKt4TopoEMJets_phi);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_EtaOrigin", &jet_AntiKt4TopoEMJets_EtaOrigin, &b_jet_AntiKt4TopoEMJets_EtaOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_PhiOrigin", &jet_AntiKt4TopoEMJets_PhiOrigin, &b_jet_AntiKt4TopoEMJets_PhiOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_MOrigin", &jet_AntiKt4TopoEMJets_MOrigin, &b_jet_AntiKt4TopoEMJets_MOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_EtaOriginEM", &jet_AntiKt4TopoEMJets_EtaOriginEM, &b_jet_AntiKt4TopoEMJets_EtaOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_PhiOriginEM", &jet_AntiKt4TopoEMJets_PhiOriginEM, &b_jet_AntiKt4TopoEMJets_PhiOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_MOriginEM", &jet_AntiKt4TopoEMJets_MOriginEM, &b_jet_AntiKt4TopoEMJets_MOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_WIDTH", &jet_AntiKt4TopoEMJets_WIDTH, &b_jet_AntiKt4TopoEMJets_WIDTH);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_n90", &jet_AntiKt4TopoEMJets_n90, &b_jet_AntiKt4TopoEMJets_n90);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_Timing", &jet_AntiKt4TopoEMJets_Timing, &b_jet_AntiKt4TopoEMJets_Timing);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_LArQuality", &jet_AntiKt4TopoEMJets_LArQuality, &b_jet_AntiKt4TopoEMJets_LArQuality);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_nTrk", &jet_AntiKt4TopoEMJets_nTrk, &b_jet_AntiKt4TopoEMJets_nTrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_sumPtTrk", &jet_AntiKt4TopoEMJets_sumPtTrk, &b_jet_AntiKt4TopoEMJets_sumPtTrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_OriginIndex", &jet_AntiKt4TopoEMJets_OriginIndex, &b_jet_AntiKt4TopoEMJets_OriginIndex);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_HECQuality", &jet_AntiKt4TopoEMJets_HECQuality, &b_jet_AntiKt4TopoEMJets_HECQuality);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_NegativeE", &jet_AntiKt4TopoEMJets_NegativeE, &b_jet_AntiKt4TopoEMJets_NegativeE);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_AverageLArQF", &jet_AntiKt4TopoEMJets_AverageLArQF, &b_jet_AntiKt4TopoEMJets_AverageLArQF);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_YFlip12", &jet_AntiKt4TopoEMJets_YFlip12, &b_jet_AntiKt4TopoEMJets_YFlip12);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_YFlip23", &jet_AntiKt4TopoEMJets_YFlip23, &b_jet_AntiKt4TopoEMJets_YFlip23);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_BCH_CORR_CELL", &jet_AntiKt4TopoEMJets_BCH_CORR_CELL, &b_jet_AntiKt4TopoEMJets_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_BCH_CORR_DOTX", &jet_AntiKt4TopoEMJets_BCH_CORR_DOTX, &b_jet_AntiKt4TopoEMJets_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_BCH_CORR_JET", &jet_AntiKt4TopoEMJets_BCH_CORR_JET, &b_jet_AntiKt4TopoEMJets_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_BCH_CORR_JET_FORCELL", &jet_AntiKt4TopoEMJets_BCH_CORR_JET_FORCELL, &b_jet_AntiKt4TopoEMJets_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_ENG_BAD_CELLS", &jet_AntiKt4TopoEMJets_ENG_BAD_CELLS, &b_jet_AntiKt4TopoEMJets_ENG_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_N_BAD_CELLS", &jet_AntiKt4TopoEMJets_N_BAD_CELLS, &b_jet_AntiKt4TopoEMJets_N_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_N_BAD_CELLS_CORR", &jet_AntiKt4TopoEMJets_N_BAD_CELLS_CORR, &b_jet_AntiKt4TopoEMJets_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_BAD_CELLS_CORR_E", &jet_AntiKt4TopoEMJets_BAD_CELLS_CORR_E, &b_jet_AntiKt4TopoEMJets_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_NumTowers", &jet_AntiKt4TopoEMJets_NumTowers, &b_jet_AntiKt4TopoEMJets_NumTowers);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_SamplingMax", &jet_AntiKt4TopoEMJets_SamplingMax, &b_jet_AntiKt4TopoEMJets_SamplingMax);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_fracSamplingMax", &jet_AntiKt4TopoEMJets_fracSamplingMax, &b_jet_AntiKt4TopoEMJets_fracSamplingMax);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_hecf", &jet_AntiKt4TopoEMJets_hecf, &b_jet_AntiKt4TopoEMJets_hecf);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_tgap3f", &jet_AntiKt4TopoEMJets_tgap3f, &b_jet_AntiKt4TopoEMJets_tgap3f);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_isUgly", &jet_AntiKt4TopoEMJets_isUgly, &b_jet_AntiKt4TopoEMJets_isUgly);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_isBadLooseMinus", &jet_AntiKt4TopoEMJets_isBadLooseMinus, &b_jet_AntiKt4TopoEMJets_isBadLooseMinus);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_isBadLoose", &jet_AntiKt4TopoEMJets_isBadLoose, &b_jet_AntiKt4TopoEMJets_isBadLoose);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_isBadMedium", &jet_AntiKt4TopoEMJets_isBadMedium, &b_jet_AntiKt4TopoEMJets_isBadMedium);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_isBadTight", &jet_AntiKt4TopoEMJets_isBadTight, &b_jet_AntiKt4TopoEMJets_isBadTight);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_emfrac", &jet_AntiKt4TopoEMJets_emfrac, &b_jet_AntiKt4TopoEMJets_emfrac);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_Offset", &jet_AntiKt4TopoEMJets_Offset, &b_jet_AntiKt4TopoEMJets_Offset);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_EMJES", &jet_AntiKt4TopoEMJets_EMJES, &b_jet_AntiKt4TopoEMJets_EMJES);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_EMJES_EtaCorr", &jet_AntiKt4TopoEMJets_EMJES_EtaCorr, &b_jet_AntiKt4TopoEMJets_EMJES_EtaCorr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_EMJESnooffset", &jet_AntiKt4TopoEMJets_EMJESnooffset, &b_jet_AntiKt4TopoEMJets_EMJESnooffset);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_GCWJES", &jet_AntiKt4TopoEMJets_GCWJES, &b_jet_AntiKt4TopoEMJets_GCWJES);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_GCWJES_EtaCorr", &jet_AntiKt4TopoEMJets_GCWJES_EtaCorr, &b_jet_AntiKt4TopoEMJets_GCWJES_EtaCorr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_CB", &jet_AntiKt4TopoEMJets_CB, &b_jet_AntiKt4TopoEMJets_CB);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_LCJES", &jet_AntiKt4TopoEMJets_LCJES, &b_jet_AntiKt4TopoEMJets_LCJES);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_emscale_E", &jet_AntiKt4TopoEMJets_emscale_E, &b_jet_AntiKt4TopoEMJets_emscale_E);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_emscale_pt", &jet_AntiKt4TopoEMJets_emscale_pt, &b_jet_AntiKt4TopoEMJets_emscale_pt);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_emscale_m", &jet_AntiKt4TopoEMJets_emscale_m, &b_jet_AntiKt4TopoEMJets_emscale_m);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_emscale_eta", &jet_AntiKt4TopoEMJets_emscale_eta, &b_jet_AntiKt4TopoEMJets_emscale_eta);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_emscale_phi", &jet_AntiKt4TopoEMJets_emscale_phi, &b_jet_AntiKt4TopoEMJets_emscale_phi);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_jvtx_x", &jet_AntiKt4TopoEMJets_jvtx_x, &b_jet_AntiKt4TopoEMJets_jvtx_x);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_jvtx_y", &jet_AntiKt4TopoEMJets_jvtx_y, &b_jet_AntiKt4TopoEMJets_jvtx_y);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_jvtx_z", &jet_AntiKt4TopoEMJets_jvtx_z, &b_jet_AntiKt4TopoEMJets_jvtx_z);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_jvtxf", &jet_AntiKt4TopoEMJets_jvtxf, &b_jet_AntiKt4TopoEMJets_jvtxf);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_jvtxfFull", &jet_AntiKt4TopoEMJets_jvtxfFull, &b_jet_AntiKt4TopoEMJets_jvtxfFull);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_GSCFactorF", &jet_AntiKt4TopoEMJets_GSCFactorF, &b_jet_AntiKt4TopoEMJets_GSCFactorF);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_WidthFraction", &jet_AntiKt4TopoEMJets_WidthFraction, &b_jet_AntiKt4TopoEMJets_WidthFraction);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_weight_Comb", &jet_AntiKt4TopoEMJets_flavor_weight_Comb, &b_jet_AntiKt4TopoEMJets_flavor_weight_Comb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_weight_IP2D", &jet_AntiKt4TopoEMJets_flavor_weight_IP2D, &b_jet_AntiKt4TopoEMJets_flavor_weight_IP2D);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_weight_IP3D", &jet_AntiKt4TopoEMJets_flavor_weight_IP3D, &b_jet_AntiKt4TopoEMJets_flavor_weight_IP3D);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_weight_SV0", &jet_AntiKt4TopoEMJets_flavor_weight_SV0, &b_jet_AntiKt4TopoEMJets_flavor_weight_SV0);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_weight_SV1", &jet_AntiKt4TopoEMJets_flavor_weight_SV1, &b_jet_AntiKt4TopoEMJets_flavor_weight_SV1);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_weight_SV2", &jet_AntiKt4TopoEMJets_flavor_weight_SV2, &b_jet_AntiKt4TopoEMJets_flavor_weight_SV2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_weight_JetProb", &jet_AntiKt4TopoEMJets_flavor_weight_JetProb, &b_jet_AntiKt4TopoEMJets_flavor_weight_JetProb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_weight_SoftMuonTag", &jet_AntiKt4TopoEMJets_flavor_weight_SoftMuonTag, &b_jet_AntiKt4TopoEMJets_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_weight_JetFitterTagNN", &jet_AntiKt4TopoEMJets_flavor_weight_JetFitterTagNN, &b_jet_AntiKt4TopoEMJets_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_weight_JetFitterCOMBNN", &jet_AntiKt4TopoEMJets_flavor_weight_JetFitterCOMBNN, &b_jet_AntiKt4TopoEMJets_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_weight_GbbNN", &jet_AntiKt4TopoEMJets_flavor_weight_GbbNN, &b_jet_AntiKt4TopoEMJets_flavor_weight_GbbNN);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_truth_label", &jet_AntiKt4TopoEMJets_flavor_truth_label, &b_jet_AntiKt4TopoEMJets_flavor_truth_label);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_truth_dRminToB", &jet_AntiKt4TopoEMJets_flavor_truth_dRminToB, &b_jet_AntiKt4TopoEMJets_flavor_truth_dRminToB);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_truth_dRminToC", &jet_AntiKt4TopoEMJets_flavor_truth_dRminToC, &b_jet_AntiKt4TopoEMJets_flavor_truth_dRminToC);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_truth_dRminToT", &jet_AntiKt4TopoEMJets_flavor_truth_dRminToT, &b_jet_AntiKt4TopoEMJets_flavor_truth_dRminToT);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_truth_BHadronpdg", &jet_AntiKt4TopoEMJets_flavor_truth_BHadronpdg, &b_jet_AntiKt4TopoEMJets_flavor_truth_BHadronpdg);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_truth_vx_x", &jet_AntiKt4TopoEMJets_flavor_truth_vx_x, &b_jet_AntiKt4TopoEMJets_flavor_truth_vx_x);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_truth_vx_y", &jet_AntiKt4TopoEMJets_flavor_truth_vx_y, &b_jet_AntiKt4TopoEMJets_flavor_truth_vx_y);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_truth_vx_z", &jet_AntiKt4TopoEMJets_flavor_truth_vx_z, &b_jet_AntiKt4TopoEMJets_flavor_truth_vx_z);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_ip2d_pu", &jet_AntiKt4TopoEMJets_flavor_component_ip2d_pu, &b_jet_AntiKt4TopoEMJets_flavor_component_ip2d_pu);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_ip2d_pb", &jet_AntiKt4TopoEMJets_flavor_component_ip2d_pb, &b_jet_AntiKt4TopoEMJets_flavor_component_ip2d_pb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_ip2d_isValid", &jet_AntiKt4TopoEMJets_flavor_component_ip2d_isValid, &b_jet_AntiKt4TopoEMJets_flavor_component_ip2d_isValid);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_ip2d_ntrk", &jet_AntiKt4TopoEMJets_flavor_component_ip2d_ntrk, &b_jet_AntiKt4TopoEMJets_flavor_component_ip2d_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_ip3d_pu", &jet_AntiKt4TopoEMJets_flavor_component_ip3d_pu, &b_jet_AntiKt4TopoEMJets_flavor_component_ip3d_pu);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_ip3d_pb", &jet_AntiKt4TopoEMJets_flavor_component_ip3d_pb, &b_jet_AntiKt4TopoEMJets_flavor_component_ip3d_pb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_ip3d_isValid", &jet_AntiKt4TopoEMJets_flavor_component_ip3d_isValid, &b_jet_AntiKt4TopoEMJets_flavor_component_ip3d_isValid);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_ip3d_ntrk", &jet_AntiKt4TopoEMJets_flavor_component_ip3d_ntrk, &b_jet_AntiKt4TopoEMJets_flavor_component_ip3d_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv1_pu", &jet_AntiKt4TopoEMJets_flavor_component_sv1_pu, &b_jet_AntiKt4TopoEMJets_flavor_component_sv1_pu);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv1_pb", &jet_AntiKt4TopoEMJets_flavor_component_sv1_pb, &b_jet_AntiKt4TopoEMJets_flavor_component_sv1_pb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv1_isValid", &jet_AntiKt4TopoEMJets_flavor_component_sv1_isValid, &b_jet_AntiKt4TopoEMJets_flavor_component_sv1_isValid);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv2_pu", &jet_AntiKt4TopoEMJets_flavor_component_sv2_pu, &b_jet_AntiKt4TopoEMJets_flavor_component_sv2_pu);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv2_pb", &jet_AntiKt4TopoEMJets_flavor_component_sv2_pb, &b_jet_AntiKt4TopoEMJets_flavor_component_sv2_pb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv2_isValid", &jet_AntiKt4TopoEMJets_flavor_component_sv2_isValid, &b_jet_AntiKt4TopoEMJets_flavor_component_sv2_isValid);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_pu", &jet_AntiKt4TopoEMJets_flavor_component_jfit_pu, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_pu);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_pb", &jet_AntiKt4TopoEMJets_flavor_component_jfit_pb, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_pb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_pc", &jet_AntiKt4TopoEMJets_flavor_component_jfit_pc, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_pc);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_isValid", &jet_AntiKt4TopoEMJets_flavor_component_jfit_isValid, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_isValid);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pu", &jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pu, &b_jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pu);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pb", &jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pb, &b_jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pc", &jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pc, &b_jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_pc);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_isValid", &jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_isValid, &b_jet_AntiKt4TopoEMJets_flavor_component_jfitcomb_isValid);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx", &jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx1t", &jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx1t, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_nvtx1t);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_ntrkAtVx", &jet_AntiKt4TopoEMJets_flavor_component_jfit_ntrkAtVx, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_ntrkAtVx);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_efrc", &jet_AntiKt4TopoEMJets_flavor_component_jfit_efrc, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_efrc);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_mass", &jet_AntiKt4TopoEMJets_flavor_component_jfit_mass, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_mass);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_sig3d", &jet_AntiKt4TopoEMJets_flavor_component_jfit_sig3d, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_sig3d);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaPhi", &jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaPhi, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaPhi);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaEta", &jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaEta, &b_jet_AntiKt4TopoEMJets_flavor_component_jfit_deltaEta);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_isValid", &jet_AntiKt4TopoEMJets_flavor_component_svp_isValid, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_isValid);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkv", &jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkv, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkv);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkj", &jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkj, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_ntrkj);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_n2t", &jet_AntiKt4TopoEMJets_flavor_component_svp_n2t, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_n2t);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_mass", &jet_AntiKt4TopoEMJets_flavor_component_svp_mass, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_mass);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_efrc", &jet_AntiKt4TopoEMJets_flavor_component_svp_efrc, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_efrc);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_x", &jet_AntiKt4TopoEMJets_flavor_component_svp_x, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_x);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_y", &jet_AntiKt4TopoEMJets_flavor_component_svp_y, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_y);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_z", &jet_AntiKt4TopoEMJets_flavor_component_svp_z, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_z);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_err_x", &jet_AntiKt4TopoEMJets_flavor_component_svp_err_x, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_err_x);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_err_y", &jet_AntiKt4TopoEMJets_flavor_component_svp_err_y, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_err_y);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_err_z", &jet_AntiKt4TopoEMJets_flavor_component_svp_err_z, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_err_z);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xy", &jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xy, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xy);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xz", &jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xz, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_cov_xz);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_cov_yz", &jet_AntiKt4TopoEMJets_flavor_component_svp_cov_yz, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_cov_yz);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_chi2", &jet_AntiKt4TopoEMJets_flavor_component_svp_chi2, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_chi2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_ndof", &jet_AntiKt4TopoEMJets_flavor_component_svp_ndof, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_ndof);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_svp_ntrk", &jet_AntiKt4TopoEMJets_flavor_component_svp_ntrk, &b_jet_AntiKt4TopoEMJets_flavor_component_svp_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_isValid", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_isValid, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_isValid);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkv", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkv, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkv);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkj", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkj, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrkj);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_n2t", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_n2t, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_n2t);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_mass", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_mass, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_mass);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_efrc", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_efrc, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_efrc);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_x", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_x, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_x);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_y", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_y, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_y);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_z", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_z, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_z);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_x", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_x, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_x);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_y", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_y, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_y);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_z", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_z, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_err_z);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xy", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xy, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xy);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xz", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xz, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_xz);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_yz", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_yz, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_cov_yz);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_chi2", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_chi2, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_chi2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_ndof", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_ndof, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_ndof);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrk", &jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrk, &b_jet_AntiKt4TopoEMJets_flavor_component_sv0p_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_el_dr", &jet_AntiKt4TopoEMJets_el_dr, &b_jet_AntiKt4TopoEMJets_el_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_el_matched", &jet_AntiKt4TopoEMJets_el_matched, &b_jet_AntiKt4TopoEMJets_el_matched);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_mu_dr", &jet_AntiKt4TopoEMJets_mu_dr, &b_jet_AntiKt4TopoEMJets_mu_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_mu_matched", &jet_AntiKt4TopoEMJets_mu_matched, &b_jet_AntiKt4TopoEMJets_mu_matched);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_L1_dr", &jet_AntiKt4TopoEMJets_L1_dr, &b_jet_AntiKt4TopoEMJets_L1_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_L1_matched", &jet_AntiKt4TopoEMJets_L1_matched, &b_jet_AntiKt4TopoEMJets_L1_matched);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_L2_dr", &jet_AntiKt4TopoEMJets_L2_dr, &b_jet_AntiKt4TopoEMJets_L2_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_L2_matched", &jet_AntiKt4TopoEMJets_L2_matched, &b_jet_AntiKt4TopoEMJets_L2_matched);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_EF_dr", &jet_AntiKt4TopoEMJets_EF_dr, &b_jet_AntiKt4TopoEMJets_EF_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJets_EF_matched", &jet_AntiKt4TopoEMJets_EF_matched, &b_jet_AntiKt4TopoEMJets_EF_matched);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_n", &jet_AntiKt6TopoEMJets_n, &b_jet_AntiKt6TopoEMJets_n);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_E", &jet_AntiKt6TopoEMJets_E, &b_jet_AntiKt6TopoEMJets_E);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_pt", &jet_AntiKt6TopoEMJets_pt, &b_jet_AntiKt6TopoEMJets_pt);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_m", &jet_AntiKt6TopoEMJets_m, &b_jet_AntiKt6TopoEMJets_m);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_eta", &jet_AntiKt6TopoEMJets_eta, &b_jet_AntiKt6TopoEMJets_eta);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_phi", &jet_AntiKt6TopoEMJets_phi, &b_jet_AntiKt6TopoEMJets_phi);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_EtaOrigin", &jet_AntiKt6TopoEMJets_EtaOrigin, &b_jet_AntiKt6TopoEMJets_EtaOrigin);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_PhiOrigin", &jet_AntiKt6TopoEMJets_PhiOrigin, &b_jet_AntiKt6TopoEMJets_PhiOrigin);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_MOrigin", &jet_AntiKt6TopoEMJets_MOrigin, &b_jet_AntiKt6TopoEMJets_MOrigin);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_EtaOriginEM", &jet_AntiKt6TopoEMJets_EtaOriginEM, &b_jet_AntiKt6TopoEMJets_EtaOriginEM);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_PhiOriginEM", &jet_AntiKt6TopoEMJets_PhiOriginEM, &b_jet_AntiKt6TopoEMJets_PhiOriginEM);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_MOriginEM", &jet_AntiKt6TopoEMJets_MOriginEM, &b_jet_AntiKt6TopoEMJets_MOriginEM);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_WIDTH", &jet_AntiKt6TopoEMJets_WIDTH, &b_jet_AntiKt6TopoEMJets_WIDTH);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_n90", &jet_AntiKt6TopoEMJets_n90, &b_jet_AntiKt6TopoEMJets_n90);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_Timing", &jet_AntiKt6TopoEMJets_Timing, &b_jet_AntiKt6TopoEMJets_Timing);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_LArQuality", &jet_AntiKt6TopoEMJets_LArQuality, &b_jet_AntiKt6TopoEMJets_LArQuality);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_nTrk", &jet_AntiKt6TopoEMJets_nTrk, &b_jet_AntiKt6TopoEMJets_nTrk);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_sumPtTrk", &jet_AntiKt6TopoEMJets_sumPtTrk, &b_jet_AntiKt6TopoEMJets_sumPtTrk);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_OriginIndex", &jet_AntiKt6TopoEMJets_OriginIndex, &b_jet_AntiKt6TopoEMJets_OriginIndex);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_HECQuality", &jet_AntiKt6TopoEMJets_HECQuality, &b_jet_AntiKt6TopoEMJets_HECQuality);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_NegativeE", &jet_AntiKt6TopoEMJets_NegativeE, &b_jet_AntiKt6TopoEMJets_NegativeE);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_AverageLArQF", &jet_AntiKt6TopoEMJets_AverageLArQF, &b_jet_AntiKt6TopoEMJets_AverageLArQF);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_YFlip12", &jet_AntiKt6TopoEMJets_YFlip12, &b_jet_AntiKt6TopoEMJets_YFlip12);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_YFlip23", &jet_AntiKt6TopoEMJets_YFlip23, &b_jet_AntiKt6TopoEMJets_YFlip23);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_BCH_CORR_CELL", &jet_AntiKt6TopoEMJets_BCH_CORR_CELL, &b_jet_AntiKt6TopoEMJets_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_BCH_CORR_DOTX", &jet_AntiKt6TopoEMJets_BCH_CORR_DOTX, &b_jet_AntiKt6TopoEMJets_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_BCH_CORR_JET", &jet_AntiKt6TopoEMJets_BCH_CORR_JET, &b_jet_AntiKt6TopoEMJets_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_BCH_CORR_JET_FORCELL", &jet_AntiKt6TopoEMJets_BCH_CORR_JET_FORCELL, &b_jet_AntiKt6TopoEMJets_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_ENG_BAD_CELLS", &jet_AntiKt6TopoEMJets_ENG_BAD_CELLS, &b_jet_AntiKt6TopoEMJets_ENG_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_N_BAD_CELLS", &jet_AntiKt6TopoEMJets_N_BAD_CELLS, &b_jet_AntiKt6TopoEMJets_N_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_N_BAD_CELLS_CORR", &jet_AntiKt6TopoEMJets_N_BAD_CELLS_CORR, &b_jet_AntiKt6TopoEMJets_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_BAD_CELLS_CORR_E", &jet_AntiKt6TopoEMJets_BAD_CELLS_CORR_E, &b_jet_AntiKt6TopoEMJets_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_NumTowers", &jet_AntiKt6TopoEMJets_NumTowers, &b_jet_AntiKt6TopoEMJets_NumTowers);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_SamplingMax", &jet_AntiKt6TopoEMJets_SamplingMax, &b_jet_AntiKt6TopoEMJets_SamplingMax);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_fracSamplingMax", &jet_AntiKt6TopoEMJets_fracSamplingMax, &b_jet_AntiKt6TopoEMJets_fracSamplingMax);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_hecf", &jet_AntiKt6TopoEMJets_hecf, &b_jet_AntiKt6TopoEMJets_hecf);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_tgap3f", &jet_AntiKt6TopoEMJets_tgap3f, &b_jet_AntiKt6TopoEMJets_tgap3f);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_isUgly", &jet_AntiKt6TopoEMJets_isUgly, &b_jet_AntiKt6TopoEMJets_isUgly);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_isBadLooseMinus", &jet_AntiKt6TopoEMJets_isBadLooseMinus, &b_jet_AntiKt6TopoEMJets_isBadLooseMinus);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_isBadLoose", &jet_AntiKt6TopoEMJets_isBadLoose, &b_jet_AntiKt6TopoEMJets_isBadLoose);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_isBadMedium", &jet_AntiKt6TopoEMJets_isBadMedium, &b_jet_AntiKt6TopoEMJets_isBadMedium);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_isBadTight", &jet_AntiKt6TopoEMJets_isBadTight, &b_jet_AntiKt6TopoEMJets_isBadTight);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_emfrac", &jet_AntiKt6TopoEMJets_emfrac, &b_jet_AntiKt6TopoEMJets_emfrac);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_Offset", &jet_AntiKt6TopoEMJets_Offset, &b_jet_AntiKt6TopoEMJets_Offset);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_EMJES", &jet_AntiKt6TopoEMJets_EMJES, &b_jet_AntiKt6TopoEMJets_EMJES);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_EMJES_EtaCorr", &jet_AntiKt6TopoEMJets_EMJES_EtaCorr, &b_jet_AntiKt6TopoEMJets_EMJES_EtaCorr);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_EMJESnooffset", &jet_AntiKt6TopoEMJets_EMJESnooffset, &b_jet_AntiKt6TopoEMJets_EMJESnooffset);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_GCWJES", &jet_AntiKt6TopoEMJets_GCWJES, &b_jet_AntiKt6TopoEMJets_GCWJES);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_GCWJES_EtaCorr", &jet_AntiKt6TopoEMJets_GCWJES_EtaCorr, &b_jet_AntiKt6TopoEMJets_GCWJES_EtaCorr);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_CB", &jet_AntiKt6TopoEMJets_CB, &b_jet_AntiKt6TopoEMJets_CB);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_LCJES", &jet_AntiKt6TopoEMJets_LCJES, &b_jet_AntiKt6TopoEMJets_LCJES);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_emscale_E", &jet_AntiKt6TopoEMJets_emscale_E, &b_jet_AntiKt6TopoEMJets_emscale_E);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_emscale_pt", &jet_AntiKt6TopoEMJets_emscale_pt, &b_jet_AntiKt6TopoEMJets_emscale_pt);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_emscale_m", &jet_AntiKt6TopoEMJets_emscale_m, &b_jet_AntiKt6TopoEMJets_emscale_m);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_emscale_eta", &jet_AntiKt6TopoEMJets_emscale_eta, &b_jet_AntiKt6TopoEMJets_emscale_eta);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_emscale_phi", &jet_AntiKt6TopoEMJets_emscale_phi, &b_jet_AntiKt6TopoEMJets_emscale_phi);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_jvtx_x", &jet_AntiKt6TopoEMJets_jvtx_x, &b_jet_AntiKt6TopoEMJets_jvtx_x);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_jvtx_y", &jet_AntiKt6TopoEMJets_jvtx_y, &b_jet_AntiKt6TopoEMJets_jvtx_y);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_jvtx_z", &jet_AntiKt6TopoEMJets_jvtx_z, &b_jet_AntiKt6TopoEMJets_jvtx_z);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_jvtxf", &jet_AntiKt6TopoEMJets_jvtxf, &b_jet_AntiKt6TopoEMJets_jvtxf);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_jvtxfFull", &jet_AntiKt6TopoEMJets_jvtxfFull, &b_jet_AntiKt6TopoEMJets_jvtxfFull);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_GSCFactorF", &jet_AntiKt6TopoEMJets_GSCFactorF, &b_jet_AntiKt6TopoEMJets_GSCFactorF);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_WidthFraction", &jet_AntiKt6TopoEMJets_WidthFraction, &b_jet_AntiKt6TopoEMJets_WidthFraction);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_weight_Comb", &jet_AntiKt6TopoEMJets_flavor_weight_Comb, &b_jet_AntiKt6TopoEMJets_flavor_weight_Comb);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_weight_IP2D", &jet_AntiKt6TopoEMJets_flavor_weight_IP2D, &b_jet_AntiKt6TopoEMJets_flavor_weight_IP2D);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_weight_IP3D", &jet_AntiKt6TopoEMJets_flavor_weight_IP3D, &b_jet_AntiKt6TopoEMJets_flavor_weight_IP3D);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_weight_SV0", &jet_AntiKt6TopoEMJets_flavor_weight_SV0, &b_jet_AntiKt6TopoEMJets_flavor_weight_SV0);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_weight_SV1", &jet_AntiKt6TopoEMJets_flavor_weight_SV1, &b_jet_AntiKt6TopoEMJets_flavor_weight_SV1);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_weight_SV2", &jet_AntiKt6TopoEMJets_flavor_weight_SV2, &b_jet_AntiKt6TopoEMJets_flavor_weight_SV2);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_weight_JetProb", &jet_AntiKt6TopoEMJets_flavor_weight_JetProb, &b_jet_AntiKt6TopoEMJets_flavor_weight_JetProb);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_weight_SoftMuonTag", &jet_AntiKt6TopoEMJets_flavor_weight_SoftMuonTag, &b_jet_AntiKt6TopoEMJets_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_weight_JetFitterTagNN", &jet_AntiKt6TopoEMJets_flavor_weight_JetFitterTagNN, &b_jet_AntiKt6TopoEMJets_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_weight_JetFitterCOMBNN", &jet_AntiKt6TopoEMJets_flavor_weight_JetFitterCOMBNN, &b_jet_AntiKt6TopoEMJets_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_weight_GbbNN", &jet_AntiKt6TopoEMJets_flavor_weight_GbbNN, &b_jet_AntiKt6TopoEMJets_flavor_weight_GbbNN);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_truth_label", &jet_AntiKt6TopoEMJets_flavor_truth_label, &b_jet_AntiKt6TopoEMJets_flavor_truth_label);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_truth_dRminToB", &jet_AntiKt6TopoEMJets_flavor_truth_dRminToB, &b_jet_AntiKt6TopoEMJets_flavor_truth_dRminToB);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_truth_dRminToC", &jet_AntiKt6TopoEMJets_flavor_truth_dRminToC, &b_jet_AntiKt6TopoEMJets_flavor_truth_dRminToC);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_truth_dRminToT", &jet_AntiKt6TopoEMJets_flavor_truth_dRminToT, &b_jet_AntiKt6TopoEMJets_flavor_truth_dRminToT);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_truth_BHadronpdg", &jet_AntiKt6TopoEMJets_flavor_truth_BHadronpdg, &b_jet_AntiKt6TopoEMJets_flavor_truth_BHadronpdg);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_truth_vx_x", &jet_AntiKt6TopoEMJets_flavor_truth_vx_x, &b_jet_AntiKt6TopoEMJets_flavor_truth_vx_x);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_truth_vx_y", &jet_AntiKt6TopoEMJets_flavor_truth_vx_y, &b_jet_AntiKt6TopoEMJets_flavor_truth_vx_y);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_truth_vx_z", &jet_AntiKt6TopoEMJets_flavor_truth_vx_z, &b_jet_AntiKt6TopoEMJets_flavor_truth_vx_z);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_ip2d_pu", &jet_AntiKt6TopoEMJets_flavor_component_ip2d_pu, &b_jet_AntiKt6TopoEMJets_flavor_component_ip2d_pu);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_ip2d_pb", &jet_AntiKt6TopoEMJets_flavor_component_ip2d_pb, &b_jet_AntiKt6TopoEMJets_flavor_component_ip2d_pb);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_ip2d_isValid", &jet_AntiKt6TopoEMJets_flavor_component_ip2d_isValid, &b_jet_AntiKt6TopoEMJets_flavor_component_ip2d_isValid);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_ip2d_ntrk", &jet_AntiKt6TopoEMJets_flavor_component_ip2d_ntrk, &b_jet_AntiKt6TopoEMJets_flavor_component_ip2d_ntrk);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_ip3d_pu", &jet_AntiKt6TopoEMJets_flavor_component_ip3d_pu, &b_jet_AntiKt6TopoEMJets_flavor_component_ip3d_pu);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_ip3d_pb", &jet_AntiKt6TopoEMJets_flavor_component_ip3d_pb, &b_jet_AntiKt6TopoEMJets_flavor_component_ip3d_pb);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_ip3d_isValid", &jet_AntiKt6TopoEMJets_flavor_component_ip3d_isValid, &b_jet_AntiKt6TopoEMJets_flavor_component_ip3d_isValid);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_ip3d_ntrk", &jet_AntiKt6TopoEMJets_flavor_component_ip3d_ntrk, &b_jet_AntiKt6TopoEMJets_flavor_component_ip3d_ntrk);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv1_pu", &jet_AntiKt6TopoEMJets_flavor_component_sv1_pu, &b_jet_AntiKt6TopoEMJets_flavor_component_sv1_pu);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv1_pb", &jet_AntiKt6TopoEMJets_flavor_component_sv1_pb, &b_jet_AntiKt6TopoEMJets_flavor_component_sv1_pb);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv1_isValid", &jet_AntiKt6TopoEMJets_flavor_component_sv1_isValid, &b_jet_AntiKt6TopoEMJets_flavor_component_sv1_isValid);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv2_pu", &jet_AntiKt6TopoEMJets_flavor_component_sv2_pu, &b_jet_AntiKt6TopoEMJets_flavor_component_sv2_pu);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv2_pb", &jet_AntiKt6TopoEMJets_flavor_component_sv2_pb, &b_jet_AntiKt6TopoEMJets_flavor_component_sv2_pb);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv2_isValid", &jet_AntiKt6TopoEMJets_flavor_component_sv2_isValid, &b_jet_AntiKt6TopoEMJets_flavor_component_sv2_isValid);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_pu", &jet_AntiKt6TopoEMJets_flavor_component_jfit_pu, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_pu);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_pb", &jet_AntiKt6TopoEMJets_flavor_component_jfit_pb, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_pb);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_pc", &jet_AntiKt6TopoEMJets_flavor_component_jfit_pc, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_pc);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_isValid", &jet_AntiKt6TopoEMJets_flavor_component_jfit_isValid, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_isValid);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pu", &jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pu, &b_jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pu);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pb", &jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pb, &b_jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pb);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pc", &jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pc, &b_jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_pc);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_isValid", &jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_isValid, &b_jet_AntiKt6TopoEMJets_flavor_component_jfitcomb_isValid);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx", &jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx1t", &jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx1t, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_nvtx1t);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_ntrkAtVx", &jet_AntiKt6TopoEMJets_flavor_component_jfit_ntrkAtVx, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_ntrkAtVx);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_efrc", &jet_AntiKt6TopoEMJets_flavor_component_jfit_efrc, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_efrc);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_mass", &jet_AntiKt6TopoEMJets_flavor_component_jfit_mass, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_mass);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_sig3d", &jet_AntiKt6TopoEMJets_flavor_component_jfit_sig3d, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_sig3d);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaPhi", &jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaPhi, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaPhi);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaEta", &jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaEta, &b_jet_AntiKt6TopoEMJets_flavor_component_jfit_deltaEta);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_isValid", &jet_AntiKt6TopoEMJets_flavor_component_svp_isValid, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_isValid);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkv", &jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkv, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkv);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkj", &jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkj, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_ntrkj);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_n2t", &jet_AntiKt6TopoEMJets_flavor_component_svp_n2t, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_n2t);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_mass", &jet_AntiKt6TopoEMJets_flavor_component_svp_mass, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_mass);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_efrc", &jet_AntiKt6TopoEMJets_flavor_component_svp_efrc, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_efrc);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_x", &jet_AntiKt6TopoEMJets_flavor_component_svp_x, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_x);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_y", &jet_AntiKt6TopoEMJets_flavor_component_svp_y, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_y);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_z", &jet_AntiKt6TopoEMJets_flavor_component_svp_z, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_z);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_err_x", &jet_AntiKt6TopoEMJets_flavor_component_svp_err_x, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_err_x);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_err_y", &jet_AntiKt6TopoEMJets_flavor_component_svp_err_y, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_err_y);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_err_z", &jet_AntiKt6TopoEMJets_flavor_component_svp_err_z, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_err_z);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xy", &jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xy, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xy);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xz", &jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xz, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_cov_xz);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_cov_yz", &jet_AntiKt6TopoEMJets_flavor_component_svp_cov_yz, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_cov_yz);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_chi2", &jet_AntiKt6TopoEMJets_flavor_component_svp_chi2, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_chi2);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_ndof", &jet_AntiKt6TopoEMJets_flavor_component_svp_ndof, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_ndof);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_svp_ntrk", &jet_AntiKt6TopoEMJets_flavor_component_svp_ntrk, &b_jet_AntiKt6TopoEMJets_flavor_component_svp_ntrk);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_isValid", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_isValid, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_isValid);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkv", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkv, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkv);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkj", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkj, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrkj);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_n2t", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_n2t, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_n2t);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_mass", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_mass, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_mass);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_efrc", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_efrc, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_efrc);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_x", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_x, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_x);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_y", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_y, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_y);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_z", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_z, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_z);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_x", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_x, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_x);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_y", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_y, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_y);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_z", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_z, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_err_z);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xy", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xy, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xy);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xz", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xz, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_xz);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_yz", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_yz, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_cov_yz);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_chi2", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_chi2, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_chi2);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_ndof", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_ndof, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_ndof);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrk", &jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrk, &b_jet_AntiKt6TopoEMJets_flavor_component_sv0p_ntrk);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_el_dr", &jet_AntiKt6TopoEMJets_el_dr, &b_jet_AntiKt6TopoEMJets_el_dr);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_el_matched", &jet_AntiKt6TopoEMJets_el_matched, &b_jet_AntiKt6TopoEMJets_el_matched);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_mu_dr", &jet_AntiKt6TopoEMJets_mu_dr, &b_jet_AntiKt6TopoEMJets_mu_dr);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_mu_matched", &jet_AntiKt6TopoEMJets_mu_matched, &b_jet_AntiKt6TopoEMJets_mu_matched);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_L1_dr", &jet_AntiKt6TopoEMJets_L1_dr, &b_jet_AntiKt6TopoEMJets_L1_dr);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_L1_matched", &jet_AntiKt6TopoEMJets_L1_matched, &b_jet_AntiKt6TopoEMJets_L1_matched);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_L2_dr", &jet_AntiKt6TopoEMJets_L2_dr, &b_jet_AntiKt6TopoEMJets_L2_dr);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_L2_matched", &jet_AntiKt6TopoEMJets_L2_matched, &b_jet_AntiKt6TopoEMJets_L2_matched);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_EF_dr", &jet_AntiKt6TopoEMJets_EF_dr, &b_jet_AntiKt6TopoEMJets_EF_dr);
   fChain->SetBranchAddress("jet_AntiKt6TopoEMJets_EF_matched", &jet_AntiKt6TopoEMJets_EF_matched, &b_jet_AntiKt6TopoEMJets_EF_matched);
   fChain->SetBranchAddress("bunch_configID", &bunch_configID, &b_bunch_configID);
   fChain->SetBranchAddress("el_as_unconv_ph_n", &el_as_unconv_ph_n, &b_el_as_unconv_ph_n);
   fChain->SetBranchAddress("el_as_unconv_ph_cl_E", &el_as_unconv_ph_cl_E, &b_el_as_unconv_ph_cl_E);
   fChain->SetBranchAddress("el_as_unconv_ph_cl_pt", &el_as_unconv_ph_cl_pt, &b_el_as_unconv_ph_cl_pt);
   fChain->SetBranchAddress("el_as_unconv_ph_cl_eta", &el_as_unconv_ph_cl_eta, &b_el_as_unconv_ph_cl_eta);
   fChain->SetBranchAddress("el_as_unconv_ph_cl_phi", &el_as_unconv_ph_cl_phi, &b_el_as_unconv_ph_cl_phi);
   fChain->SetBranchAddress("el_as_unconv_ph_Es0", &el_as_unconv_ph_Es0, &b_el_as_unconv_ph_Es0);
   fChain->SetBranchAddress("el_as_unconv_ph_etas0", &el_as_unconv_ph_etas0, &b_el_as_unconv_ph_etas0);
   fChain->SetBranchAddress("el_as_unconv_ph_phis0", &el_as_unconv_ph_phis0, &b_el_as_unconv_ph_phis0);
   fChain->SetBranchAddress("el_as_unconv_ph_Es1", &el_as_unconv_ph_Es1, &b_el_as_unconv_ph_Es1);
   fChain->SetBranchAddress("el_as_unconv_ph_etas1", &el_as_unconv_ph_etas1, &b_el_as_unconv_ph_etas1);
   fChain->SetBranchAddress("el_as_unconv_ph_phis1", &el_as_unconv_ph_phis1, &b_el_as_unconv_ph_phis1);
   fChain->SetBranchAddress("el_as_unconv_ph_Es2", &el_as_unconv_ph_Es2, &b_el_as_unconv_ph_Es2);
   fChain->SetBranchAddress("el_as_unconv_ph_etas2", &el_as_unconv_ph_etas2, &b_el_as_unconv_ph_etas2);
   fChain->SetBranchAddress("el_as_unconv_ph_phis2", &el_as_unconv_ph_phis2, &b_el_as_unconv_ph_phis2);
   fChain->SetBranchAddress("el_as_unconv_ph_Es3", &el_as_unconv_ph_Es3, &b_el_as_unconv_ph_Es3);
   fChain->SetBranchAddress("el_as_unconv_ph_etas3", &el_as_unconv_ph_etas3, &b_el_as_unconv_ph_etas3);
   fChain->SetBranchAddress("el_as_unconv_ph_phis3", &el_as_unconv_ph_phis3, &b_el_as_unconv_ph_phis3);
   fChain->SetBranchAddress("el_as_unconv_ph_isEM", &el_as_unconv_ph_isEM, &b_el_as_unconv_ph_isEM);
   fChain->SetBranchAddress("el_as_unconv_ph_isEMLoose", &el_as_unconv_ph_isEMLoose, &b_el_as_unconv_ph_isEMLoose);
   fChain->SetBranchAddress("el_as_unconv_ph_isEMMedium", &el_as_unconv_ph_isEMMedium, &b_el_as_unconv_ph_isEMMedium);
   fChain->SetBranchAddress("el_as_unconv_ph_isEMTight", &el_as_unconv_ph_isEMTight, &b_el_as_unconv_ph_isEMTight);
   fChain->SetBranchAddress("el_as_unconv_ph_loose", &el_as_unconv_ph_loose, &b_el_as_unconv_ph_loose);
   fChain->SetBranchAddress("el_as_unconv_ph_tight", &el_as_unconv_ph_tight, &b_el_as_unconv_ph_tight);
   fChain->SetBranchAddress("el_as_unconv_ph_tightIso", &el_as_unconv_ph_tightIso, &b_el_as_unconv_ph_tightIso);
   fChain->SetBranchAddress("el_as_unconv_ph_Ethad", &el_as_unconv_ph_Ethad, &b_el_as_unconv_ph_Ethad);
   fChain->SetBranchAddress("el_as_unconv_ph_Ethad1", &el_as_unconv_ph_Ethad1, &b_el_as_unconv_ph_Ethad1);
   fChain->SetBranchAddress("el_as_unconv_ph_f1", &el_as_unconv_ph_f1, &b_el_as_unconv_ph_f1);
   fChain->SetBranchAddress("el_as_unconv_ph_f1core", &el_as_unconv_ph_f1core, &b_el_as_unconv_ph_f1core);
   fChain->SetBranchAddress("el_as_unconv_ph_Emins1", &el_as_unconv_ph_Emins1, &b_el_as_unconv_ph_Emins1);
   fChain->SetBranchAddress("el_as_unconv_ph_fside", &el_as_unconv_ph_fside, &b_el_as_unconv_ph_fside);
   fChain->SetBranchAddress("el_as_unconv_ph_Emax2", &el_as_unconv_ph_Emax2, &b_el_as_unconv_ph_Emax2);
   fChain->SetBranchAddress("el_as_unconv_ph_ws3", &el_as_unconv_ph_ws3, &b_el_as_unconv_ph_ws3);
   fChain->SetBranchAddress("el_as_unconv_ph_wstot", &el_as_unconv_ph_wstot, &b_el_as_unconv_ph_wstot);
   fChain->SetBranchAddress("el_as_unconv_ph_E132", &el_as_unconv_ph_E132, &b_el_as_unconv_ph_E132);
   fChain->SetBranchAddress("el_as_unconv_ph_E1152", &el_as_unconv_ph_E1152, &b_el_as_unconv_ph_E1152);
   fChain->SetBranchAddress("el_as_unconv_ph_emaxs1", &el_as_unconv_ph_emaxs1, &b_el_as_unconv_ph_emaxs1);
   fChain->SetBranchAddress("el_as_unconv_ph_deltaEs", &el_as_unconv_ph_deltaEs, &b_el_as_unconv_ph_deltaEs);
   fChain->SetBranchAddress("el_as_unconv_ph_E233", &el_as_unconv_ph_E233, &b_el_as_unconv_ph_E233);
   fChain->SetBranchAddress("el_as_unconv_ph_E237", &el_as_unconv_ph_E237, &b_el_as_unconv_ph_E237);
   fChain->SetBranchAddress("el_as_unconv_ph_E277", &el_as_unconv_ph_E277, &b_el_as_unconv_ph_E277);
   fChain->SetBranchAddress("el_as_unconv_ph_weta2", &el_as_unconv_ph_weta2, &b_el_as_unconv_ph_weta2);
   fChain->SetBranchAddress("el_as_conv_ph_n", &el_as_conv_ph_n, &b_el_as_conv_ph_n);
   fChain->SetBranchAddress("el_as_conv_ph_cl_E", &el_as_conv_ph_cl_E, &b_el_as_conv_ph_cl_E);
   fChain->SetBranchAddress("el_as_conv_ph_cl_pt", &el_as_conv_ph_cl_pt, &b_el_as_conv_ph_cl_pt);
   fChain->SetBranchAddress("el_as_conv_ph_cl_eta", &el_as_conv_ph_cl_eta, &b_el_as_conv_ph_cl_eta);
   fChain->SetBranchAddress("el_as_conv_ph_cl_phi", &el_as_conv_ph_cl_phi, &b_el_as_conv_ph_cl_phi);
   fChain->SetBranchAddress("el_as_conv_ph_Es0", &el_as_conv_ph_Es0, &b_el_as_conv_ph_Es0);
   fChain->SetBranchAddress("el_as_conv_ph_etas0", &el_as_conv_ph_etas0, &b_el_as_conv_ph_etas0);
   fChain->SetBranchAddress("el_as_conv_ph_phis0", &el_as_conv_ph_phis0, &b_el_as_conv_ph_phis0);
   fChain->SetBranchAddress("el_as_conv_ph_Es1", &el_as_conv_ph_Es1, &b_el_as_conv_ph_Es1);
   fChain->SetBranchAddress("el_as_conv_ph_etas1", &el_as_conv_ph_etas1, &b_el_as_conv_ph_etas1);
   fChain->SetBranchAddress("el_as_conv_ph_phis1", &el_as_conv_ph_phis1, &b_el_as_conv_ph_phis1);
   fChain->SetBranchAddress("el_as_conv_ph_Es2", &el_as_conv_ph_Es2, &b_el_as_conv_ph_Es2);
   fChain->SetBranchAddress("el_as_conv_ph_etas2", &el_as_conv_ph_etas2, &b_el_as_conv_ph_etas2);
   fChain->SetBranchAddress("el_as_conv_ph_phis2", &el_as_conv_ph_phis2, &b_el_as_conv_ph_phis2);
   fChain->SetBranchAddress("el_as_conv_ph_Es3", &el_as_conv_ph_Es3, &b_el_as_conv_ph_Es3);
   fChain->SetBranchAddress("el_as_conv_ph_etas3", &el_as_conv_ph_etas3, &b_el_as_conv_ph_etas3);
   fChain->SetBranchAddress("el_as_conv_ph_phis3", &el_as_conv_ph_phis3, &b_el_as_conv_ph_phis3);
   fChain->SetBranchAddress("el_as_conv_ph_isEM", &el_as_conv_ph_isEM, &b_el_as_conv_ph_isEM);
   fChain->SetBranchAddress("el_as_conv_ph_isEMLoose", &el_as_conv_ph_isEMLoose, &b_el_as_conv_ph_isEMLoose);
   fChain->SetBranchAddress("el_as_conv_ph_isEMMedium", &el_as_conv_ph_isEMMedium, &b_el_as_conv_ph_isEMMedium);
   fChain->SetBranchAddress("el_as_conv_ph_isEMTight", &el_as_conv_ph_isEMTight, &b_el_as_conv_ph_isEMTight);
   fChain->SetBranchAddress("el_as_conv_ph_loose", &el_as_conv_ph_loose, &b_el_as_conv_ph_loose);
   fChain->SetBranchAddress("el_as_conv_ph_tight", &el_as_conv_ph_tight, &b_el_as_conv_ph_tight);
   fChain->SetBranchAddress("el_as_conv_ph_tightIso", &el_as_conv_ph_tightIso, &b_el_as_conv_ph_tightIso);
   fChain->SetBranchAddress("el_as_conv_ph_Ethad", &el_as_conv_ph_Ethad, &b_el_as_conv_ph_Ethad);
   fChain->SetBranchAddress("el_as_conv_ph_Ethad1", &el_as_conv_ph_Ethad1, &b_el_as_conv_ph_Ethad1);
   fChain->SetBranchAddress("el_as_conv_ph_f1", &el_as_conv_ph_f1, &b_el_as_conv_ph_f1);
   fChain->SetBranchAddress("el_as_conv_ph_f1core", &el_as_conv_ph_f1core, &b_el_as_conv_ph_f1core);
   fChain->SetBranchAddress("el_as_conv_ph_Emins1", &el_as_conv_ph_Emins1, &b_el_as_conv_ph_Emins1);
   fChain->SetBranchAddress("el_as_conv_ph_fside", &el_as_conv_ph_fside, &b_el_as_conv_ph_fside);
   fChain->SetBranchAddress("el_as_conv_ph_Emax2", &el_as_conv_ph_Emax2, &b_el_as_conv_ph_Emax2);
   fChain->SetBranchAddress("el_as_conv_ph_ws3", &el_as_conv_ph_ws3, &b_el_as_conv_ph_ws3);
   fChain->SetBranchAddress("el_as_conv_ph_wstot", &el_as_conv_ph_wstot, &b_el_as_conv_ph_wstot);
   fChain->SetBranchAddress("el_as_conv_ph_E132", &el_as_conv_ph_E132, &b_el_as_conv_ph_E132);
   fChain->SetBranchAddress("el_as_conv_ph_E1152", &el_as_conv_ph_E1152, &b_el_as_conv_ph_E1152);
   fChain->SetBranchAddress("el_as_conv_ph_emaxs1", &el_as_conv_ph_emaxs1, &b_el_as_conv_ph_emaxs1);
   fChain->SetBranchAddress("el_as_conv_ph_deltaEs", &el_as_conv_ph_deltaEs, &b_el_as_conv_ph_deltaEs);
   fChain->SetBranchAddress("el_as_conv_ph_E233", &el_as_conv_ph_E233, &b_el_as_conv_ph_E233);
   fChain->SetBranchAddress("el_as_conv_ph_E237", &el_as_conv_ph_E237, &b_el_as_conv_ph_E237);
   fChain->SetBranchAddress("el_as_conv_ph_E277", &el_as_conv_ph_E277, &b_el_as_conv_ph_E277);
   fChain->SetBranchAddress("el_as_conv_ph_weta2", &el_as_conv_ph_weta2, &b_el_as_conv_ph_weta2);
   fChain->SetBranchAddress("ph_n", &ph_n, &b_ph_n);
   fChain->SetBranchAddress("ph_E", &ph_E, &b_ph_E);
   fChain->SetBranchAddress("ph_Et", &ph_Et, &b_ph_Et);
   fChain->SetBranchAddress("ph_pt", &ph_pt, &b_ph_pt);
   fChain->SetBranchAddress("ph_m", &ph_m, &b_ph_m);
   fChain->SetBranchAddress("ph_eta", &ph_eta, &b_ph_eta);
   fChain->SetBranchAddress("ph_phi", &ph_phi, &b_ph_phi);
   fChain->SetBranchAddress("ph_px", &ph_px, &b_ph_px);
   fChain->SetBranchAddress("ph_py", &ph_py, &b_ph_py);
   fChain->SetBranchAddress("ph_pz", &ph_pz, &b_ph_pz);
   fChain->SetBranchAddress("ph_author", &ph_author, &b_ph_author);
   fChain->SetBranchAddress("ph_isRecovered", &ph_isRecovered, &b_ph_isRecovered);
   fChain->SetBranchAddress("ph_isEM", &ph_isEM, &b_ph_isEM);
   fChain->SetBranchAddress("ph_isEMLoose", &ph_isEMLoose, &b_ph_isEMLoose);
   fChain->SetBranchAddress("ph_isEMMedium", &ph_isEMMedium, &b_ph_isEMMedium);
   fChain->SetBranchAddress("ph_isEMTight", &ph_isEMTight, &b_ph_isEMTight);
   fChain->SetBranchAddress("ph_OQ", &ph_OQ, &b_ph_OQ);
   fChain->SetBranchAddress("ph_OQRecalc", &ph_OQRecalc, &b_ph_OQRecalc);
   fChain->SetBranchAddress("ph_convFlag", &ph_convFlag, &b_ph_convFlag);
   fChain->SetBranchAddress("ph_isConv", &ph_isConv, &b_ph_isConv);
   fChain->SetBranchAddress("ph_nConv", &ph_nConv, &b_ph_nConv);
   fChain->SetBranchAddress("ph_nSingleTrackConv", &ph_nSingleTrackConv, &b_ph_nSingleTrackConv);
   fChain->SetBranchAddress("ph_nDoubleTrackConv", &ph_nDoubleTrackConv, &b_ph_nDoubleTrackConv);
   fChain->SetBranchAddress("ph_type", &ph_type, &b_ph_type);
   fChain->SetBranchAddress("ph_origin", &ph_origin, &b_ph_origin);
   fChain->SetBranchAddress("ph_truth_deltaRRecPhoton", &ph_truth_deltaRRecPhoton, &b_ph_truth_deltaRRecPhoton);
   fChain->SetBranchAddress("ph_truth_E", &ph_truth_E, &b_ph_truth_E);
   fChain->SetBranchAddress("ph_truth_pt", &ph_truth_pt, &b_ph_truth_pt);
   fChain->SetBranchAddress("ph_truth_eta", &ph_truth_eta, &b_ph_truth_eta);
   fChain->SetBranchAddress("ph_truth_phi", &ph_truth_phi, &b_ph_truth_phi);
   fChain->SetBranchAddress("ph_truth_type", &ph_truth_type, &b_ph_truth_type);
   fChain->SetBranchAddress("ph_truth_status", &ph_truth_status, &b_ph_truth_status);
   fChain->SetBranchAddress("ph_truth_barcode", &ph_truth_barcode, &b_ph_truth_barcode);
   fChain->SetBranchAddress("ph_truth_mothertype", &ph_truth_mothertype, &b_ph_truth_mothertype);
   fChain->SetBranchAddress("ph_truth_motherbarcode", &ph_truth_motherbarcode, &b_ph_truth_motherbarcode);
   fChain->SetBranchAddress("ph_truth_index", &ph_truth_index, &b_ph_truth_index);
   fChain->SetBranchAddress("ph_truth_matched", &ph_truth_matched, &b_ph_truth_matched);
   fChain->SetBranchAddress("ph_loose", &ph_loose, &b_ph_loose);
   fChain->SetBranchAddress("ph_looseIso", &ph_looseIso, &b_ph_looseIso);
   fChain->SetBranchAddress("ph_tight", &ph_tight, &b_ph_tight);
   fChain->SetBranchAddress("ph_tightIso", &ph_tightIso, &b_ph_tightIso);
   fChain->SetBranchAddress("ph_looseAR", &ph_looseAR, &b_ph_looseAR);
   fChain->SetBranchAddress("ph_looseARIso", &ph_looseARIso, &b_ph_looseARIso);
   fChain->SetBranchAddress("ph_tightAR", &ph_tightAR, &b_ph_tightAR);
   fChain->SetBranchAddress("ph_tightARIso", &ph_tightARIso, &b_ph_tightARIso);
   fChain->SetBranchAddress("ph_goodOQ", &ph_goodOQ, &b_ph_goodOQ);
   fChain->SetBranchAddress("ph_Ethad", &ph_Ethad, &b_ph_Ethad);
   fChain->SetBranchAddress("ph_Ethad1", &ph_Ethad1, &b_ph_Ethad1);
   fChain->SetBranchAddress("ph_E033", &ph_E033, &b_ph_E033);
   fChain->SetBranchAddress("ph_f1", &ph_f1, &b_ph_f1);
   fChain->SetBranchAddress("ph_f1core", &ph_f1core, &b_ph_f1core);
   fChain->SetBranchAddress("ph_Emins1", &ph_Emins1, &b_ph_Emins1);
   fChain->SetBranchAddress("ph_fside", &ph_fside, &b_ph_fside);
   fChain->SetBranchAddress("ph_Emax2", &ph_Emax2, &b_ph_Emax2);
   fChain->SetBranchAddress("ph_ws3", &ph_ws3, &b_ph_ws3);
   fChain->SetBranchAddress("ph_wstot", &ph_wstot, &b_ph_wstot);
   fChain->SetBranchAddress("ph_E132", &ph_E132, &b_ph_E132);
   fChain->SetBranchAddress("ph_E1152", &ph_E1152, &b_ph_E1152);
   fChain->SetBranchAddress("ph_emaxs1", &ph_emaxs1, &b_ph_emaxs1);
   fChain->SetBranchAddress("ph_deltaEs", &ph_deltaEs, &b_ph_deltaEs);
   fChain->SetBranchAddress("ph_E233", &ph_E233, &b_ph_E233);
   fChain->SetBranchAddress("ph_E237", &ph_E237, &b_ph_E237);
   fChain->SetBranchAddress("ph_E277", &ph_E277, &b_ph_E277);
   fChain->SetBranchAddress("ph_weta2", &ph_weta2, &b_ph_weta2);
   fChain->SetBranchAddress("ph_f3", &ph_f3, &b_ph_f3);
   fChain->SetBranchAddress("ph_f3core", &ph_f3core, &b_ph_f3core);
   fChain->SetBranchAddress("ph_rphiallcalo", &ph_rphiallcalo, &b_ph_rphiallcalo);
   fChain->SetBranchAddress("ph_Etcone45", &ph_Etcone45, &b_ph_Etcone45);
   fChain->SetBranchAddress("ph_Etcone15", &ph_Etcone15, &b_ph_Etcone15);
   fChain->SetBranchAddress("ph_Etcone20", &ph_Etcone20, &b_ph_Etcone20);
   fChain->SetBranchAddress("ph_Etcone25", &ph_Etcone25, &b_ph_Etcone25);
   fChain->SetBranchAddress("ph_Etcone30", &ph_Etcone30, &b_ph_Etcone30);
   fChain->SetBranchAddress("ph_Etcone35", &ph_Etcone35, &b_ph_Etcone35);
   fChain->SetBranchAddress("ph_Etcone40", &ph_Etcone40, &b_ph_Etcone40);
   fChain->SetBranchAddress("ph_ptcone20", &ph_ptcone20, &b_ph_ptcone20);
   fChain->SetBranchAddress("ph_ptcone30", &ph_ptcone30, &b_ph_ptcone30);
   fChain->SetBranchAddress("ph_ptcone40", &ph_ptcone40, &b_ph_ptcone40);
   fChain->SetBranchAddress("ph_nucone20", &ph_nucone20, &b_ph_nucone20);
   fChain->SetBranchAddress("ph_nucone30", &ph_nucone30, &b_ph_nucone30);
   fChain->SetBranchAddress("ph_nucone40", &ph_nucone40, &b_ph_nucone40);
   fChain->SetBranchAddress("ph_Etcone15_pt_corrected", &ph_Etcone15_pt_corrected, &b_ph_Etcone15_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone20_pt_corrected", &ph_Etcone20_pt_corrected, &b_ph_Etcone20_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone25_pt_corrected", &ph_Etcone25_pt_corrected, &b_ph_Etcone25_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone30_pt_corrected", &ph_Etcone30_pt_corrected, &b_ph_Etcone30_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone35_pt_corrected", &ph_Etcone35_pt_corrected, &b_ph_Etcone35_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone40_pt_corrected", &ph_Etcone40_pt_corrected, &b_ph_Etcone40_pt_corrected);
   fChain->SetBranchAddress("ph_convanglematch", &ph_convanglematch, &b_ph_convanglematch);
   fChain->SetBranchAddress("ph_convtrackmatch", &ph_convtrackmatch, &b_ph_convtrackmatch);
   fChain->SetBranchAddress("ph_hasconv", &ph_hasconv, &b_ph_hasconv);
   fChain->SetBranchAddress("ph_convvtxx", &ph_convvtxx, &b_ph_convvtxx);
   fChain->SetBranchAddress("ph_convvtxy", &ph_convvtxy, &b_ph_convvtxy);
   fChain->SetBranchAddress("ph_convvtxz", &ph_convvtxz, &b_ph_convvtxz);
   fChain->SetBranchAddress("ph_Rconv", &ph_Rconv, &b_ph_Rconv);
   fChain->SetBranchAddress("ph_zconv", &ph_zconv, &b_ph_zconv);
   fChain->SetBranchAddress("ph_convvtxchi2", &ph_convvtxchi2, &b_ph_convvtxchi2);
   fChain->SetBranchAddress("ph_pt1conv", &ph_pt1conv, &b_ph_pt1conv);
   fChain->SetBranchAddress("ph_convtrk1nBLHits", &ph_convtrk1nBLHits, &b_ph_convtrk1nBLHits);
   fChain->SetBranchAddress("ph_convtrk1nPixHits", &ph_convtrk1nPixHits, &b_ph_convtrk1nPixHits);
   fChain->SetBranchAddress("ph_convtrk1nSCTHits", &ph_convtrk1nSCTHits, &b_ph_convtrk1nSCTHits);
   fChain->SetBranchAddress("ph_convtrk1nTRTHits", &ph_convtrk1nTRTHits, &b_ph_convtrk1nTRTHits);
   fChain->SetBranchAddress("ph_pt2conv", &ph_pt2conv, &b_ph_pt2conv);
   fChain->SetBranchAddress("ph_convtrk2nBLHits", &ph_convtrk2nBLHits, &b_ph_convtrk2nBLHits);
   fChain->SetBranchAddress("ph_convtrk2nPixHits", &ph_convtrk2nPixHits, &b_ph_convtrk2nPixHits);
   fChain->SetBranchAddress("ph_convtrk2nSCTHits", &ph_convtrk2nSCTHits, &b_ph_convtrk2nSCTHits);
   fChain->SetBranchAddress("ph_convtrk2nTRTHits", &ph_convtrk2nTRTHits, &b_ph_convtrk2nTRTHits);
   fChain->SetBranchAddress("ph_ptconv", &ph_ptconv, &b_ph_ptconv);
   fChain->SetBranchAddress("ph_pzconv", &ph_pzconv, &b_ph_pzconv);
   fChain->SetBranchAddress("ph_reta", &ph_reta, &b_ph_reta);
   fChain->SetBranchAddress("ph_rphi", &ph_rphi, &b_ph_rphi);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig2", &ph_EtringnoisedR03sig2, &b_ph_EtringnoisedR03sig2);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig3", &ph_EtringnoisedR03sig3, &b_ph_EtringnoisedR03sig3);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig4", &ph_EtringnoisedR03sig4, &b_ph_EtringnoisedR03sig4);
   fChain->SetBranchAddress("ph_isolationlikelihoodjets", &ph_isolationlikelihoodjets, &b_ph_isolationlikelihoodjets);
   fChain->SetBranchAddress("ph_isolationlikelihoodhqelectrons", &ph_isolationlikelihoodhqelectrons, &b_ph_isolationlikelihoodhqelectrons);
   fChain->SetBranchAddress("ph_loglikelihood", &ph_loglikelihood, &b_ph_loglikelihood);
   fChain->SetBranchAddress("ph_photonweight", &ph_photonweight, &b_ph_photonweight);
   fChain->SetBranchAddress("ph_photonbgweight", &ph_photonbgweight, &b_ph_photonbgweight);
   fChain->SetBranchAddress("ph_neuralnet", &ph_neuralnet, &b_ph_neuralnet);
   fChain->SetBranchAddress("ph_Hmatrix", &ph_Hmatrix, &b_ph_Hmatrix);
   fChain->SetBranchAddress("ph_Hmatrix5", &ph_Hmatrix5, &b_ph_Hmatrix5);
   fChain->SetBranchAddress("ph_adaboost", &ph_adaboost, &b_ph_adaboost);
   fChain->SetBranchAddress("ph_zvertex", &ph_zvertex, &b_ph_zvertex);
   fChain->SetBranchAddress("ph_errz", &ph_errz, &b_ph_errz);
   fChain->SetBranchAddress("ph_etap", &ph_etap, &b_ph_etap);
   fChain->SetBranchAddress("ph_depth", &ph_depth, &b_ph_depth);
   fChain->SetBranchAddress("ph_cl_E", &ph_cl_E, &b_ph_cl_E);
   fChain->SetBranchAddress("ph_cl_pt", &ph_cl_pt, &b_ph_cl_pt);
   fChain->SetBranchAddress("ph_cl_eta", &ph_cl_eta, &b_ph_cl_eta);
   fChain->SetBranchAddress("ph_cl_phi", &ph_cl_phi, &b_ph_cl_phi);
   fChain->SetBranchAddress("ph_Es0", &ph_Es0, &b_ph_Es0);
   fChain->SetBranchAddress("ph_etas0", &ph_etas0, &b_ph_etas0);
   fChain->SetBranchAddress("ph_phis0", &ph_phis0, &b_ph_phis0);
   fChain->SetBranchAddress("ph_Es1", &ph_Es1, &b_ph_Es1);
   fChain->SetBranchAddress("ph_etas1", &ph_etas1, &b_ph_etas1);
   fChain->SetBranchAddress("ph_phis1", &ph_phis1, &b_ph_phis1);
   fChain->SetBranchAddress("ph_Es2", &ph_Es2, &b_ph_Es2);
   fChain->SetBranchAddress("ph_etas2", &ph_etas2, &b_ph_etas2);
   fChain->SetBranchAddress("ph_phis2", &ph_phis2, &b_ph_phis2);
   fChain->SetBranchAddress("ph_Es3", &ph_Es3, &b_ph_Es3);
   fChain->SetBranchAddress("ph_etas3", &ph_etas3, &b_ph_etas3);
   fChain->SetBranchAddress("ph_phis3", &ph_phis3, &b_ph_phis3);
   fChain->SetBranchAddress("ph_time", &ph_time, &b_ph_time);
   fChain->SetBranchAddress("ph_rawcl_Es0", &ph_rawcl_Es0, &b_ph_rawcl_Es0);
   fChain->SetBranchAddress("ph_rawcl_etas0", &ph_rawcl_etas0, &b_ph_rawcl_etas0);
   fChain->SetBranchAddress("ph_rawcl_phis0", &ph_rawcl_phis0, &b_ph_rawcl_phis0);
   fChain->SetBranchAddress("ph_rawcl_Es1", &ph_rawcl_Es1, &b_ph_rawcl_Es1);
   fChain->SetBranchAddress("ph_rawcl_etas1", &ph_rawcl_etas1, &b_ph_rawcl_etas1);
   fChain->SetBranchAddress("ph_rawcl_phis1", &ph_rawcl_phis1, &b_ph_rawcl_phis1);
   fChain->SetBranchAddress("ph_rawcl_Es2", &ph_rawcl_Es2, &b_ph_rawcl_Es2);
   fChain->SetBranchAddress("ph_rawcl_etas2", &ph_rawcl_etas2, &b_ph_rawcl_etas2);
   fChain->SetBranchAddress("ph_rawcl_phis2", &ph_rawcl_phis2, &b_ph_rawcl_phis2);
   fChain->SetBranchAddress("ph_rawcl_Es3", &ph_rawcl_Es3, &b_ph_rawcl_Es3);
   fChain->SetBranchAddress("ph_rawcl_etas3", &ph_rawcl_etas3, &b_ph_rawcl_etas3);
   fChain->SetBranchAddress("ph_rawcl_phis3", &ph_rawcl_phis3, &b_ph_rawcl_phis3);
   fChain->SetBranchAddress("ph_rawcl_E", &ph_rawcl_E, &b_ph_rawcl_E);
   fChain->SetBranchAddress("ph_rawcl_pt", &ph_rawcl_pt, &b_ph_rawcl_pt);
   fChain->SetBranchAddress("ph_rawcl_eta", &ph_rawcl_eta, &b_ph_rawcl_eta);
   fChain->SetBranchAddress("ph_rawcl_phi", &ph_rawcl_phi, &b_ph_rawcl_phi);
   fChain->SetBranchAddress("ph_truth_isConv", &ph_truth_isConv, &b_ph_truth_isConv);
   fChain->SetBranchAddress("ph_truth_isBrem", &ph_truth_isBrem, &b_ph_truth_isBrem);
   fChain->SetBranchAddress("ph_truth_isFromHardProc", &ph_truth_isFromHardProc, &b_ph_truth_isFromHardProc);
   fChain->SetBranchAddress("ph_truth_isPhotonFromHardProc", &ph_truth_isPhotonFromHardProc, &b_ph_truth_isPhotonFromHardProc);
   fChain->SetBranchAddress("ph_truth_Rconv", &ph_truth_Rconv, &b_ph_truth_Rconv);
   fChain->SetBranchAddress("ph_truth_zconv", &ph_truth_zconv, &b_ph_truth_zconv);
   fChain->SetBranchAddress("ph_deltaEmax2", &ph_deltaEmax2, &b_ph_deltaEmax2);
   fChain->SetBranchAddress("ph_calibHitsShowerDepth", &ph_calibHitsShowerDepth, &b_ph_calibHitsShowerDepth);
   fChain->SetBranchAddress("ph_isIso", &ph_isIso, &b_ph_isIso);
   fChain->SetBranchAddress("ph_mvaptcone20", &ph_mvaptcone20, &b_ph_mvaptcone20);
   fChain->SetBranchAddress("ph_mvaptcone30", &ph_mvaptcone30, &b_ph_mvaptcone30);
   fChain->SetBranchAddress("ph_mvaptcone40", &ph_mvaptcone40, &b_ph_mvaptcone40);
   fChain->SetBranchAddress("ph_topoEtcone20", &ph_topoEtcone20, &b_ph_topoEtcone20);
   fChain->SetBranchAddress("ph_topoEtcone40", &ph_topoEtcone40, &b_ph_topoEtcone40);
   fChain->SetBranchAddress("ph_topoEtcone60", &ph_topoEtcone60, &b_ph_topoEtcone60);
   fChain->SetBranchAddress("ph_jet_dr", &ph_jet_dr, &b_ph_jet_dr);
   fChain->SetBranchAddress("ph_jet_E", &ph_jet_E, &b_ph_jet_E);
   fChain->SetBranchAddress("ph_jet_pt", &ph_jet_pt, &b_ph_jet_pt);
   fChain->SetBranchAddress("ph_jet_m", &ph_jet_m, &b_ph_jet_m);
   fChain->SetBranchAddress("ph_jet_eta", &ph_jet_eta, &b_ph_jet_eta);
   fChain->SetBranchAddress("ph_jet_phi", &ph_jet_phi, &b_ph_jet_phi);
   fChain->SetBranchAddress("ph_jet_truth_dr", &ph_jet_truth_dr, &b_ph_jet_truth_dr);
   fChain->SetBranchAddress("ph_jet_truth_E", &ph_jet_truth_E, &b_ph_jet_truth_E);
   fChain->SetBranchAddress("ph_jet_truth_pt", &ph_jet_truth_pt, &b_ph_jet_truth_pt);
   fChain->SetBranchAddress("ph_jet_truth_m", &ph_jet_truth_m, &b_ph_jet_truth_m);
   fChain->SetBranchAddress("ph_jet_truth_eta", &ph_jet_truth_eta, &b_ph_jet_truth_eta);
   fChain->SetBranchAddress("ph_jet_truth_phi", &ph_jet_truth_phi, &b_ph_jet_truth_phi);
   fChain->SetBranchAddress("ph_jet_truth_matched", &ph_jet_truth_matched, &b_ph_jet_truth_matched);
   fChain->SetBranchAddress("ph_jet_matched", &ph_jet_matched, &b_ph_jet_matched);
   fChain->SetBranchAddress("ph_convIP", &ph_convIP, &b_ph_convIP);
   fChain->SetBranchAddress("ph_convIPRev", &ph_convIPRev, &b_ph_convIPRev);
   fChain->SetBranchAddress("ph_ptIsolationCone", &ph_ptIsolationCone, &b_ph_ptIsolationCone);
   fChain->SetBranchAddress("ph_ptIsolationConePhAngle", &ph_ptIsolationConePhAngle, &b_ph_ptIsolationConePhAngle);
   fChain->SetBranchAddress("ph_Etcone40_ED_corrected", &ph_Etcone40_ED_corrected, &b_ph_Etcone40_ED_corrected);
   fChain->SetBranchAddress("ph_Etcone40_corrected", &ph_Etcone40_corrected, &b_ph_Etcone40_corrected);
   fChain->SetBranchAddress("ph_ES0_real", &ph_ES0_real, &b_ph_ES0_real);
   fChain->SetBranchAddress("ph_ES1_real", &ph_ES1_real, &b_ph_ES1_real);
   fChain->SetBranchAddress("ph_ES2_real", &ph_ES2_real, &b_ph_ES2_real);
   fChain->SetBranchAddress("ph_ES3_real", &ph_ES3_real, &b_ph_ES3_real);
   fChain->SetBranchAddress("ph_EcellS0", &ph_EcellS0, &b_ph_EcellS0);
   fChain->SetBranchAddress("ph_etacellS0", &ph_etacellS0, &b_ph_etacellS0);
   fChain->SetBranchAddress("ph_HPV_eta", &ph_HPV_eta, &b_ph_HPV_eta);
   fChain->SetBranchAddress("ph_HPV_sigma_eta", &ph_HPV_sigma_eta, &b_ph_HPV_sigma_eta);
   fChain->SetBranchAddress("ph_HPV_convTrk1_zvertex", &ph_HPV_convTrk1_zvertex, &b_ph_HPV_convTrk1_zvertex);
   fChain->SetBranchAddress("ph_HPV_convTrk2_zvertex", &ph_HPV_convTrk2_zvertex, &b_ph_HPV_convTrk2_zvertex);
   fChain->SetBranchAddress("ph_HPV_convTrk1_sigma_zvertex", &ph_HPV_convTrk1_sigma_zvertex, &b_ph_HPV_convTrk1_sigma_zvertex);
   fChain->SetBranchAddress("ph_HPV_convTrk2_sigma_zvertex", &ph_HPV_convTrk2_sigma_zvertex, &b_ph_HPV_convTrk2_sigma_zvertex);
   fChain->SetBranchAddress("ph_CaloPointing_zvertex", &ph_CaloPointing_zvertex, &b_ph_CaloPointing_zvertex);
   fChain->SetBranchAddress("ph_CaloPointing_sigma_zvertex", &ph_CaloPointing_sigma_zvertex, &b_ph_CaloPointing_sigma_zvertex);
   fChain->SetBranchAddress("ph_CaloPointing_eta", &ph_CaloPointing_eta, &b_ph_CaloPointing_eta);
   fChain->SetBranchAddress("ph_CaloPointing_sigma_eta", &ph_CaloPointing_sigma_eta, &b_ph_CaloPointing_sigma_eta);
   fChain->SetBranchAddress("ph_HPV_zvertex", &ph_HPV_zvertex, &b_ph_HPV_zvertex);
   fChain->SetBranchAddress("ph_HPV_sigma_zvertex", &ph_HPV_sigma_zvertex, &b_ph_HPV_sigma_zvertex);
   fChain->SetBranchAddress("ph_HPV_zvertex_neutral", &ph_HPV_zvertex_neutral, &b_ph_HPV_zvertex_neutral);
   fChain->SetBranchAddress("ph_HPV_zvertex_charged", &ph_HPV_zvertex_charged, &b_ph_HPV_zvertex_charged);
   fChain->SetBranchAddress("ph_HPV_sigma_zvertex_neutral", &ph_HPV_sigma_zvertex_neutral, &b_ph_HPV_sigma_zvertex_neutral);
   fChain->SetBranchAddress("ph_HPV_sigma_zvertex_charged", &ph_HPV_sigma_zvertex_charged, &b_ph_HPV_sigma_zvertex_charged);
   fChain->SetBranchAddress("ph_ambiguityResult", &ph_ambiguityResult, &b_ph_ambiguityResult);
   fChain->SetBranchAddress("ph_itune1", &ph_itune1, &b_ph_itune1);
   fChain->SetBranchAddress("ph_itune2", &ph_itune2, &b_ph_itune2);
   fChain->SetBranchAddress("ph_itune3", &ph_itune3, &b_ph_itune3);
   fChain->SetBranchAddress("ph_trackIsol", &ph_trackIsol, &b_ph_trackIsol);
   fChain->SetBranchAddress("ph_PtIsolationCone_woIC", &ph_PtIsolationCone_woIC, &b_ph_PtIsolationCone_woIC);
   fChain->SetBranchAddress("ph_PtIsolationConePhAngle_woIC", &ph_PtIsolationConePhAngle_woIC, &b_ph_PtIsolationConePhAngle_woIC);
   fChain->SetBranchAddress("ph_trackIsol_woIC", &ph_trackIsol_woIC, &b_ph_trackIsol_woIC);
   fChain->SetBranchAddress("ph_selected", &ph_selected, &b_ph_selected);
   fChain->SetBranchAddress("ph_parton_pt_max_MC", &ph_parton_pt_max_MC, &b_ph_parton_pt_max_MC);
   fChain->SetBranchAddress("ph_parton_eta_MC", &ph_parton_eta_MC, &b_ph_parton_eta_MC);
   fChain->SetBranchAddress("ph_parton_phi_MC", &ph_parton_phi_MC, &b_ph_parton_phi_MC);
   fChain->SetBranchAddress("ph_parton_barcode_MC", &ph_parton_barcode_MC, &b_ph_parton_barcode_MC);
   fChain->SetBranchAddress("ph_parton_pdg_MC", &ph_parton_pdg_MC, &b_ph_parton_pdg_MC);
   fChain->SetBranchAddress("ph_etaS2_MC", &ph_etaS2_MC, &b_ph_etaS2_MC);
   fChain->SetBranchAddress("ph_phiS2_MC", &ph_phiS2_MC, &b_ph_phiS2_MC);
   fChain->SetBranchAddress("ph_XConv_MC", &ph_XConv_MC, &b_ph_XConv_MC);
   fChain->SetBranchAddress("ph_YConv_MC", &ph_YConv_MC, &b_ph_YConv_MC);
   fChain->SetBranchAddress("ph_isG4part", &ph_isG4part, &b_ph_isG4part);
   fChain->SetBranchAddress("ph_partonIsolation15_UE_MC", &ph_partonIsolation15_UE_MC, &b_ph_partonIsolation15_UE_MC);
   fChain->SetBranchAddress("ph_partonIsolation20_UE_MC", &ph_partonIsolation20_UE_MC, &b_ph_partonIsolation20_UE_MC);
   fChain->SetBranchAddress("ph_partonIsolation25_UE_MC", &ph_partonIsolation25_UE_MC, &b_ph_partonIsolation25_UE_MC);
   fChain->SetBranchAddress("ph_partonIsolation30_UE_MC", &ph_partonIsolation30_UE_MC, &b_ph_partonIsolation30_UE_MC);
   fChain->SetBranchAddress("ph_partonIsolation35_UE_MC", &ph_partonIsolation35_UE_MC, &b_ph_partonIsolation35_UE_MC);
   fChain->SetBranchAddress("ph_partonIsolation40_UE_MC", &ph_partonIsolation40_UE_MC, &b_ph_partonIsolation40_UE_MC);
   fChain->SetBranchAddress("ph_partonIsolation45_UE_MC", &ph_partonIsolation45_UE_MC, &b_ph_partonIsolation45_UE_MC);
   fChain->SetBranchAddress("ph_partonIsolation60_UE_MC", &ph_partonIsolation60_UE_MC, &b_ph_partonIsolation60_UE_MC);
   fChain->SetBranchAddress("ph_partonIsolation15_MC", &ph_partonIsolation15_MC, &b_ph_partonIsolation15_MC);
   fChain->SetBranchAddress("ph_partonIsolation20_MC", &ph_partonIsolation20_MC, &b_ph_partonIsolation20_MC);
   fChain->SetBranchAddress("ph_partonIsolation25_MC", &ph_partonIsolation25_MC, &b_ph_partonIsolation25_MC);
   fChain->SetBranchAddress("ph_partonIsolation30_MC", &ph_partonIsolation30_MC, &b_ph_partonIsolation30_MC);
   fChain->SetBranchAddress("ph_partonIsolation35_MC", &ph_partonIsolation35_MC, &b_ph_partonIsolation35_MC);
   fChain->SetBranchAddress("ph_partonIsolation40_MC", &ph_partonIsolation40_MC, &b_ph_partonIsolation40_MC);
   fChain->SetBranchAddress("ph_partonIsolation45_MC", &ph_partonIsolation45_MC, &b_ph_partonIsolation45_MC);
   fChain->SetBranchAddress("ph_partonIsolation60_MC", &ph_partonIsolation60_MC, &b_ph_partonIsolation60_MC);
   fChain->SetBranchAddress("ph_particleIsolation40_MC", &ph_particleIsolation40_MC, &b_ph_particleIsolation40_MC);
   fChain->SetBranchAddress("ph_particleIsolation40_ED_corrected_MC", &ph_particleIsolation40_ED_corrected_MC, &b_ph_particleIsolation40_ED_corrected_MC);
   fChain->SetBranchAddress("ph_particleIsolation40_ED_corrected_reco_MC", &ph_particleIsolation40_ED_corrected_reco_MC, &b_ph_particleIsolation40_ED_corrected_reco_MC);
   fChain->SetBranchAddress("ph_isGoodOQbits", &ph_isGoodOQbits, &b_ph_isGoodOQbits);
   fChain->SetBranchAddress("ph_isGoodOQphoton", &ph_isGoodOQphoton, &b_ph_isGoodOQphoton);
   fChain->SetBranchAddress("ph_isGoodOQelectron", &ph_isGoodOQelectron, &b_ph_isGoodOQelectron);
   fChain->SetBranchAddress("ph_convTrk1_chi2", &ph_convTrk1_chi2, &b_ph_convTrk1_chi2);
   fChain->SetBranchAddress("ph_convTrk2_chi2", &ph_convTrk2_chi2, &b_ph_convTrk2_chi2);
   fChain->SetBranchAddress("ph_convTrk1_expectHitInBLayer", &ph_convTrk1_expectHitInBLayer, &b_ph_convTrk1_expectHitInBLayer);
   fChain->SetBranchAddress("ph_convTrk1_numTRTOutliers", &ph_convTrk1_numTRTOutliers, &b_ph_convTrk1_numTRTOutliers);
   fChain->SetBranchAddress("ph_convTrk1_numTRTHTHits", &ph_convTrk1_numTRTHTHits, &b_ph_convTrk1_numTRTHTHits);
   fChain->SetBranchAddress("ph_convTrk1_numTRTHTOutliers", &ph_convTrk1_numTRTHTOutliers, &b_ph_convTrk1_numTRTHTOutliers);
   fChain->SetBranchAddress("ph_convTrk2_expectHitInBLayer", &ph_convTrk2_expectHitInBLayer, &b_ph_convTrk2_expectHitInBLayer);
   fChain->SetBranchAddress("ph_convTrk2_numTRTOutliers", &ph_convTrk2_numTRTOutliers, &b_ph_convTrk2_numTRTOutliers);
   fChain->SetBranchAddress("ph_convTrk2_numTRTHTHits", &ph_convTrk2_numTRTHTHits, &b_ph_convTrk2_numTRTHTHits);
   fChain->SetBranchAddress("ph_convTrk2_numTRTHTOutliers", &ph_convTrk2_numTRTHTOutliers, &b_ph_convTrk2_numTRTHTOutliers);
   fChain->SetBranchAddress("ph_convTrk1_trtPID", &ph_convTrk1_trtPID, &b_ph_convTrk1_trtPID);
   fChain->SetBranchAddress("ph_convTrk2_trtPID", &ph_convTrk2_trtPID, &b_ph_convTrk2_trtPID);
   fChain->SetBranchAddress("ph_convTrk1_trtPIDHT", &ph_convTrk1_trtPIDHT, &b_ph_convTrk1_trtPIDHT);
   fChain->SetBranchAddress("ph_convTrk2_trtPIDHT", &ph_convTrk2_trtPIDHT, &b_ph_convTrk2_trtPIDHT);
   fChain->SetBranchAddress("ph_convTrk1_trtPIDToT", &ph_convTrk1_trtPIDToT, &b_ph_convTrk1_trtPIDToT);
   fChain->SetBranchAddress("ph_convTrk2_trtPIDToT", &ph_convTrk2_trtPIDToT, &b_ph_convTrk2_trtPIDToT);
   fChain->SetBranchAddress("ph_convTrk1_ToTvar", &ph_convTrk1_ToTvar, &b_ph_convTrk1_ToTvar);
   fChain->SetBranchAddress("ph_convTrk2_ToTvar", &ph_convTrk2_ToTvar, &b_ph_convTrk2_ToTvar);
   fChain->SetBranchAddress("ph_convTrk1_trtRatioHT", &ph_convTrk1_trtRatioHT, &b_ph_convTrk1_trtRatioHT);
   fChain->SetBranchAddress("ph_convTrk2_trtRatioHT", &ph_convTrk2_trtRatioHT, &b_ph_convTrk2_trtRatioHT);
   fChain->SetBranchAddress("ph_convTrk1_charge", &ph_convTrk1_charge, &b_ph_convTrk1_charge);
   fChain->SetBranchAddress("ph_convTrk2_charge", &ph_convTrk2_charge, &b_ph_convTrk2_charge);
   fChain->SetBranchAddress("ph_convTrk1_DeltaEta_track_calo", &ph_convTrk1_DeltaEta_track_calo, &b_ph_convTrk1_DeltaEta_track_calo);
   fChain->SetBranchAddress("ph_convTrk2_DeltaEta_track_calo", &ph_convTrk2_DeltaEta_track_calo, &b_ph_convTrk2_DeltaEta_track_calo);
   fChain->SetBranchAddress("ph_convTrk1_DeltaPhi_track_calo", &ph_convTrk1_DeltaPhi_track_calo, &b_ph_convTrk1_DeltaPhi_track_calo);
   fChain->SetBranchAddress("ph_convTrk2_DeltaPhi_track_calo", &ph_convTrk2_DeltaPhi_track_calo, &b_ph_convTrk2_DeltaPhi_track_calo);
   fChain->SetBranchAddress("ph_XConv", &ph_XConv, &b_ph_XConv);
   fChain->SetBranchAddress("ph_YConv", &ph_YConv, &b_ph_YConv);
   fChain->SetBranchAddress("ph_conv_chi2", &ph_conv_chi2, &b_ph_conv_chi2);
   fChain->SetBranchAddress("ph_conv_dcottheta", &ph_conv_dcottheta, &b_ph_conv_dcottheta);
   fChain->SetBranchAddress("ph_conv_dphi", &ph_conv_dphi, &b_ph_conv_dphi);
   fChain->SetBranchAddress("ph_conv_dist", &ph_conv_dist, &b_ph_conv_dist);
   fChain->SetBranchAddress("ph_conv_DR1R2", &ph_conv_DR1R2, &b_ph_conv_DR1R2);
   fChain->SetBranchAddress("ph_conv_p", &ph_conv_p, &b_ph_conv_p);
   fChain->SetBranchAddress("ph_conv_phi", &ph_conv_phi, &b_ph_conv_phi);
   fChain->SetBranchAddress("ph_conv_theta", &ph_conv_theta, &b_ph_conv_theta);
   fChain->SetBranchAddress("ph_conv_perr", &ph_conv_perr, &b_ph_conv_perr);
   fChain->SetBranchAddress("ph_conv_phierr", &ph_conv_phierr, &b_ph_conv_phierr);
   fChain->SetBranchAddress("ph_conv_thetaerr", &ph_conv_thetaerr, &b_ph_conv_thetaerr);
   fChain->SetBranchAddress("ph_conv_GSF_p", &ph_conv_GSF_p, &b_ph_conv_GSF_p);
   fChain->SetBranchAddress("ph_conv_GSF_phi", &ph_conv_GSF_phi, &b_ph_conv_GSF_phi);
   fChain->SetBranchAddress("ph_conv_GSF_theta", &ph_conv_GSF_theta, &b_ph_conv_GSF_theta);
   fChain->SetBranchAddress("ph_conv_GSF_perr", &ph_conv_GSF_perr, &b_ph_conv_GSF_perr);
   fChain->SetBranchAddress("ph_conv_GSF_phierr", &ph_conv_GSF_phierr, &b_ph_conv_GSF_phierr);
   fChain->SetBranchAddress("ph_conv_GSF_thetaerr", &ph_conv_GSF_thetaerr, &b_ph_conv_GSF_thetaerr);
   fChain->SetBranchAddress("ph_conv_DNA_p", &ph_conv_DNA_p, &b_ph_conv_DNA_p);
   fChain->SetBranchAddress("ph_conv_DNA_phi", &ph_conv_DNA_phi, &b_ph_conv_DNA_phi);
   fChain->SetBranchAddress("ph_conv_DNA_theta", &ph_conv_DNA_theta, &b_ph_conv_DNA_theta);
   fChain->SetBranchAddress("ph_conv_DNA_perr", &ph_conv_DNA_perr, &b_ph_conv_DNA_perr);
   fChain->SetBranchAddress("ph_conv_DNA_phierr", &ph_conv_DNA_phierr, &b_ph_conv_DNA_phierr);
   fChain->SetBranchAddress("ph_conv_DNA_thetaerr", &ph_conv_DNA_thetaerr, &b_ph_conv_DNA_thetaerr);
   fChain->SetBranchAddress("ph_Etcone10_ED_corrected", &ph_Etcone10_ED_corrected, &b_ph_Etcone10_ED_corrected);
   fChain->SetBranchAddress("ph_Etcone15_ED_corrected", &ph_Etcone15_ED_corrected, &b_ph_Etcone15_ED_corrected);
   fChain->SetBranchAddress("ph_Etcone20_ED_corrected", &ph_Etcone20_ED_corrected, &b_ph_Etcone20_ED_corrected);
   fChain->SetBranchAddress("ph_Etcone25_ED_corrected", &ph_Etcone25_ED_corrected, &b_ph_Etcone25_ED_corrected);
   fChain->SetBranchAddress("ph_Etcone30_ED_corrected", &ph_Etcone30_ED_corrected, &b_ph_Etcone30_ED_corrected);
   fChain->SetBranchAddress("ph_Etcone35_ED_corrected", &ph_Etcone35_ED_corrected, &b_ph_Etcone35_ED_corrected);
   fChain->SetBranchAddress("ph_Etcone10_corrected", &ph_Etcone10_corrected, &b_ph_Etcone10_corrected);
   fChain->SetBranchAddress("ph_Etcone15_corrected", &ph_Etcone15_corrected, &b_ph_Etcone15_corrected);
   fChain->SetBranchAddress("ph_Etcone20_corrected", &ph_Etcone20_corrected, &b_ph_Etcone20_corrected);
   fChain->SetBranchAddress("ph_Etcone25_corrected", &ph_Etcone25_corrected, &b_ph_Etcone25_corrected);
   fChain->SetBranchAddress("ph_Etcone30_corrected", &ph_Etcone30_corrected, &b_ph_Etcone30_corrected);
   fChain->SetBranchAddress("ph_Etcone35_corrected", &ph_Etcone35_corrected, &b_ph_Etcone35_corrected);
   fChain->SetBranchAddress("ph_Etcone10_ED_corrected_new", &ph_Etcone10_ED_corrected_new, &b_ph_Etcone10_ED_corrected_new);
   fChain->SetBranchAddress("ph_Etcone15_ED_corrected_new", &ph_Etcone15_ED_corrected_new, &b_ph_Etcone15_ED_corrected_new);
   fChain->SetBranchAddress("ph_Etcone20_ED_corrected_new", &ph_Etcone20_ED_corrected_new, &b_ph_Etcone20_ED_corrected_new);
   fChain->SetBranchAddress("ph_Etcone25_ED_corrected_new", &ph_Etcone25_ED_corrected_new, &b_ph_Etcone25_ED_corrected_new);
   fChain->SetBranchAddress("ph_Etcone30_ED_corrected_new", &ph_Etcone30_ED_corrected_new, &b_ph_Etcone30_ED_corrected_new);
   fChain->SetBranchAddress("ph_Etcone35_ED_corrected_new", &ph_Etcone35_ED_corrected_new, &b_ph_Etcone35_ED_corrected_new);
   fChain->SetBranchAddress("ph_Etcone40_ED_corrected_new", &ph_Etcone40_ED_corrected_new, &b_ph_Etcone40_ED_corrected_new);
   fChain->SetBranchAddress("ph_Etcone10_corrected_new", &ph_Etcone10_corrected_new, &b_ph_Etcone10_corrected_new);
   fChain->SetBranchAddress("ph_Etcone15_corrected_new", &ph_Etcone15_corrected_new, &b_ph_Etcone15_corrected_new);
   fChain->SetBranchAddress("ph_Etcone20_corrected_new", &ph_Etcone20_corrected_new, &b_ph_Etcone20_corrected_new);
   fChain->SetBranchAddress("ph_Etcone25_corrected_new", &ph_Etcone25_corrected_new, &b_ph_Etcone25_corrected_new);
   fChain->SetBranchAddress("ph_Etcone30_corrected_new", &ph_Etcone30_corrected_new, &b_ph_Etcone30_corrected_new);
   fChain->SetBranchAddress("ph_Etcone35_corrected_new", &ph_Etcone35_corrected_new, &b_ph_Etcone35_corrected_new);
   fChain->SetBranchAddress("ph_Etcone40_corrected_new", &ph_Etcone40_corrected_new, &b_ph_Etcone40_corrected_new);
   fChain->SetBranchAddress("ph_cells35_Etcone20", &ph_cells35_Etcone20, &b_ph_cells35_Etcone20);
   fChain->SetBranchAddress("ph_cells35_Etcone30", &ph_cells35_Etcone30, &b_ph_cells35_Etcone30);
   fChain->SetBranchAddress("ph_cells35_Etcone40", &ph_cells35_Etcone40, &b_ph_cells35_Etcone40);
   fChain->SetBranchAddress("ph_cells55_Etcone20", &ph_cells55_Etcone20, &b_ph_cells55_Etcone20);
   fChain->SetBranchAddress("ph_cells55_Etcone30", &ph_cells55_Etcone30, &b_ph_cells55_Etcone30);
   fChain->SetBranchAddress("ph_cells55_Etcone40", &ph_cells55_Etcone40, &b_ph_cells55_Etcone40);
   fChain->SetBranchAddress("ph_Etcone20Iso", &ph_Etcone20Iso, &b_ph_Etcone20Iso);
   fChain->SetBranchAddress("ph_Etcone30Iso", &ph_Etcone30Iso, &b_ph_Etcone30Iso);
   fChain->SetBranchAddress("ph_Etcone40Iso", &ph_Etcone40Iso, &b_ph_Etcone40Iso);
   fChain->SetBranchAddress("ph_cells35_Etcone20Iso", &ph_cells35_Etcone20Iso, &b_ph_cells35_Etcone20Iso);
   fChain->SetBranchAddress("ph_cells35_Etcone30Iso", &ph_cells35_Etcone30Iso, &b_ph_cells35_Etcone30Iso);
   fChain->SetBranchAddress("ph_cells35_Etcone40Iso", &ph_cells35_Etcone40Iso, &b_ph_cells35_Etcone40Iso);
   fChain->SetBranchAddress("ph_cells55_Etcone20Iso", &ph_cells55_Etcone20Iso, &b_ph_cells55_Etcone20Iso);
   fChain->SetBranchAddress("ph_cells55_Etcone30Iso", &ph_cells55_Etcone30Iso, &b_ph_cells55_Etcone30Iso);
   fChain->SetBranchAddress("ph_cells55_Etcone40Iso", &ph_cells55_Etcone40Iso, &b_ph_cells55_Etcone40Iso);
   fChain->SetBranchAddress("ph_ED_median", &ph_ED_median, &b_ph_ED_median);
   fChain->SetBranchAddress("ph_ED_sigma", &ph_ED_sigma, &b_ph_ED_sigma);
   fChain->SetBranchAddress("ph_ED_Njets", &ph_ED_Njets, &b_ph_ED_Njets);
   fChain->SetBranchAddress("ph_ED_median_new", &ph_ED_median_new, &b_ph_ED_median_new);
   fChain->SetBranchAddress("ph_ED_sigma_new", &ph_ED_sigma_new, &b_ph_ED_sigma_new);
   fChain->SetBranchAddress("ph_ED_Njets_new", &ph_ED_Njets_new, &b_ph_ED_Njets_new);
   fChain->SetBranchAddress("ph_transmin_etcone40", &ph_transmin_etcone40, &b_ph_transmin_etcone40);
   fChain->SetBranchAddress("ph_transmax_etcone40", &ph_transmax_etcone40, &b_ph_transmax_etcone40);
   fChain->SetBranchAddress("ph_transmin_etcone100", &ph_transmin_etcone100, &b_ph_transmin_etcone100);
   fChain->SetBranchAddress("ph_transmax_etcone100", &ph_transmax_etcone100, &b_ph_transmax_etcone100);
   fChain->SetBranchAddress("ph_transmin", &ph_transmin, &b_ph_transmin);
   fChain->SetBranchAddress("ph_transmax", &ph_transmax, &b_ph_transmax);
   fChain->SetBranchAddress("ph_transmin_loweta", &ph_transmin_loweta, &b_ph_transmin_loweta);
   fChain->SetBranchAddress("ph_transmax_loweta", &ph_transmax_loweta, &b_ph_transmax_loweta);
   fChain->SetBranchAddress("ph_topodr", &ph_topodr, &b_ph_topodr);
   fChain->SetBranchAddress("ph_topopt", &ph_topopt, &b_ph_topopt);
   fChain->SetBranchAddress("ph_topoeta", &ph_topoeta, &b_ph_topoeta);
   fChain->SetBranchAddress("ph_topophi", &ph_topophi, &b_ph_topophi);
   fChain->SetBranchAddress("ph_topoEMsamplings_E", &ph_topoEMsamplings_E, &b_ph_topoEMsamplings_E);
   fChain->SetBranchAddress("ph_topoEMsamplings_Et", &ph_topoEMsamplings_Et, &b_ph_topoEMsamplings_Et);
   fChain->SetBranchAddress("ph_topoEMsamplings_eta", &ph_topoEMsamplings_eta, &b_ph_topoEMsamplings_eta);
   fChain->SetBranchAddress("ph_topoEMsamplings_phi", &ph_topoEMsamplings_phi, &b_ph_topoEMsamplings_phi);
   fChain->SetBranchAddress("ph_topoEMsamplings_uncalibrated_E", &ph_topoEMsamplings_uncalibrated_E, &b_ph_topoEMsamplings_uncalibrated_E);
   fChain->SetBranchAddress("ph_topoEMsamplings_uncalibrated_Et", &ph_topoEMsamplings_uncalibrated_Et, &b_ph_topoEMsamplings_uncalibrated_Et);
   fChain->SetBranchAddress("ph_topoEMsamplings_uncalibrated_eta", &ph_topoEMsamplings_uncalibrated_eta, &b_ph_topoEMsamplings_uncalibrated_eta);
   fChain->SetBranchAddress("ph_topoEMsamplings_uncalibrated_phi", &ph_topoEMsamplings_uncalibrated_phi, &b_ph_topoEMsamplings_uncalibrated_phi);
   fChain->SetBranchAddress("ph_topomatched", &ph_topomatched, &b_ph_topomatched);
   fChain->SetBranchAddress("ph_topoEMdr", &ph_topoEMdr, &b_ph_topoEMdr);
   fChain->SetBranchAddress("ph_topoEMpt", &ph_topoEMpt, &b_ph_topoEMpt);
   fChain->SetBranchAddress("ph_topoEMeta", &ph_topoEMeta, &b_ph_topoEMeta);
   fChain->SetBranchAddress("ph_topoEMphi", &ph_topoEMphi, &b_ph_topoEMphi);
   fChain->SetBranchAddress("ph_topoEMmatched", &ph_topoEMmatched, &b_ph_topoEMmatched);
   fChain->SetBranchAddress("ph_EF_dr", &ph_EF_dr, &b_ph_EF_dr);
   fChain->SetBranchAddress("ph_EF_index", &ph_EF_index, &b_ph_EF_index);
   fChain->SetBranchAddress("ph_L2_dr", &ph_L2_dr, &b_ph_L2_dr);
   fChain->SetBranchAddress("ph_L2_index", &ph_L2_index, &b_ph_L2_index);
   fChain->SetBranchAddress("ph_L1_dr", &ph_L1_dr, &b_ph_L1_dr);
   fChain->SetBranchAddress("ph_L1_index", &ph_L1_index, &b_ph_L1_index);
   fChain->SetBranchAddress("ph_jet_AntiKt4TopoEMJets_dr", &ph_jet_AntiKt4TopoEMJets_dr, &b_ph_jet_AntiKt4TopoEMJets_dr);
   fChain->SetBranchAddress("ph_jet_AntiKt4TopoEMJets_index", &ph_jet_AntiKt4TopoEMJets_index, &b_ph_jet_AntiKt4TopoEMJets_index);
   fChain->SetBranchAddress("ph_jet_AntiKt4TopoEMJets_matched", &ph_jet_AntiKt4TopoEMJets_matched, &b_ph_jet_AntiKt4TopoEMJets_matched);
   fChain->SetBranchAddress("ph_jet_AntiKt6TopoEMJets_dr", &ph_jet_AntiKt6TopoEMJets_dr, &b_ph_jet_AntiKt6TopoEMJets_dr);
   fChain->SetBranchAddress("ph_jet_AntiKt6TopoEMJets_index", &ph_jet_AntiKt6TopoEMJets_index, &b_ph_jet_AntiKt6TopoEMJets_index);
   fChain->SetBranchAddress("ph_jet_AntiKt6TopoEMJets_matched", &ph_jet_AntiKt6TopoEMJets_matched, &b_ph_jet_AntiKt6TopoEMJets_matched);
   fChain->SetBranchAddress("ph_el_index", &ph_el_index, &b_ph_el_index);
   fChain->SetBranchAddress("ph_etconoisedR04Sig2", &ph_etconoisedR04Sig2, &b_ph_etconoisedR04Sig2);
   fChain->SetBranchAddress("ph_etconoisedR04Sig3", &ph_etconoisedR04Sig3, &b_ph_etconoisedR04Sig3);
   fChain->SetBranchAddress("ph_topoEtcone30", &ph_topoEtcone30, &b_ph_topoEtcone30);
   fChain->SetBranchAddress("ph_topoEtcone50", &ph_topoEtcone50, &b_ph_topoEtcone50);
   fChain->SetBranchAddress("ph_topoEMEtcone20", &ph_topoEMEtcone20, &b_ph_topoEMEtcone20);
   fChain->SetBranchAddress("ph_topoEMEtcone30", &ph_topoEMEtcone30, &b_ph_topoEMEtcone30);
   fChain->SetBranchAddress("ph_topoEMEtcone40", &ph_topoEMEtcone40, &b_ph_topoEMEtcone40);
   fChain->SetBranchAddress("ph_topoEMEtcone50", &ph_topoEMEtcone50, &b_ph_topoEMEtcone50);
   fChain->SetBranchAddress("ph_topoEMEtcone60", &ph_topoEMEtcone60, &b_ph_topoEMEtcone60);
   fChain->SetBranchAddress("ph_convTrk_n", &ph_convTrk_n, &b_ph_convTrk_n);
   fChain->SetBranchAddress("ph_convTrk_index", &ph_convTrk_index, &b_ph_convTrk_index);
   fChain->SetBranchAddress("ph_convTrk_fitter", &ph_convTrk_fitter, &b_ph_convTrk_fitter);
   fChain->SetBranchAddress("ph_convTrk_patternReco1", &ph_convTrk_patternReco1, &b_ph_convTrk_patternReco1);
   fChain->SetBranchAddress("ph_convTrk_patternReco2", &ph_convTrk_patternReco2, &b_ph_convTrk_patternReco2);
   fChain->SetBranchAddress("ph_convTrk_seedFinder", &ph_convTrk_seedFinder, &b_ph_convTrk_seedFinder);
   fChain->SetBranchAddress("ph_vx_n", &ph_vx_n, &b_ph_vx_n);
   fChain->SetBranchAddress("ph_vx_convTrk_weight", &ph_vx_convTrk_weight, &b_ph_vx_convTrk_weight);
   fChain->SetBranchAddress("ph_vx_convTrk_n", &ph_vx_convTrk_n, &b_ph_vx_convTrk_n);
   fChain->SetBranchAddress("ph_vx_convTrk_index", &ph_vx_convTrk_index, &b_ph_vx_convTrk_index);
   fChain->SetBranchAddress("ph_vx_convTrk_fitter", &ph_vx_convTrk_fitter, &b_ph_vx_convTrk_fitter);
   fChain->SetBranchAddress("ph_vx_convTrk_patternReco1", &ph_vx_convTrk_patternReco1, &b_ph_vx_convTrk_patternReco1);
   fChain->SetBranchAddress("ph_vx_convTrk_patternReco2", &ph_vx_convTrk_patternReco2, &b_ph_vx_convTrk_patternReco2);
   fChain->SetBranchAddress("ph_vx_convTrk_seedFinder", &ph_vx_convTrk_seedFinder, &b_ph_vx_convTrk_seedFinder);
   fChain->SetBranchAddress("ph_topoPosEtcone20", &ph_topoPosEtcone20, &b_ph_topoPosEtcone20);
   fChain->SetBranchAddress("ph_topoPosEtcone30", &ph_topoPosEtcone30, &b_ph_topoPosEtcone30);
   fChain->SetBranchAddress("ph_topoPosEtcone40", &ph_topoPosEtcone40, &b_ph_topoPosEtcone40);
   fChain->SetBranchAddress("ph_topoPosEtcone50", &ph_topoPosEtcone50, &b_ph_topoPosEtcone50);
   fChain->SetBranchAddress("ph_topoPosEtcone60", &ph_topoPosEtcone60, &b_ph_topoPosEtcone60);
   fChain->SetBranchAddress("ph_topoEMPosEtcone20", &ph_topoEMPosEtcone20, &b_ph_topoEMPosEtcone20);
   fChain->SetBranchAddress("ph_topoEMPosEtcone30", &ph_topoEMPosEtcone30, &b_ph_topoEMPosEtcone30);
   fChain->SetBranchAddress("ph_topoEMPosEtcone40", &ph_topoEMPosEtcone40, &b_ph_topoEMPosEtcone40);
   fChain->SetBranchAddress("ph_topoEMPosEtcone50", &ph_topoEMPosEtcone50, &b_ph_topoEMPosEtcone50);
   fChain->SetBranchAddress("ph_topoEMPosEtcone60", &ph_topoEMPosEtcone60, &b_ph_topoEMPosEtcone60);
   fChain->SetBranchAddress("ph_topoEtcone20_TileGap3", &ph_topoEtcone20_TileGap3, &b_ph_topoEtcone20_TileGap3);
   fChain->SetBranchAddress("ph_topoEtcone30_TileGap3", &ph_topoEtcone30_TileGap3, &b_ph_topoEtcone30_TileGap3);
   fChain->SetBranchAddress("ph_topoEtcone40_TileGap3", &ph_topoEtcone40_TileGap3, &b_ph_topoEtcone40_TileGap3);
   fChain->SetBranchAddress("ph_topoEtcone50_TileGap3", &ph_topoEtcone50_TileGap3, &b_ph_topoEtcone50_TileGap3);
   fChain->SetBranchAddress("ph_topoEtcone60_TileGap3", &ph_topoEtcone60_TileGap3, &b_ph_topoEtcone60_TileGap3);
   fChain->SetBranchAddress("ph_topoPosEtcone20_TileGap3", &ph_topoPosEtcone20_TileGap3, &b_ph_topoPosEtcone20_TileGap3);
   fChain->SetBranchAddress("ph_topoPosEtcone30_TileGap3", &ph_topoPosEtcone30_TileGap3, &b_ph_topoPosEtcone30_TileGap3);
   fChain->SetBranchAddress("ph_topoPosEtcone40_TileGap3", &ph_topoPosEtcone40_TileGap3, &b_ph_topoPosEtcone40_TileGap3);
   fChain->SetBranchAddress("ph_topoPosEtcone50_TileGap3", &ph_topoPosEtcone50_TileGap3, &b_ph_topoPosEtcone50_TileGap3);
   fChain->SetBranchAddress("ph_topoPosEtcone60_TileGap3", &ph_topoPosEtcone60_TileGap3, &b_ph_topoPosEtcone60_TileGap3);
   fChain->SetBranchAddress("ph_Eraw57", &ph_Eraw57, &b_ph_Eraw57);
   fChain->SetBranchAddress("ph_etaraw57", &ph_etaraw57, &b_ph_etaraw57);
   fChain->SetBranchAddress("ph_NN_passes", &ph_NN_passes, &b_ph_NN_passes);
   fChain->SetBranchAddress("ph_NN_discriminant", &ph_NN_discriminant, &b_ph_NN_discriminant);
   fChain->SetBranchAddress("el_n", &el_n, &b_el_n);
   fChain->SetBranchAddress("el_E", &el_E, &b_el_E);
   fChain->SetBranchAddress("el_Et", &el_Et, &b_el_Et);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_m", &el_m, &b_el_m);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_px", &el_px, &b_el_px);
   fChain->SetBranchAddress("el_py", &el_py, &b_el_py);
   fChain->SetBranchAddress("el_pz", &el_pz, &b_el_pz);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_author", &el_author, &b_el_author);
   fChain->SetBranchAddress("el_isEM", &el_isEM, &b_el_isEM);
   fChain->SetBranchAddress("el_isEMLoose", &el_isEMLoose, &b_el_isEMLoose);
   fChain->SetBranchAddress("el_isEMMedium", &el_isEMMedium, &b_el_isEMMedium);
   fChain->SetBranchAddress("el_isEMTight", &el_isEMTight, &b_el_isEMTight);
   fChain->SetBranchAddress("el_OQ", &el_OQ, &b_el_OQ);
   fChain->SetBranchAddress("el_convFlag", &el_convFlag, &b_el_convFlag);
   fChain->SetBranchAddress("el_isConv", &el_isConv, &b_el_isConv);
   fChain->SetBranchAddress("el_nConv", &el_nConv, &b_el_nConv);
   fChain->SetBranchAddress("el_nSingleTrackConv", &el_nSingleTrackConv, &b_el_nSingleTrackConv);
   fChain->SetBranchAddress("el_nDoubleTrackConv", &el_nDoubleTrackConv, &b_el_nDoubleTrackConv);
   fChain->SetBranchAddress("el_OQRecalc", &el_OQRecalc, &b_el_OQRecalc);
   fChain->SetBranchAddress("el_type", &el_type, &b_el_type);
   fChain->SetBranchAddress("el_origin", &el_origin, &b_el_origin);
   fChain->SetBranchAddress("el_typebkg", &el_typebkg, &b_el_typebkg);
   fChain->SetBranchAddress("el_originbkg", &el_originbkg, &b_el_originbkg);
   fChain->SetBranchAddress("el_truth_E", &el_truth_E, &b_el_truth_E);
   fChain->SetBranchAddress("el_truth_pt", &el_truth_pt, &b_el_truth_pt);
   fChain->SetBranchAddress("el_truth_eta", &el_truth_eta, &b_el_truth_eta);
   fChain->SetBranchAddress("el_truth_phi", &el_truth_phi, &b_el_truth_phi);
   fChain->SetBranchAddress("el_truth_type", &el_truth_type, &b_el_truth_type);
   fChain->SetBranchAddress("el_truth_status", &el_truth_status, &b_el_truth_status);
   fChain->SetBranchAddress("el_truth_barcode", &el_truth_barcode, &b_el_truth_barcode);
   fChain->SetBranchAddress("el_truth_mothertype", &el_truth_mothertype, &b_el_truth_mothertype);
   fChain->SetBranchAddress("el_truth_motherbarcode", &el_truth_motherbarcode, &b_el_truth_motherbarcode);
   fChain->SetBranchAddress("el_truth_hasHardBrem", &el_truth_hasHardBrem, &b_el_truth_hasHardBrem);
   fChain->SetBranchAddress("el_truth_index", &el_truth_index, &b_el_truth_index);
   fChain->SetBranchAddress("el_truth_matched", &el_truth_matched, &b_el_truth_matched);
   fChain->SetBranchAddress("el_mediumWithoutTrack", &el_mediumWithoutTrack, &b_el_mediumWithoutTrack);
   fChain->SetBranchAddress("el_mediumIsoWithoutTrack", &el_mediumIsoWithoutTrack, &b_el_mediumIsoWithoutTrack);
   fChain->SetBranchAddress("el_tightWithoutTrack", &el_tightWithoutTrack, &b_el_tightWithoutTrack);
   fChain->SetBranchAddress("el_tightIsoWithoutTrack", &el_tightIsoWithoutTrack, &b_el_tightIsoWithoutTrack);
   fChain->SetBranchAddress("el_loose", &el_loose, &b_el_loose);
   fChain->SetBranchAddress("el_looseIso", &el_looseIso, &b_el_looseIso);
   fChain->SetBranchAddress("el_medium", &el_medium, &b_el_medium);
   fChain->SetBranchAddress("el_mediumIso", &el_mediumIso, &b_el_mediumIso);
   fChain->SetBranchAddress("el_tight", &el_tight, &b_el_tight);
   fChain->SetBranchAddress("el_tightIso", &el_tightIso, &b_el_tightIso);
   fChain->SetBranchAddress("el_loosePP", &el_loosePP, &b_el_loosePP);
   fChain->SetBranchAddress("el_loosePPIso", &el_loosePPIso, &b_el_loosePPIso);
   fChain->SetBranchAddress("el_mediumPP", &el_mediumPP, &b_el_mediumPP);
   fChain->SetBranchAddress("el_mediumPPIso", &el_mediumPPIso, &b_el_mediumPPIso);
   fChain->SetBranchAddress("el_tightPP", &el_tightPP, &b_el_tightPP);
   fChain->SetBranchAddress("el_tightPPIso", &el_tightPPIso, &b_el_tightPPIso);
   fChain->SetBranchAddress("el_goodOQ", &el_goodOQ, &b_el_goodOQ);
   fChain->SetBranchAddress("el_Ethad", &el_Ethad, &b_el_Ethad);
   fChain->SetBranchAddress("el_Ethad1", &el_Ethad1, &b_el_Ethad1);
   fChain->SetBranchAddress("el_f1", &el_f1, &b_el_f1);
   fChain->SetBranchAddress("el_f1core", &el_f1core, &b_el_f1core);
   fChain->SetBranchAddress("el_Emins1", &el_Emins1, &b_el_Emins1);
   fChain->SetBranchAddress("el_fside", &el_fside, &b_el_fside);
   fChain->SetBranchAddress("el_Emax2", &el_Emax2, &b_el_Emax2);
   fChain->SetBranchAddress("el_ws3", &el_ws3, &b_el_ws3);
   fChain->SetBranchAddress("el_wstot", &el_wstot, &b_el_wstot);
   fChain->SetBranchAddress("el_emaxs1", &el_emaxs1, &b_el_emaxs1);
   fChain->SetBranchAddress("el_deltaEs", &el_deltaEs, &b_el_deltaEs);
   fChain->SetBranchAddress("el_E233", &el_E233, &b_el_E233);
   fChain->SetBranchAddress("el_E237", &el_E237, &b_el_E237);
   fChain->SetBranchAddress("el_E277", &el_E277, &b_el_E277);
   fChain->SetBranchAddress("el_weta2", &el_weta2, &b_el_weta2);
   fChain->SetBranchAddress("el_f3", &el_f3, &b_el_f3);
   fChain->SetBranchAddress("el_f3core", &el_f3core, &b_el_f3core);
   fChain->SetBranchAddress("el_rphiallcalo", &el_rphiallcalo, &b_el_rphiallcalo);
   fChain->SetBranchAddress("el_Etcone45", &el_Etcone45, &b_el_Etcone45);
   fChain->SetBranchAddress("el_Etcone15", &el_Etcone15, &b_el_Etcone15);
   fChain->SetBranchAddress("el_Etcone20", &el_Etcone20, &b_el_Etcone20);
   fChain->SetBranchAddress("el_Etcone25", &el_Etcone25, &b_el_Etcone25);
   fChain->SetBranchAddress("el_Etcone30", &el_Etcone30, &b_el_Etcone30);
   fChain->SetBranchAddress("el_Etcone35", &el_Etcone35, &b_el_Etcone35);
   fChain->SetBranchAddress("el_Etcone40", &el_Etcone40, &b_el_Etcone40);
   fChain->SetBranchAddress("el_ptcone20", &el_ptcone20, &b_el_ptcone20);
   fChain->SetBranchAddress("el_ptcone30", &el_ptcone30, &b_el_ptcone30);
   fChain->SetBranchAddress("el_ptcone40", &el_ptcone40, &b_el_ptcone40);
   fChain->SetBranchAddress("el_nucone20", &el_nucone20, &b_el_nucone20);
   fChain->SetBranchAddress("el_nucone30", &el_nucone30, &b_el_nucone30);
   fChain->SetBranchAddress("el_nucone40", &el_nucone40, &b_el_nucone40);
   fChain->SetBranchAddress("el_convanglematch", &el_convanglematch, &b_el_convanglematch);
   fChain->SetBranchAddress("el_convtrackmatch", &el_convtrackmatch, &b_el_convtrackmatch);
   fChain->SetBranchAddress("el_hasconv", &el_hasconv, &b_el_hasconv);
   fChain->SetBranchAddress("el_convvtxx", &el_convvtxx, &b_el_convvtxx);
   fChain->SetBranchAddress("el_convvtxy", &el_convvtxy, &b_el_convvtxy);
   fChain->SetBranchAddress("el_convvtxz", &el_convvtxz, &b_el_convvtxz);
   fChain->SetBranchAddress("el_Rconv", &el_Rconv, &b_el_Rconv);
   fChain->SetBranchAddress("el_zconv", &el_zconv, &b_el_zconv);
   fChain->SetBranchAddress("el_convvtxchi2", &el_convvtxchi2, &b_el_convvtxchi2);
   fChain->SetBranchAddress("el_pt1conv", &el_pt1conv, &b_el_pt1conv);
   fChain->SetBranchAddress("el_convtrk1nBLHits", &el_convtrk1nBLHits, &b_el_convtrk1nBLHits);
   fChain->SetBranchAddress("el_convtrk1nPixHits", &el_convtrk1nPixHits, &b_el_convtrk1nPixHits);
   fChain->SetBranchAddress("el_convtrk1nSCTHits", &el_convtrk1nSCTHits, &b_el_convtrk1nSCTHits);
   fChain->SetBranchAddress("el_convtrk1nTRTHits", &el_convtrk1nTRTHits, &b_el_convtrk1nTRTHits);
   fChain->SetBranchAddress("el_pt2conv", &el_pt2conv, &b_el_pt2conv);
   fChain->SetBranchAddress("el_convtrk2nBLHits", &el_convtrk2nBLHits, &b_el_convtrk2nBLHits);
   fChain->SetBranchAddress("el_convtrk2nPixHits", &el_convtrk2nPixHits, &b_el_convtrk2nPixHits);
   fChain->SetBranchAddress("el_convtrk2nSCTHits", &el_convtrk2nSCTHits, &b_el_convtrk2nSCTHits);
   fChain->SetBranchAddress("el_convtrk2nTRTHits", &el_convtrk2nTRTHits, &b_el_convtrk2nTRTHits);
   fChain->SetBranchAddress("el_ptconv", &el_ptconv, &b_el_ptconv);
   fChain->SetBranchAddress("el_pzconv", &el_pzconv, &b_el_pzconv);
   fChain->SetBranchAddress("el_pos7", &el_pos7, &b_el_pos7);
   fChain->SetBranchAddress("el_etacorrmag", &el_etacorrmag, &b_el_etacorrmag);
   fChain->SetBranchAddress("el_deltaeta1", &el_deltaeta1, &b_el_deltaeta1);
   fChain->SetBranchAddress("el_deltaeta2", &el_deltaeta2, &b_el_deltaeta2);
   fChain->SetBranchAddress("el_deltaphi2", &el_deltaphi2, &b_el_deltaphi2);
   fChain->SetBranchAddress("el_deltaphiRescaled", &el_deltaphiRescaled, &b_el_deltaphiRescaled);
   fChain->SetBranchAddress("el_deltaPhiRot", &el_deltaPhiRot, &b_el_deltaPhiRot);
   fChain->SetBranchAddress("el_expectHitInBLayer", &el_expectHitInBLayer, &b_el_expectHitInBLayer);
   fChain->SetBranchAddress("el_trackd0_physics", &el_trackd0_physics, &b_el_trackd0_physics);
   fChain->SetBranchAddress("el_etaSampling1", &el_etaSampling1, &b_el_etaSampling1);
   fChain->SetBranchAddress("el_reta", &el_reta, &b_el_reta);
   fChain->SetBranchAddress("el_rphi", &el_rphi, &b_el_rphi);
   fChain->SetBranchAddress("el_refittedTrack_n", &el_refittedTrack_n, &b_el_refittedTrack_n);
   fChain->SetBranchAddress("el_firstEdens", &el_firstEdens, &b_el_firstEdens);
   fChain->SetBranchAddress("el_cellmaxfrac", &el_cellmaxfrac, &b_el_cellmaxfrac);
   fChain->SetBranchAddress("el_longitudinal", &el_longitudinal, &b_el_longitudinal);
   fChain->SetBranchAddress("el_secondlambda", &el_secondlambda, &b_el_secondlambda);
   fChain->SetBranchAddress("el_lateral", &el_lateral, &b_el_lateral);
   fChain->SetBranchAddress("el_secondR", &el_secondR, &b_el_secondR);
   fChain->SetBranchAddress("el_centerlambda", &el_centerlambda, &b_el_centerlambda);
   fChain->SetBranchAddress("el_Es0", &el_Es0, &b_el_Es0);
   fChain->SetBranchAddress("el_etas0", &el_etas0, &b_el_etas0);
   fChain->SetBranchAddress("el_phis0", &el_phis0, &b_el_phis0);
   fChain->SetBranchAddress("el_Es1", &el_Es1, &b_el_Es1);
   fChain->SetBranchAddress("el_etas1", &el_etas1, &b_el_etas1);
   fChain->SetBranchAddress("el_phis1", &el_phis1, &b_el_phis1);
   fChain->SetBranchAddress("el_Es2", &el_Es2, &b_el_Es2);
   fChain->SetBranchAddress("el_etas2", &el_etas2, &b_el_etas2);
   fChain->SetBranchAddress("el_phis2", &el_phis2, &b_el_phis2);
   fChain->SetBranchAddress("el_Es3", &el_Es3, &b_el_Es3);
   fChain->SetBranchAddress("el_etas3", &el_etas3, &b_el_etas3);
   fChain->SetBranchAddress("el_phis3", &el_phis3, &b_el_phis3);
   fChain->SetBranchAddress("el_E_PreSamplerB", &el_E_PreSamplerB, &b_el_E_PreSamplerB);
   fChain->SetBranchAddress("el_E_EMB1", &el_E_EMB1, &b_el_E_EMB1);
   fChain->SetBranchAddress("el_E_EMB2", &el_E_EMB2, &b_el_E_EMB2);
   fChain->SetBranchAddress("el_E_EMB3", &el_E_EMB3, &b_el_E_EMB3);
   fChain->SetBranchAddress("el_E_PreSamplerE", &el_E_PreSamplerE, &b_el_E_PreSamplerE);
   fChain->SetBranchAddress("el_E_EME1", &el_E_EME1, &b_el_E_EME1);
   fChain->SetBranchAddress("el_E_EME2", &el_E_EME2, &b_el_E_EME2);
   fChain->SetBranchAddress("el_E_EME3", &el_E_EME3, &b_el_E_EME3);
   fChain->SetBranchAddress("el_E_HEC0", &el_E_HEC0, &b_el_E_HEC0);
   fChain->SetBranchAddress("el_E_HEC1", &el_E_HEC1, &b_el_E_HEC1);
   fChain->SetBranchAddress("el_E_HEC2", &el_E_HEC2, &b_el_E_HEC2);
   fChain->SetBranchAddress("el_E_HEC3", &el_E_HEC3, &b_el_E_HEC3);
   fChain->SetBranchAddress("el_E_TileBar0", &el_E_TileBar0, &b_el_E_TileBar0);
   fChain->SetBranchAddress("el_E_TileBar1", &el_E_TileBar1, &b_el_E_TileBar1);
   fChain->SetBranchAddress("el_E_TileBar2", &el_E_TileBar2, &b_el_E_TileBar2);
   fChain->SetBranchAddress("el_E_TileGap1", &el_E_TileGap1, &b_el_E_TileGap1);
   fChain->SetBranchAddress("el_E_TileGap2", &el_E_TileGap2, &b_el_E_TileGap2);
   fChain->SetBranchAddress("el_E_TileGap3", &el_E_TileGap3, &b_el_E_TileGap3);
   fChain->SetBranchAddress("el_E_TileExt0", &el_E_TileExt0, &b_el_E_TileExt0);
   fChain->SetBranchAddress("el_E_TileExt1", &el_E_TileExt1, &b_el_E_TileExt1);
   fChain->SetBranchAddress("el_E_TileExt2", &el_E_TileExt2, &b_el_E_TileExt2);
   fChain->SetBranchAddress("el_E_FCAL0", &el_E_FCAL0, &b_el_E_FCAL0);
   fChain->SetBranchAddress("el_E_FCAL1", &el_E_FCAL1, &b_el_E_FCAL1);
   fChain->SetBranchAddress("el_E_FCAL2", &el_E_FCAL2, &b_el_E_FCAL2);
   fChain->SetBranchAddress("el_cl_E", &el_cl_E, &b_el_cl_E);
   fChain->SetBranchAddress("el_cl_pt", &el_cl_pt, &b_el_cl_pt);
   fChain->SetBranchAddress("el_cl_eta", &el_cl_eta, &b_el_cl_eta);
   fChain->SetBranchAddress("el_cl_phi", &el_cl_phi, &b_el_cl_phi);
   fChain->SetBranchAddress("el_time", &el_time, &b_el_time);
   fChain->SetBranchAddress("el_trackd0", &el_trackd0, &b_el_trackd0);
   fChain->SetBranchAddress("el_trackz0", &el_trackz0, &b_el_trackz0);
   fChain->SetBranchAddress("el_trackphi", &el_trackphi, &b_el_trackphi);
   fChain->SetBranchAddress("el_tracktheta", &el_tracktheta, &b_el_tracktheta);
   fChain->SetBranchAddress("el_trackqoverp", &el_trackqoverp, &b_el_trackqoverp);
   fChain->SetBranchAddress("el_trackpt", &el_trackpt, &b_el_trackpt);
   fChain->SetBranchAddress("el_tracketa", &el_tracketa, &b_el_tracketa);
   fChain->SetBranchAddress("el_nBLHits", &el_nBLHits, &b_el_nBLHits);
   fChain->SetBranchAddress("el_nPixHits", &el_nPixHits, &b_el_nPixHits);
   fChain->SetBranchAddress("el_nSCTHits", &el_nSCTHits, &b_el_nSCTHits);
   fChain->SetBranchAddress("el_nTRTHits", &el_nTRTHits, &b_el_nTRTHits);
   fChain->SetBranchAddress("el_nTRTHighTHits", &el_nTRTHighTHits, &b_el_nTRTHighTHits);
   fChain->SetBranchAddress("el_nPixHoles", &el_nPixHoles, &b_el_nPixHoles);
   fChain->SetBranchAddress("el_nSCTHoles", &el_nSCTHoles, &b_el_nSCTHoles);
   fChain->SetBranchAddress("el_nTRTHoles", &el_nTRTHoles, &b_el_nTRTHoles);
   fChain->SetBranchAddress("el_nBLSharedHits", &el_nBLSharedHits, &b_el_nBLSharedHits);
   fChain->SetBranchAddress("el_nPixSharedHits", &el_nPixSharedHits, &b_el_nPixSharedHits);
   fChain->SetBranchAddress("el_nSCTSharedHits", &el_nSCTSharedHits, &b_el_nSCTSharedHits);
   fChain->SetBranchAddress("el_nBLayerOutliers", &el_nBLayerOutliers, &b_el_nBLayerOutliers);
   fChain->SetBranchAddress("el_nPixelOutliers", &el_nPixelOutliers, &b_el_nPixelOutliers);
   fChain->SetBranchAddress("el_nSCTOutliers", &el_nSCTOutliers, &b_el_nSCTOutliers);
   fChain->SetBranchAddress("el_nTRTOutliers", &el_nTRTOutliers, &b_el_nTRTOutliers);
   fChain->SetBranchAddress("el_nTRTHighTOutliers", &el_nTRTHighTOutliers, &b_el_nTRTHighTOutliers);
   fChain->SetBranchAddress("el_expectBLayerHit", &el_expectBLayerHit, &b_el_expectBLayerHit);
   fChain->SetBranchAddress("el_nSiHits", &el_nSiHits, &b_el_nSiHits);
   fChain->SetBranchAddress("el_TRTHighTHitsRatio", &el_TRTHighTHitsRatio, &b_el_TRTHighTHitsRatio);
   fChain->SetBranchAddress("el_TRTHighTOutliersRatio", &el_TRTHighTOutliersRatio, &b_el_TRTHighTOutliersRatio);
   fChain->SetBranchAddress("el_pixeldEdx", &el_pixeldEdx, &b_el_pixeldEdx);
   fChain->SetBranchAddress("el_nGoodHitsPixeldEdx", &el_nGoodHitsPixeldEdx, &b_el_nGoodHitsPixeldEdx);
   fChain->SetBranchAddress("el_massPixeldEdx", &el_massPixeldEdx, &b_el_massPixeldEdx);
   fChain->SetBranchAddress("el_likelihoodsPixeldEdx", &el_likelihoodsPixeldEdx, &b_el_likelihoodsPixeldEdx);
   fChain->SetBranchAddress("el_eProbabilityComb", &el_eProbabilityComb, &b_el_eProbabilityComb);
   fChain->SetBranchAddress("el_eProbabilityHT", &el_eProbabilityHT, &b_el_eProbabilityHT);
   fChain->SetBranchAddress("el_eProbabilityToT", &el_eProbabilityToT, &b_el_eProbabilityToT);
   fChain->SetBranchAddress("el_eProbabilityBrem", &el_eProbabilityBrem, &b_el_eProbabilityBrem);
   fChain->SetBranchAddress("el_vertweight", &el_vertweight, &b_el_vertweight);
   fChain->SetBranchAddress("el_trackd0beam", &el_trackd0beam, &b_el_trackd0beam);
   fChain->SetBranchAddress("el_trackz0beam", &el_trackz0beam, &b_el_trackz0beam);
   fChain->SetBranchAddress("el_tracksigd0beam", &el_tracksigd0beam, &b_el_tracksigd0beam);
   fChain->SetBranchAddress("el_tracksigz0beam", &el_tracksigz0beam, &b_el_tracksigz0beam);
   fChain->SetBranchAddress("el_trackd0pv", &el_trackd0pv, &b_el_trackd0pv);
   fChain->SetBranchAddress("el_trackz0pv", &el_trackz0pv, &b_el_trackz0pv);
   fChain->SetBranchAddress("el_tracksigd0pv", &el_tracksigd0pv, &b_el_tracksigd0pv);
   fChain->SetBranchAddress("el_tracksigz0pv", &el_tracksigz0pv, &b_el_tracksigz0pv);
   fChain->SetBranchAddress("el_trackIPEstimate_d0_biasedpvunbiased", &el_trackIPEstimate_d0_biasedpvunbiased, &b_el_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_z0_biasedpvunbiased", &el_trackIPEstimate_z0_biasedpvunbiased, &b_el_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigd0_biasedpvunbiased", &el_trackIPEstimate_sigd0_biasedpvunbiased, &b_el_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigz0_biasedpvunbiased", &el_trackIPEstimate_sigz0_biasedpvunbiased, &b_el_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_d0_unbiasedpvunbiased", &el_trackIPEstimate_d0_unbiasedpvunbiased, &b_el_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_z0_unbiasedpvunbiased", &el_trackIPEstimate_z0_unbiasedpvunbiased, &b_el_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigd0_unbiasedpvunbiased", &el_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_el_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigz0_unbiasedpvunbiased", &el_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_el_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackd0pvunbiased", &el_trackd0pvunbiased, &b_el_trackd0pvunbiased);
   fChain->SetBranchAddress("el_trackz0pvunbiased", &el_trackz0pvunbiased, &b_el_trackz0pvunbiased);
   fChain->SetBranchAddress("el_tracksigd0pvunbiased", &el_tracksigd0pvunbiased, &b_el_tracksigd0pvunbiased);
   fChain->SetBranchAddress("el_tracksigz0pvunbiased", &el_tracksigz0pvunbiased, &b_el_tracksigz0pvunbiased);
   fChain->SetBranchAddress("el_hastrack", &el_hastrack, &b_el_hastrack);
   fChain->SetBranchAddress("el_deltaEmax2", &el_deltaEmax2, &b_el_deltaEmax2);
   fChain->SetBranchAddress("el_calibHitsShowerDepth", &el_calibHitsShowerDepth, &b_el_calibHitsShowerDepth);
   fChain->SetBranchAddress("el_isIso", &el_isIso, &b_el_isIso);
   fChain->SetBranchAddress("el_mvaptcone20", &el_mvaptcone20, &b_el_mvaptcone20);
   fChain->SetBranchAddress("el_mvaptcone30", &el_mvaptcone30, &b_el_mvaptcone30);
   fChain->SetBranchAddress("el_mvaptcone40", &el_mvaptcone40, &b_el_mvaptcone40);
   fChain->SetBranchAddress("el_EF_dr", &el_EF_dr, &b_el_EF_dr);
   fChain->SetBranchAddress("el_EF_index", &el_EF_index, &b_el_EF_index);
   fChain->SetBranchAddress("el_L2_dr", &el_L2_dr, &b_el_L2_dr);
   fChain->SetBranchAddress("el_L2_index", &el_L2_index, &b_el_L2_index);
   fChain->SetBranchAddress("el_L1_dr", &el_L1_dr, &b_el_L1_dr);
   fChain->SetBranchAddress("el_L1_index", &el_L1_index, &b_el_L1_index);
   fChain->SetBranchAddress("el_jet_AntiKt4TopoEMJets_dr", &el_jet_AntiKt4TopoEMJets_dr, &b_el_jet_AntiKt4TopoEMJets_dr);
   fChain->SetBranchAddress("el_jet_AntiKt4TopoEMJets_index", &el_jet_AntiKt4TopoEMJets_index, &b_el_jet_AntiKt4TopoEMJets_index);
   fChain->SetBranchAddress("el_jet_AntiKt4TopoEMJets_matched", &el_jet_AntiKt4TopoEMJets_matched, &b_el_jet_AntiKt4TopoEMJets_matched);
   fChain->SetBranchAddress("el_jet_AntiKt6TopoEMJets_dr", &el_jet_AntiKt6TopoEMJets_dr, &b_el_jet_AntiKt6TopoEMJets_dr);
   fChain->SetBranchAddress("el_jet_AntiKt6TopoEMJets_index", &el_jet_AntiKt6TopoEMJets_index, &b_el_jet_AntiKt6TopoEMJets_index);
   fChain->SetBranchAddress("el_jet_AntiKt6TopoEMJets_matched", &el_jet_AntiKt6TopoEMJets_matched, &b_el_jet_AntiKt6TopoEMJets_matched);
   fChain->SetBranchAddress("el_EtringnoisedR03sig2", &el_EtringnoisedR03sig2, &b_el_EtringnoisedR03sig2);
   fChain->SetBranchAddress("el_EtringnoisedR03sig3", &el_EtringnoisedR03sig3, &b_el_EtringnoisedR03sig3);
   fChain->SetBranchAddress("el_EtringnoisedR03sig4", &el_EtringnoisedR03sig4, &b_el_EtringnoisedR03sig4);
   fChain->SetBranchAddress("el_zvertex", &el_zvertex, &b_el_zvertex);
   fChain->SetBranchAddress("el_errz", &el_errz, &b_el_errz);
   fChain->SetBranchAddress("el_etap", &el_etap, &b_el_etap);
   fChain->SetBranchAddress("el_depth", &el_depth, &b_el_depth);
   fChain->SetBranchAddress("el_Etcone15_pt_corrected", &el_Etcone15_pt_corrected, &b_el_Etcone15_pt_corrected);
   fChain->SetBranchAddress("el_Etcone20_pt_corrected", &el_Etcone20_pt_corrected, &b_el_Etcone20_pt_corrected);
   fChain->SetBranchAddress("el_Etcone25_pt_corrected", &el_Etcone25_pt_corrected, &b_el_Etcone25_pt_corrected);
   fChain->SetBranchAddress("el_Etcone30_pt_corrected", &el_Etcone30_pt_corrected, &b_el_Etcone30_pt_corrected);
   fChain->SetBranchAddress("el_Etcone35_pt_corrected", &el_Etcone35_pt_corrected, &b_el_Etcone35_pt_corrected);
   fChain->SetBranchAddress("el_Etcone40_pt_corrected", &el_Etcone40_pt_corrected, &b_el_Etcone40_pt_corrected);
   fChain->SetBranchAddress("el_ES0_real", &el_ES0_real, &b_el_ES0_real);
   fChain->SetBranchAddress("el_ES1_real", &el_ES1_real, &b_el_ES1_real);
   fChain->SetBranchAddress("el_ES2_real", &el_ES2_real, &b_el_ES2_real);
   fChain->SetBranchAddress("el_ES3_real", &el_ES3_real, &b_el_ES3_real);
   fChain->SetBranchAddress("el_EcellS0", &el_EcellS0, &b_el_EcellS0);
   fChain->SetBranchAddress("el_etacellS0", &el_etacellS0, &b_el_etacellS0);
   fChain->SetBranchAddress("el_CaloPointing_zvertex", &el_CaloPointing_zvertex, &b_el_CaloPointing_zvertex);
   fChain->SetBranchAddress("el_CaloPointing_sigma_zvertex", &el_CaloPointing_sigma_zvertex, &b_el_CaloPointing_sigma_zvertex);
   fChain->SetBranchAddress("el_CaloPointing_eta", &el_CaloPointing_eta, &b_el_CaloPointing_eta);
   fChain->SetBranchAddress("el_CaloPointing_sigma_eta", &el_CaloPointing_sigma_eta, &b_el_CaloPointing_sigma_eta);
   fChain->SetBranchAddress("el_ambiguityResult", &el_ambiguityResult, &b_el_ambiguityResult);
   fChain->SetBranchAddress("el_itune1", &el_itune1, &b_el_itune1);
   fChain->SetBranchAddress("el_itune2", &el_itune2, &b_el_itune2);
   fChain->SetBranchAddress("el_itune3", &el_itune3, &b_el_itune3);
   fChain->SetBranchAddress("el_trackIsol", &el_trackIsol, &b_el_trackIsol);
   fChain->SetBranchAddress("el_PtIsolationCone_woIC", &el_PtIsolationCone_woIC, &b_el_PtIsolationCone_woIC);
   fChain->SetBranchAddress("el_trackIsol_woIC", &el_trackIsol_woIC, &b_el_trackIsol_woIC);
   fChain->SetBranchAddress("el_isGoodOQbits", &el_isGoodOQbits, &b_el_isGoodOQbits);
   fChain->SetBranchAddress("el_isGoodOQphoton", &el_isGoodOQphoton, &b_el_isGoodOQphoton);
   fChain->SetBranchAddress("el_isGoodOQelectron", &el_isGoodOQelectron, &b_el_isGoodOQelectron);
   fChain->SetBranchAddress("el_Etcone20_ED_corrected", &el_Etcone20_ED_corrected, &b_el_Etcone20_ED_corrected);
   fChain->SetBranchAddress("el_Etcone30_ED_corrected", &el_Etcone30_ED_corrected, &b_el_Etcone30_ED_corrected);
   fChain->SetBranchAddress("el_Etcone40_ED_corrected", &el_Etcone40_ED_corrected, &b_el_Etcone40_ED_corrected);
   fChain->SetBranchAddress("el_Etcone20_corrected", &el_Etcone20_corrected, &b_el_Etcone20_corrected);
   fChain->SetBranchAddress("el_Etcone30_corrected", &el_Etcone30_corrected, &b_el_Etcone30_corrected);
   fChain->SetBranchAddress("el_Etcone40_corrected", &el_Etcone40_corrected, &b_el_Etcone40_corrected);
   fChain->SetBranchAddress("el_Etcone20_ED_corrected_new", &el_Etcone20_ED_corrected_new, &b_el_Etcone20_ED_corrected_new);
   fChain->SetBranchAddress("el_Etcone30_ED_corrected_new", &el_Etcone30_ED_corrected_new, &b_el_Etcone30_ED_corrected_new);
   fChain->SetBranchAddress("el_Etcone40_ED_corrected_new", &el_Etcone40_ED_corrected_new, &b_el_Etcone40_ED_corrected_new);
   fChain->SetBranchAddress("el_Etcone20_corrected_new", &el_Etcone20_corrected_new, &b_el_Etcone20_corrected_new);
   fChain->SetBranchAddress("el_Etcone30_corrected_new", &el_Etcone30_corrected_new, &b_el_Etcone30_corrected_new);
   fChain->SetBranchAddress("el_Etcone40_corrected_new", &el_Etcone40_corrected_new, &b_el_Etcone40_corrected_new);
   fChain->SetBranchAddress("el_ED_median", &el_ED_median, &b_el_ED_median);
   fChain->SetBranchAddress("el_ED_sigma", &el_ED_sigma, &b_el_ED_sigma);
   fChain->SetBranchAddress("el_ED_Njets", &el_ED_Njets, &b_el_ED_Njets);
   fChain->SetBranchAddress("el_ED_median_new", &el_ED_median_new, &b_el_ED_median_new);
   fChain->SetBranchAddress("el_ED_sigma_new", &el_ED_sigma_new, &b_el_ED_sigma_new);
   fChain->SetBranchAddress("el_ED_Njets_new", &el_ED_Njets_new, &b_el_ED_Njets_new);
   fChain->SetBranchAddress("el_transmin_etcone40", &el_transmin_etcone40, &b_el_transmin_etcone40);
   fChain->SetBranchAddress("el_transmax_etcone40", &el_transmax_etcone40, &b_el_transmax_etcone40);
   fChain->SetBranchAddress("el_transmin_etcone100", &el_transmin_etcone100, &b_el_transmin_etcone100);
   fChain->SetBranchAddress("el_transmax_etcone100", &el_transmax_etcone100, &b_el_transmax_etcone100);
   fChain->SetBranchAddress("el_transmin", &el_transmin, &b_el_transmin);
   fChain->SetBranchAddress("el_transmax", &el_transmax, &b_el_transmax);
   fChain->SetBranchAddress("el_transmin_loweta", &el_transmin_loweta, &b_el_transmin_loweta);
   fChain->SetBranchAddress("el_transmax_loweta", &el_transmax_loweta, &b_el_transmax_loweta);
   fChain->SetBranchAddress("el_etconoisedR04Sig2", &el_etconoisedR04Sig2, &b_el_etconoisedR04Sig2);
   fChain->SetBranchAddress("el_etconoisedR04Sig3", &el_etconoisedR04Sig3, &b_el_etconoisedR04Sig3);
   fChain->SetBranchAddress("el_topoPosEtcone20", &el_topoPosEtcone20, &b_el_topoPosEtcone20);
   fChain->SetBranchAddress("el_topoPosEtcone30", &el_topoPosEtcone30, &b_el_topoPosEtcone30);
   fChain->SetBranchAddress("el_topoPosEtcone40", &el_topoPosEtcone40, &b_el_topoPosEtcone40);
   fChain->SetBranchAddress("el_topoPosEtcone50", &el_topoPosEtcone50, &b_el_topoPosEtcone50);
   fChain->SetBranchAddress("el_topoPosEtcone60", &el_topoPosEtcone60, &b_el_topoPosEtcone60);
   fChain->SetBranchAddress("el_topoEMPosEtcone20", &el_topoEMPosEtcone20, &b_el_topoEMPosEtcone20);
   fChain->SetBranchAddress("el_topoEMPosEtcone30", &el_topoEMPosEtcone30, &b_el_topoEMPosEtcone30);
   fChain->SetBranchAddress("el_topoEMPosEtcone40", &el_topoEMPosEtcone40, &b_el_topoEMPosEtcone40);
   fChain->SetBranchAddress("el_topoEMPosEtcone50", &el_topoEMPosEtcone50, &b_el_topoEMPosEtcone50);
   fChain->SetBranchAddress("el_topoEMPosEtcone60", &el_topoEMPosEtcone60, &b_el_topoEMPosEtcone60);
   fChain->SetBranchAddress("el_topoEtcone20_TileGap3", &el_topoEtcone20_TileGap3, &b_el_topoEtcone20_TileGap3);
   fChain->SetBranchAddress("el_topoEtcone30_TileGap3", &el_topoEtcone30_TileGap3, &b_el_topoEtcone30_TileGap3);
   fChain->SetBranchAddress("el_topoEtcone40_TileGap3", &el_topoEtcone40_TileGap3, &b_el_topoEtcone40_TileGap3);
   fChain->SetBranchAddress("el_topoEtcone50_TileGap3", &el_topoEtcone50_TileGap3, &b_el_topoEtcone50_TileGap3);
   fChain->SetBranchAddress("el_topoEtcone60_TileGap3", &el_topoEtcone60_TileGap3, &b_el_topoEtcone60_TileGap3);
   fChain->SetBranchAddress("el_topoPosEtcone20_TileGap3", &el_topoPosEtcone20_TileGap3, &b_el_topoPosEtcone20_TileGap3);
   fChain->SetBranchAddress("el_topoPosEtcone30_TileGap3", &el_topoPosEtcone30_TileGap3, &b_el_topoPosEtcone30_TileGap3);
   fChain->SetBranchAddress("el_topoPosEtcone40_TileGap3", &el_topoPosEtcone40_TileGap3, &b_el_topoPosEtcone40_TileGap3);
   fChain->SetBranchAddress("el_topoPosEtcone50_TileGap3", &el_topoPosEtcone50_TileGap3, &b_el_topoPosEtcone50_TileGap3);
   fChain->SetBranchAddress("el_topoPosEtcone60_TileGap3", &el_topoPosEtcone60_TileGap3, &b_el_topoPosEtcone60_TileGap3);
   fChain->SetBranchAddress("el_Eraw57", &el_Eraw57, &b_el_Eraw57);
   fChain->SetBranchAddress("el_etaraw57", &el_etaraw57, &b_el_etaraw57);
   fChain->SetBranchAddress("el_topodr", &el_topodr, &b_el_topodr);
   fChain->SetBranchAddress("el_topopt", &el_topopt, &b_el_topopt);
   fChain->SetBranchAddress("el_topoeta", &el_topoeta, &b_el_topoeta);
   fChain->SetBranchAddress("el_topophi", &el_topophi, &b_el_topophi);
   fChain->SetBranchAddress("el_topoEMsamplings_E", &el_topoEMsamplings_E, &b_el_topoEMsamplings_E);
   fChain->SetBranchAddress("el_topoEMsamplings_Et", &el_topoEMsamplings_Et, &b_el_topoEMsamplings_Et);
   fChain->SetBranchAddress("el_topoEMsamplings_eta", &el_topoEMsamplings_eta, &b_el_topoEMsamplings_eta);
   fChain->SetBranchAddress("el_topoEMsamplings_phi", &el_topoEMsamplings_phi, &b_el_topoEMsamplings_phi);
   fChain->SetBranchAddress("el_topoEMsamplings_uncalibrated_E", &el_topoEMsamplings_uncalibrated_E, &b_el_topoEMsamplings_uncalibrated_E);
   fChain->SetBranchAddress("el_topoEMsamplings_uncalibrated_Et", &el_topoEMsamplings_uncalibrated_Et, &b_el_topoEMsamplings_uncalibrated_Et);
   fChain->SetBranchAddress("el_topoEMsamplings_uncalibrated_eta", &el_topoEMsamplings_uncalibrated_eta, &b_el_topoEMsamplings_uncalibrated_eta);
   fChain->SetBranchAddress("el_topoEMsamplings_uncalibrated_phi", &el_topoEMsamplings_uncalibrated_phi, &b_el_topoEMsamplings_uncalibrated_phi);
   fChain->SetBranchAddress("el_topomatched", &el_topomatched, &b_el_topomatched);
   fChain->SetBranchAddress("el_topoEtcone20", &el_topoEtcone20, &b_el_topoEtcone20);
   fChain->SetBranchAddress("el_topoEtcone30", &el_topoEtcone30, &b_el_topoEtcone30);
   fChain->SetBranchAddress("el_topoEtcone40", &el_topoEtcone40, &b_el_topoEtcone40);
   fChain->SetBranchAddress("el_topoEtcone50", &el_topoEtcone50, &b_el_topoEtcone50);
   fChain->SetBranchAddress("el_topoEtcone60", &el_topoEtcone60, &b_el_topoEtcone60);
   fChain->SetBranchAddress("el_topoEMEtcone20", &el_topoEMEtcone20, &b_el_topoEMEtcone20);
   fChain->SetBranchAddress("el_topoEMEtcone30", &el_topoEMEtcone30, &b_el_topoEMEtcone30);
   fChain->SetBranchAddress("el_topoEMEtcone40", &el_topoEMEtcone40, &b_el_topoEMEtcone40);
   fChain->SetBranchAddress("el_topoEMEtcone50", &el_topoEMEtcone50, &b_el_topoEMEtcone50);
   fChain->SetBranchAddress("el_topoEMEtcone60", &el_topoEMEtcone60, &b_el_topoEMEtcone60);
   fChain->SetBranchAddress("el_trk_index", &el_trk_index, &b_el_trk_index);
   fChain->SetBranchAddress("trig_L1_TAV", &trig_L1_TAV, &b_trig_L1_TAV);
   fChain->SetBranchAddress("trig_L2_passedPhysics", &trig_L2_passedPhysics, &b_trig_L2_passedPhysics);
   fChain->SetBranchAddress("trig_EF_passedPhysics", &trig_EF_passedPhysics, &b_trig_EF_passedPhysics);
   fChain->SetBranchAddress("trig_L1_TBP", &trig_L1_TBP, &b_trig_L1_TBP);
   fChain->SetBranchAddress("trig_L1_TAP", &trig_L1_TAP, &b_trig_L1_TAP);
   fChain->SetBranchAddress("trig_L2_passedRaw", &trig_L2_passedRaw, &b_trig_L2_passedRaw);
   fChain->SetBranchAddress("trig_EF_passedRaw", &trig_EF_passedRaw, &b_trig_EF_passedRaw);
   fChain->SetBranchAddress("trig_L2_truncated", &trig_L2_truncated, &b_trig_L2_truncated);
   fChain->SetBranchAddress("trig_EF_truncated", &trig_EF_truncated, &b_trig_EF_truncated);
   fChain->SetBranchAddress("trig_L2_resurrected", &trig_L2_resurrected, &b_trig_L2_resurrected);
   fChain->SetBranchAddress("trig_EF_resurrected", &trig_EF_resurrected, &b_trig_EF_resurrected);
   fChain->SetBranchAddress("trig_L2_passedThrough", &trig_L2_passedThrough, &b_trig_L2_passedThrough);
   fChain->SetBranchAddress("trig_EF_passedThrough", &trig_EF_passedThrough, &b_trig_EF_passedThrough);
   fChain->SetBranchAddress("trig_L2_wasPrescaled", &trig_L2_wasPrescaled, &b_trig_L2_wasPrescaled);
   fChain->SetBranchAddress("trig_L2_wasResurrected", &trig_L2_wasResurrected, &b_trig_L2_wasResurrected);
   fChain->SetBranchAddress("trig_EF_wasPrescaled", &trig_EF_wasPrescaled, &b_trig_EF_wasPrescaled);
   fChain->SetBranchAddress("trig_EF_wasResurrected", &trig_EF_wasResurrected, &b_trig_EF_wasResurrected);
   fChain->SetBranchAddress("trig_L1_emtau_n", &trig_L1_emtau_n, &b_trig_L1_emtau_n);
   fChain->SetBranchAddress("trig_L1_emtau_eta", &trig_L1_emtau_eta, &b_trig_L1_emtau_eta);
   fChain->SetBranchAddress("trig_L1_emtau_phi", &trig_L1_emtau_phi, &b_trig_L1_emtau_phi);
   fChain->SetBranchAddress("trig_L1_emtau_thrNames", &trig_L1_emtau_thrNames, &b_trig_L1_emtau_thrNames);
   fChain->SetBranchAddress("trig_L1_emtau_thrValues", &trig_L1_emtau_thrValues, &b_trig_L1_emtau_thrValues);
   fChain->SetBranchAddress("trig_L1_emtau_core", &trig_L1_emtau_core, &b_trig_L1_emtau_core);
   fChain->SetBranchAddress("trig_L1_emtau_EMClus", &trig_L1_emtau_EMClus, &b_trig_L1_emtau_EMClus);
   fChain->SetBranchAddress("trig_L1_emtau_tauClus", &trig_L1_emtau_tauClus, &b_trig_L1_emtau_tauClus);
   fChain->SetBranchAddress("trig_L1_emtau_EMIsol", &trig_L1_emtau_EMIsol, &b_trig_L1_emtau_EMIsol);
   fChain->SetBranchAddress("trig_L1_emtau_hadIsol", &trig_L1_emtau_hadIsol, &b_trig_L1_emtau_hadIsol);
   fChain->SetBranchAddress("trig_L1_emtau_hadCore", &trig_L1_emtau_hadCore, &b_trig_L1_emtau_hadCore);
   fChain->SetBranchAddress("trig_L1_emtau_thrPattern", &trig_L1_emtau_thrPattern, &b_trig_L1_emtau_thrPattern);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM10", &trig_L1_emtau_L1_2EM10, &b_trig_L1_emtau_L1_2EM10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM14", &trig_L1_emtau_L1_2EM14, &b_trig_L1_emtau_L1_2EM14);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM3", &trig_L1_emtau_L1_2EM3, &b_trig_L1_emtau_L1_2EM3);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM3_EM10", &trig_L1_emtau_L1_2EM3_EM10, &b_trig_L1_emtau_L1_2EM3_EM10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM3_EM12", &trig_L1_emtau_L1_2EM3_EM12, &b_trig_L1_emtau_L1_2EM3_EM12);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM3_EM7", &trig_L1_emtau_L1_2EM3_EM7, &b_trig_L1_emtau_L1_2EM3_EM7);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM5", &trig_L1_emtau_L1_2EM5, &b_trig_L1_emtau_L1_2EM5);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM5_EM10", &trig_L1_emtau_L1_2EM5_EM10, &b_trig_L1_emtau_L1_2EM5_EM10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM5_EM12", &trig_L1_emtau_L1_2EM5_EM12, &b_trig_L1_emtau_L1_2EM5_EM12);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM5_MU6", &trig_L1_emtau_L1_2EM5_MU6, &b_trig_L1_emtau_L1_2EM5_MU6);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM5_NL", &trig_L1_emtau_L1_2EM5_NL, &b_trig_L1_emtau_L1_2EM5_NL);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM7", &trig_L1_emtau_L1_2EM7, &b_trig_L1_emtau_L1_2EM7);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM7_EM10", &trig_L1_emtau_L1_2EM7_EM10, &b_trig_L1_emtau_L1_2EM7_EM10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM10", &trig_L1_emtau_L1_EM10, &b_trig_L1_emtau_L1_EM10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM10_MU6", &trig_L1_emtau_L1_EM10_MU6, &b_trig_L1_emtau_L1_EM10_MU6);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM10_XE20", &trig_L1_emtau_L1_EM10_XE20, &b_trig_L1_emtau_L1_EM10_XE20);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM10_XE30", &trig_L1_emtau_L1_EM10_XE30, &b_trig_L1_emtau_L1_EM10_XE30);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM10_XS45", &trig_L1_emtau_L1_EM10_XS45, &b_trig_L1_emtau_L1_EM10_XS45);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM10_XS50", &trig_L1_emtau_L1_EM10_XS50, &b_trig_L1_emtau_L1_EM10_XS50);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM12", &trig_L1_emtau_L1_EM12, &b_trig_L1_emtau_L1_EM12);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM14", &trig_L1_emtau_L1_EM14, &b_trig_L1_emtau_L1_EM14);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM14_XE10", &trig_L1_emtau_L1_EM14_XE10, &b_trig_L1_emtau_L1_EM14_XE10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM14_XE20", &trig_L1_emtau_L1_EM14_XE20, &b_trig_L1_emtau_L1_EM14_XE20);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM16", &trig_L1_emtau_L1_EM16, &b_trig_L1_emtau_L1_EM16);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3", &trig_L1_emtau_L1_EM3, &b_trig_L1_emtau_L1_EM3);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM30", &trig_L1_emtau_L1_EM30, &b_trig_L1_emtau_L1_EM30);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_EMPTY", &trig_L1_emtau_L1_EM3_EMPTY, &b_trig_L1_emtau_L1_EM3_EMPTY);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_FIRSTEMPTY", &trig_L1_emtau_L1_EM3_FIRSTEMPTY, &b_trig_L1_emtau_L1_EM3_FIRSTEMPTY);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_MU0", &trig_L1_emtau_L1_EM3_MU0, &b_trig_L1_emtau_L1_EM3_MU0);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_MU6", &trig_L1_emtau_L1_EM3_MU6, &b_trig_L1_emtau_L1_EM3_MU6);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_UNPAIRED_ISO", &trig_L1_emtau_L1_EM3_UNPAIRED_ISO, &b_trig_L1_emtau_L1_EM3_UNPAIRED_ISO);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_UNPAIRED_NONISO", &trig_L1_emtau_L1_EM3_UNPAIRED_NONISO, &b_trig_L1_emtau_L1_EM3_UNPAIRED_NONISO);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM5", &trig_L1_emtau_L1_EM5, &b_trig_L1_emtau_L1_EM5);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM5_2MU6", &trig_L1_emtau_L1_EM5_2MU6, &b_trig_L1_emtau_L1_EM5_2MU6);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM5_EMPTY", &trig_L1_emtau_L1_EM5_EMPTY, &b_trig_L1_emtau_L1_EM5_EMPTY);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM5_MU10", &trig_L1_emtau_L1_EM5_MU10, &b_trig_L1_emtau_L1_EM5_MU10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM5_MU6", &trig_L1_emtau_L1_EM5_MU6, &b_trig_L1_emtau_L1_EM5_MU6);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM7", &trig_L1_emtau_L1_EM7, &b_trig_L1_emtau_L1_EM7);
   fChain->SetBranchAddress("trig_L2_emcl_n", &trig_L2_emcl_n, &b_trig_L2_emcl_n);
   fChain->SetBranchAddress("trig_L2_emcl_quality", &trig_L2_emcl_quality, &b_trig_L2_emcl_quality);
   fChain->SetBranchAddress("trig_L2_emcl_E", &trig_L2_emcl_E, &b_trig_L2_emcl_E);
   fChain->SetBranchAddress("trig_L2_emcl_Et", &trig_L2_emcl_Et, &b_trig_L2_emcl_Et);
   fChain->SetBranchAddress("trig_L2_emcl_eta", &trig_L2_emcl_eta, &b_trig_L2_emcl_eta);
   fChain->SetBranchAddress("trig_L2_emcl_phi", &trig_L2_emcl_phi, &b_trig_L2_emcl_phi);
   fChain->SetBranchAddress("trig_L2_emcl_E237", &trig_L2_emcl_E237, &b_trig_L2_emcl_E237);
   fChain->SetBranchAddress("trig_L2_emcl_E277", &trig_L2_emcl_E277, &b_trig_L2_emcl_E277);
   fChain->SetBranchAddress("trig_L2_emcl_fracs1", &trig_L2_emcl_fracs1, &b_trig_L2_emcl_fracs1);
   fChain->SetBranchAddress("trig_L2_emcl_weta2", &trig_L2_emcl_weta2, &b_trig_L2_emcl_weta2);
   fChain->SetBranchAddress("trig_L2_emcl_Ehad1", &trig_L2_emcl_Ehad1, &b_trig_L2_emcl_Ehad1);
   fChain->SetBranchAddress("trig_L2_emcl_eta1", &trig_L2_emcl_eta1, &b_trig_L2_emcl_eta1);
   fChain->SetBranchAddress("trig_L2_emcl_emaxs1", &trig_L2_emcl_emaxs1, &b_trig_L2_emcl_emaxs1);
   fChain->SetBranchAddress("trig_L2_emcl_e2tsts1", &trig_L2_emcl_e2tsts1, &b_trig_L2_emcl_e2tsts1);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_n", &trig_L2_trk_idscan_eGamma_n, &b_trig_L2_trk_idscan_eGamma_n);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_algorithmId", &trig_L2_trk_idscan_eGamma_algorithmId, &b_trig_L2_trk_idscan_eGamma_algorithmId);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_trackStatus", &trig_L2_trk_idscan_eGamma_trackStatus, &b_trig_L2_trk_idscan_eGamma_trackStatus);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_chi2Ndof", &trig_L2_trk_idscan_eGamma_chi2Ndof, &b_trig_L2_trk_idscan_eGamma_chi2Ndof);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_nStrawHits", &trig_L2_trk_idscan_eGamma_nStrawHits, &b_trig_L2_trk_idscan_eGamma_nStrawHits);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_nHighThrHits", &trig_L2_trk_idscan_eGamma_nHighThrHits, &b_trig_L2_trk_idscan_eGamma_nHighThrHits);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_nPixelSpacePoints", &trig_L2_trk_idscan_eGamma_nPixelSpacePoints, &b_trig_L2_trk_idscan_eGamma_nPixelSpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_nSCT_SpacePoints", &trig_L2_trk_idscan_eGamma_nSCT_SpacePoints, &b_trig_L2_trk_idscan_eGamma_nSCT_SpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_param_a0", &trig_L2_trk_idscan_eGamma_param_a0, &b_trig_L2_trk_idscan_eGamma_param_a0);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_param_z0", &trig_L2_trk_idscan_eGamma_param_z0, &b_trig_L2_trk_idscan_eGamma_param_z0);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_param_phi0", &trig_L2_trk_idscan_eGamma_param_phi0, &b_trig_L2_trk_idscan_eGamma_param_phi0);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_param_eta", &trig_L2_trk_idscan_eGamma_param_eta, &b_trig_L2_trk_idscan_eGamma_param_eta);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_param_pt", &trig_L2_trk_idscan_eGamma_param_pt, &b_trig_L2_trk_idscan_eGamma_param_pt);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_n", &trig_L2_trk_sitrack_eGamma_n, &b_trig_L2_trk_sitrack_eGamma_n);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_algorithmId", &trig_L2_trk_sitrack_eGamma_algorithmId, &b_trig_L2_trk_sitrack_eGamma_algorithmId);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_trackStatus", &trig_L2_trk_sitrack_eGamma_trackStatus, &b_trig_L2_trk_sitrack_eGamma_trackStatus);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_chi2Ndof", &trig_L2_trk_sitrack_eGamma_chi2Ndof, &b_trig_L2_trk_sitrack_eGamma_chi2Ndof);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_nStrawHits", &trig_L2_trk_sitrack_eGamma_nStrawHits, &b_trig_L2_trk_sitrack_eGamma_nStrawHits);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_nHighThrHits", &trig_L2_trk_sitrack_eGamma_nHighThrHits, &b_trig_L2_trk_sitrack_eGamma_nHighThrHits);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_nPixelSpacePoints", &trig_L2_trk_sitrack_eGamma_nPixelSpacePoints, &b_trig_L2_trk_sitrack_eGamma_nPixelSpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints", &trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints, &b_trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_param_a0", &trig_L2_trk_sitrack_eGamma_param_a0, &b_trig_L2_trk_sitrack_eGamma_param_a0);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_param_z0", &trig_L2_trk_sitrack_eGamma_param_z0, &b_trig_L2_trk_sitrack_eGamma_param_z0);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_param_phi0", &trig_L2_trk_sitrack_eGamma_param_phi0, &b_trig_L2_trk_sitrack_eGamma_param_phi0);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_param_eta", &trig_L2_trk_sitrack_eGamma_param_eta, &b_trig_L2_trk_sitrack_eGamma_param_eta);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_param_pt", &trig_L2_trk_sitrack_eGamma_param_pt, &b_trig_L2_trk_sitrack_eGamma_param_pt);
   fChain->SetBranchAddress("trig_L2_el_n", &trig_L2_el_n, &b_trig_L2_el_n);
   fChain->SetBranchAddress("trig_L2_el_E", &trig_L2_el_E, &b_trig_L2_el_E);
   fChain->SetBranchAddress("trig_L2_el_Et", &trig_L2_el_Et, &b_trig_L2_el_Et);
   fChain->SetBranchAddress("trig_L2_el_pt", &trig_L2_el_pt, &b_trig_L2_el_pt);
   fChain->SetBranchAddress("trig_L2_el_eta", &trig_L2_el_eta, &b_trig_L2_el_eta);
   fChain->SetBranchAddress("trig_L2_el_phi", &trig_L2_el_phi, &b_trig_L2_el_phi);
   fChain->SetBranchAddress("trig_L2_el_RoIWord", &trig_L2_el_RoIWord, &b_trig_L2_el_RoIWord);
   fChain->SetBranchAddress("trig_L2_el_zvertex", &trig_L2_el_zvertex, &b_trig_L2_el_zvertex);
   fChain->SetBranchAddress("trig_L2_el_charge", &trig_L2_el_charge, &b_trig_L2_el_charge);
   fChain->SetBranchAddress("trig_L2_el_trackAlgo", &trig_L2_el_trackAlgo, &b_trig_L2_el_trackAlgo);
   fChain->SetBranchAddress("trig_L2_el_TRTHighTHitsRatio", &trig_L2_el_TRTHighTHitsRatio, &b_trig_L2_el_TRTHighTHitsRatio);
   fChain->SetBranchAddress("trig_L2_el_deltaeta1", &trig_L2_el_deltaeta1, &b_trig_L2_el_deltaeta1);
   fChain->SetBranchAddress("trig_L2_el_deltaphi2", &trig_L2_el_deltaphi2, &b_trig_L2_el_deltaphi2);
   fChain->SetBranchAddress("trig_L2_el_EtOverPt", &trig_L2_el_EtOverPt, &b_trig_L2_el_EtOverPt);
   fChain->SetBranchAddress("trig_L2_el_reta", &trig_L2_el_reta, &b_trig_L2_el_reta);
   fChain->SetBranchAddress("trig_L2_el_Eratio", &trig_L2_el_Eratio, &b_trig_L2_el_Eratio);
   fChain->SetBranchAddress("trig_L2_el_Ethad1", &trig_L2_el_Ethad1, &b_trig_L2_el_Ethad1);
   fChain->SetBranchAddress("trig_L2_el_nTRTHits", &trig_L2_el_nTRTHits, &b_trig_L2_el_nTRTHits);
   fChain->SetBranchAddress("trig_L2_el_nTRTHighTHits", &trig_L2_el_nTRTHighTHits, &b_trig_L2_el_nTRTHighTHits);
   fChain->SetBranchAddress("trig_L2_el_trackIndx", &trig_L2_el_trackIndx, &b_trig_L2_el_trackIndx);
   fChain->SetBranchAddress("trig_L2_el_trkPt", &trig_L2_el_trkPt, &b_trig_L2_el_trkPt);
   fChain->SetBranchAddress("trig_L2_el_trkEtaAtCalo", &trig_L2_el_trkEtaAtCalo, &b_trig_L2_el_trkEtaAtCalo);
   fChain->SetBranchAddress("trig_L2_el_trkPhiAtCalo", &trig_L2_el_trkPhiAtCalo, &b_trig_L2_el_trkPhiAtCalo);
   fChain->SetBranchAddress("trig_L2_el_caloEta", &trig_L2_el_caloEta, &b_trig_L2_el_caloEta);
   fChain->SetBranchAddress("trig_L2_el_caloPhi", &trig_L2_el_caloPhi, &b_trig_L2_el_caloPhi);
   fChain->SetBranchAddress("trig_L2_el_F1", &trig_L2_el_F1, &b_trig_L2_el_F1);
   fChain->SetBranchAddress("trig_L2_ph_n", &trig_L2_ph_n, &b_trig_L2_ph_n);
   fChain->SetBranchAddress("trig_L2_ph_E", &trig_L2_ph_E, &b_trig_L2_ph_E);
   fChain->SetBranchAddress("trig_L2_ph_Et", &trig_L2_ph_Et, &b_trig_L2_ph_Et);
   fChain->SetBranchAddress("trig_L2_ph_pt", &trig_L2_ph_pt, &b_trig_L2_ph_pt);
   fChain->SetBranchAddress("trig_L2_ph_eta", &trig_L2_ph_eta, &b_trig_L2_ph_eta);
   fChain->SetBranchAddress("trig_L2_ph_phi", &trig_L2_ph_phi, &b_trig_L2_ph_phi);
   fChain->SetBranchAddress("trig_L2_ph_RoIWord", &trig_L2_ph_RoIWord, &b_trig_L2_ph_RoIWord);
   fChain->SetBranchAddress("trig_L2_ph_HadEt1", &trig_L2_ph_HadEt1, &b_trig_L2_ph_HadEt1);
   fChain->SetBranchAddress("trig_L2_ph_Eratio", &trig_L2_ph_Eratio, &b_trig_L2_ph_Eratio);
   fChain->SetBranchAddress("trig_L2_ph_Reta", &trig_L2_ph_Reta, &b_trig_L2_ph_Reta);
   fChain->SetBranchAddress("trig_L2_ph_dPhi", &trig_L2_ph_dPhi, &b_trig_L2_ph_dPhi);
   fChain->SetBranchAddress("trig_L2_ph_dEta", &trig_L2_ph_dEta, &b_trig_L2_ph_dEta);
   fChain->SetBranchAddress("trig_L2_ph_F1", &trig_L2_ph_F1, &b_trig_L2_ph_F1);
   fChain->SetBranchAddress("trig_EF_emcl_n", &trig_EF_emcl_n, &b_trig_EF_emcl_n);
   fChain->SetBranchAddress("trig_EF_emcl_pt", &trig_EF_emcl_pt, &b_trig_EF_emcl_pt);
   fChain->SetBranchAddress("trig_EF_emcl_eta", &trig_EF_emcl_eta, &b_trig_EF_emcl_eta);
   fChain->SetBranchAddress("trig_EF_emcl_phi", &trig_EF_emcl_phi, &b_trig_EF_emcl_phi);
   fChain->SetBranchAddress("trig_EF_emcl_E_em", &trig_EF_emcl_E_em, &b_trig_EF_emcl_E_em);
   fChain->SetBranchAddress("trig_EF_emcl_E_had", &trig_EF_emcl_E_had, &b_trig_EF_emcl_E_had);
   fChain->SetBranchAddress("trig_EF_emcl_firstEdens", &trig_EF_emcl_firstEdens, &b_trig_EF_emcl_firstEdens);
   fChain->SetBranchAddress("trig_EF_emcl_cellmaxfrac", &trig_EF_emcl_cellmaxfrac, &b_trig_EF_emcl_cellmaxfrac);
   fChain->SetBranchAddress("trig_EF_emcl_longitudinal", &trig_EF_emcl_longitudinal, &b_trig_EF_emcl_longitudinal);
   fChain->SetBranchAddress("trig_EF_emcl_secondlambda", &trig_EF_emcl_secondlambda, &b_trig_EF_emcl_secondlambda);
   fChain->SetBranchAddress("trig_EF_emcl_lateral", &trig_EF_emcl_lateral, &b_trig_EF_emcl_lateral);
   fChain->SetBranchAddress("trig_EF_emcl_secondR", &trig_EF_emcl_secondR, &b_trig_EF_emcl_secondR);
   fChain->SetBranchAddress("trig_EF_emcl_centerlambda", &trig_EF_emcl_centerlambda, &b_trig_EF_emcl_centerlambda);
   fChain->SetBranchAddress("trig_EF_emcl_deltaTheta", &trig_EF_emcl_deltaTheta, &b_trig_EF_emcl_deltaTheta);
   fChain->SetBranchAddress("trig_EF_emcl_deltaPhi", &trig_EF_emcl_deltaPhi, &b_trig_EF_emcl_deltaPhi);
   fChain->SetBranchAddress("trig_EF_emcl_centermag", &trig_EF_emcl_centermag, &b_trig_EF_emcl_centermag);
   fChain->SetBranchAddress("trig_EF_emcl_time", &trig_EF_emcl_time, &b_trig_EF_emcl_time);
   fChain->SetBranchAddress("trig_EF_emcl_slw_n", &trig_EF_emcl_slw_n, &b_trig_EF_emcl_slw_n);
   fChain->SetBranchAddress("trig_EF_emcl_slw_pt", &trig_EF_emcl_slw_pt, &b_trig_EF_emcl_slw_pt);
   fChain->SetBranchAddress("trig_EF_emcl_slw_eta", &trig_EF_emcl_slw_eta, &b_trig_EF_emcl_slw_eta);
   fChain->SetBranchAddress("trig_EF_emcl_slw_phi", &trig_EF_emcl_slw_phi, &b_trig_EF_emcl_slw_phi);
   fChain->SetBranchAddress("trig_EF_emcl_slw_E_em", &trig_EF_emcl_slw_E_em, &b_trig_EF_emcl_slw_E_em);
   fChain->SetBranchAddress("trig_EF_emcl_slw_E_had", &trig_EF_emcl_slw_E_had, &b_trig_EF_emcl_slw_E_had);
   fChain->SetBranchAddress("trig_EF_emcl_slw_firstEdens", &trig_EF_emcl_slw_firstEdens, &b_trig_EF_emcl_slw_firstEdens);
   fChain->SetBranchAddress("trig_EF_emcl_slw_cellmaxfrac", &trig_EF_emcl_slw_cellmaxfrac, &b_trig_EF_emcl_slw_cellmaxfrac);
   fChain->SetBranchAddress("trig_EF_emcl_slw_longitudinal", &trig_EF_emcl_slw_longitudinal, &b_trig_EF_emcl_slw_longitudinal);
   fChain->SetBranchAddress("trig_EF_emcl_slw_secondlambda", &trig_EF_emcl_slw_secondlambda, &b_trig_EF_emcl_slw_secondlambda);
   fChain->SetBranchAddress("trig_EF_emcl_slw_lateral", &trig_EF_emcl_slw_lateral, &b_trig_EF_emcl_slw_lateral);
   fChain->SetBranchAddress("trig_EF_emcl_slw_secondR", &trig_EF_emcl_slw_secondR, &b_trig_EF_emcl_slw_secondR);
   fChain->SetBranchAddress("trig_EF_emcl_slw_centerlambda", &trig_EF_emcl_slw_centerlambda, &b_trig_EF_emcl_slw_centerlambda);
   fChain->SetBranchAddress("trig_EF_emcl_slw_deltaTheta", &trig_EF_emcl_slw_deltaTheta, &b_trig_EF_emcl_slw_deltaTheta);
   fChain->SetBranchAddress("trig_EF_emcl_slw_deltaPhi", &trig_EF_emcl_slw_deltaPhi, &b_trig_EF_emcl_slw_deltaPhi);
   fChain->SetBranchAddress("trig_EF_emcl_slw_centermag", &trig_EF_emcl_slw_centermag, &b_trig_EF_emcl_slw_centermag);
   fChain->SetBranchAddress("trig_EF_emcl_slw_time", &trig_EF_emcl_slw_time, &b_trig_EF_emcl_slw_time);
   fChain->SetBranchAddress("trig_EF_el_n", &trig_EF_el_n, &b_trig_EF_el_n);
   fChain->SetBranchAddress("trig_EF_el_E", &trig_EF_el_E, &b_trig_EF_el_E);
   fChain->SetBranchAddress("trig_EF_el_Et", &trig_EF_el_Et, &b_trig_EF_el_Et);
   fChain->SetBranchAddress("trig_EF_el_pt", &trig_EF_el_pt, &b_trig_EF_el_pt);
   fChain->SetBranchAddress("trig_EF_el_m", &trig_EF_el_m, &b_trig_EF_el_m);
   fChain->SetBranchAddress("trig_EF_el_eta", &trig_EF_el_eta, &b_trig_EF_el_eta);
   fChain->SetBranchAddress("trig_EF_el_phi", &trig_EF_el_phi, &b_trig_EF_el_phi);
   fChain->SetBranchAddress("trig_EF_el_px", &trig_EF_el_px, &b_trig_EF_el_px);
   fChain->SetBranchAddress("trig_EF_el_py", &trig_EF_el_py, &b_trig_EF_el_py);
   fChain->SetBranchAddress("trig_EF_el_pz", &trig_EF_el_pz, &b_trig_EF_el_pz);
   fChain->SetBranchAddress("trig_EF_el_charge", &trig_EF_el_charge, &b_trig_EF_el_charge);
   fChain->SetBranchAddress("trig_EF_el_author", &trig_EF_el_author, &b_trig_EF_el_author);
   fChain->SetBranchAddress("trig_EF_el_isEM", &trig_EF_el_isEM, &b_trig_EF_el_isEM);
   fChain->SetBranchAddress("trig_EF_el_isEMLoose", &trig_EF_el_isEMLoose, &b_trig_EF_el_isEMLoose);
   fChain->SetBranchAddress("trig_EF_el_isEMMedium", &trig_EF_el_isEMMedium, &b_trig_EF_el_isEMMedium);
   fChain->SetBranchAddress("trig_EF_el_isEMTight", &trig_EF_el_isEMTight, &b_trig_EF_el_isEMTight);
   fChain->SetBranchAddress("trig_EF_el_loose", &trig_EF_el_loose, &b_trig_EF_el_loose);
   fChain->SetBranchAddress("trig_EF_el_looseIso", &trig_EF_el_looseIso, &b_trig_EF_el_looseIso);
   fChain->SetBranchAddress("trig_EF_el_medium", &trig_EF_el_medium, &b_trig_EF_el_medium);
   fChain->SetBranchAddress("trig_EF_el_mediumIso", &trig_EF_el_mediumIso, &b_trig_EF_el_mediumIso);
   fChain->SetBranchAddress("trig_EF_el_mediumWithoutTrack", &trig_EF_el_mediumWithoutTrack, &b_trig_EF_el_mediumWithoutTrack);
   fChain->SetBranchAddress("trig_EF_el_mediumIsoWithoutTrack", &trig_EF_el_mediumIsoWithoutTrack, &b_trig_EF_el_mediumIsoWithoutTrack);
   fChain->SetBranchAddress("trig_EF_el_tight", &trig_EF_el_tight, &b_trig_EF_el_tight);
   fChain->SetBranchAddress("trig_EF_el_tightIso", &trig_EF_el_tightIso, &b_trig_EF_el_tightIso);
   fChain->SetBranchAddress("trig_EF_el_tightWithoutTrack", &trig_EF_el_tightWithoutTrack, &b_trig_EF_el_tightWithoutTrack);
   fChain->SetBranchAddress("trig_EF_el_tightIsoWithoutTrack", &trig_EF_el_tightIsoWithoutTrack, &b_trig_EF_el_tightIsoWithoutTrack);
   fChain->SetBranchAddress("trig_EF_el_loosePP", &trig_EF_el_loosePP, &b_trig_EF_el_loosePP);
   fChain->SetBranchAddress("trig_EF_el_loosePPIso", &trig_EF_el_loosePPIso, &b_trig_EF_el_loosePPIso);
   fChain->SetBranchAddress("trig_EF_el_mediumPP", &trig_EF_el_mediumPP, &b_trig_EF_el_mediumPP);
   fChain->SetBranchAddress("trig_EF_el_mediumPPIso", &trig_EF_el_mediumPPIso, &b_trig_EF_el_mediumPPIso);
   fChain->SetBranchAddress("trig_EF_el_tightPP", &trig_EF_el_tightPP, &b_trig_EF_el_tightPP);
   fChain->SetBranchAddress("trig_EF_el_tightPPIso", &trig_EF_el_tightPPIso, &b_trig_EF_el_tightPPIso);
   fChain->SetBranchAddress("trig_EF_el_Ethad", &trig_EF_el_Ethad, &b_trig_EF_el_Ethad);
   fChain->SetBranchAddress("trig_EF_el_Ethad1", &trig_EF_el_Ethad1, &b_trig_EF_el_Ethad1);
   fChain->SetBranchAddress("trig_EF_el_f1", &trig_EF_el_f1, &b_trig_EF_el_f1);
   fChain->SetBranchAddress("trig_EF_el_f1core", &trig_EF_el_f1core, &b_trig_EF_el_f1core);
   fChain->SetBranchAddress("trig_EF_el_Emins1", &trig_EF_el_Emins1, &b_trig_EF_el_Emins1);
   fChain->SetBranchAddress("trig_EF_el_fside", &trig_EF_el_fside, &b_trig_EF_el_fside);
   fChain->SetBranchAddress("trig_EF_el_Emax2", &trig_EF_el_Emax2, &b_trig_EF_el_Emax2);
   fChain->SetBranchAddress("trig_EF_el_ws3", &trig_EF_el_ws3, &b_trig_EF_el_ws3);
   fChain->SetBranchAddress("trig_EF_el_wstot", &trig_EF_el_wstot, &b_trig_EF_el_wstot);
   fChain->SetBranchAddress("trig_EF_el_emaxs1", &trig_EF_el_emaxs1, &b_trig_EF_el_emaxs1);
   fChain->SetBranchAddress("trig_EF_el_deltaEs", &trig_EF_el_deltaEs, &b_trig_EF_el_deltaEs);
   fChain->SetBranchAddress("trig_EF_el_E233", &trig_EF_el_E233, &b_trig_EF_el_E233);
   fChain->SetBranchAddress("trig_EF_el_E237", &trig_EF_el_E237, &b_trig_EF_el_E237);
   fChain->SetBranchAddress("trig_EF_el_E277", &trig_EF_el_E277, &b_trig_EF_el_E277);
   fChain->SetBranchAddress("trig_EF_el_weta2", &trig_EF_el_weta2, &b_trig_EF_el_weta2);
   fChain->SetBranchAddress("trig_EF_el_f3", &trig_EF_el_f3, &b_trig_EF_el_f3);
   fChain->SetBranchAddress("trig_EF_el_f3core", &trig_EF_el_f3core, &b_trig_EF_el_f3core);
   fChain->SetBranchAddress("trig_EF_el_rphiallcalo", &trig_EF_el_rphiallcalo, &b_trig_EF_el_rphiallcalo);
   fChain->SetBranchAddress("trig_EF_el_Etcone45", &trig_EF_el_Etcone45, &b_trig_EF_el_Etcone45);
   fChain->SetBranchAddress("trig_EF_el_Etcone15", &trig_EF_el_Etcone15, &b_trig_EF_el_Etcone15);
   fChain->SetBranchAddress("trig_EF_el_Etcone20", &trig_EF_el_Etcone20, &b_trig_EF_el_Etcone20);
   fChain->SetBranchAddress("trig_EF_el_Etcone25", &trig_EF_el_Etcone25, &b_trig_EF_el_Etcone25);
   fChain->SetBranchAddress("trig_EF_el_Etcone30", &trig_EF_el_Etcone30, &b_trig_EF_el_Etcone30);
   fChain->SetBranchAddress("trig_EF_el_Etcone35", &trig_EF_el_Etcone35, &b_trig_EF_el_Etcone35);
   fChain->SetBranchAddress("trig_EF_el_Etcone40", &trig_EF_el_Etcone40, &b_trig_EF_el_Etcone40);
   fChain->SetBranchAddress("trig_EF_el_ptcone20", &trig_EF_el_ptcone20, &b_trig_EF_el_ptcone20);
   fChain->SetBranchAddress("trig_EF_el_ptcone30", &trig_EF_el_ptcone30, &b_trig_EF_el_ptcone30);
   fChain->SetBranchAddress("trig_EF_el_ptcone40", &trig_EF_el_ptcone40, &b_trig_EF_el_ptcone40);
   fChain->SetBranchAddress("trig_EF_el_pos7", &trig_EF_el_pos7, &b_trig_EF_el_pos7);
   fChain->SetBranchAddress("trig_EF_el_etacorrmag", &trig_EF_el_etacorrmag, &b_trig_EF_el_etacorrmag);
   fChain->SetBranchAddress("trig_EF_el_deltaeta1", &trig_EF_el_deltaeta1, &b_trig_EF_el_deltaeta1);
   fChain->SetBranchAddress("trig_EF_el_deltaeta2", &trig_EF_el_deltaeta2, &b_trig_EF_el_deltaeta2);
   fChain->SetBranchAddress("trig_EF_el_deltaphi2", &trig_EF_el_deltaphi2, &b_trig_EF_el_deltaphi2);
   fChain->SetBranchAddress("trig_EF_el_expectHitInBLayer", &trig_EF_el_expectHitInBLayer, &b_trig_EF_el_expectHitInBLayer);
   fChain->SetBranchAddress("trig_EF_el_trackd0_physics", &trig_EF_el_trackd0_physics, &b_trig_EF_el_trackd0_physics);
   fChain->SetBranchAddress("trig_EF_el_reta", &trig_EF_el_reta, &b_trig_EF_el_reta);
   fChain->SetBranchAddress("trig_EF_el_rphi", &trig_EF_el_rphi, &b_trig_EF_el_rphi);
   fChain->SetBranchAddress("trig_EF_el_cl_E", &trig_EF_el_cl_E, &b_trig_EF_el_cl_E);
   fChain->SetBranchAddress("trig_EF_el_cl_pt", &trig_EF_el_cl_pt, &b_trig_EF_el_cl_pt);
   fChain->SetBranchAddress("trig_EF_el_cl_eta", &trig_EF_el_cl_eta, &b_trig_EF_el_cl_eta);
   fChain->SetBranchAddress("trig_EF_el_cl_phi", &trig_EF_el_cl_phi, &b_trig_EF_el_cl_phi);
   fChain->SetBranchAddress("trig_EF_el_cl_etas2", &trig_EF_el_cl_etas2, &b_trig_EF_el_cl_etas2);
   fChain->SetBranchAddress("trig_EF_el_trackd0", &trig_EF_el_trackd0, &b_trig_EF_el_trackd0);
   fChain->SetBranchAddress("trig_EF_el_trackz0", &trig_EF_el_trackz0, &b_trig_EF_el_trackz0);
   fChain->SetBranchAddress("trig_EF_el_trackphi", &trig_EF_el_trackphi, &b_trig_EF_el_trackphi);
   fChain->SetBranchAddress("trig_EF_el_tracktheta", &trig_EF_el_tracktheta, &b_trig_EF_el_tracktheta);
   fChain->SetBranchAddress("trig_EF_el_trackqoverp", &trig_EF_el_trackqoverp, &b_trig_EF_el_trackqoverp);
   fChain->SetBranchAddress("trig_EF_el_trackpt", &trig_EF_el_trackpt, &b_trig_EF_el_trackpt);
   fChain->SetBranchAddress("trig_EF_el_tracketa", &trig_EF_el_tracketa, &b_trig_EF_el_tracketa);
   fChain->SetBranchAddress("trig_EF_el_nBLHits", &trig_EF_el_nBLHits, &b_trig_EF_el_nBLHits);
   fChain->SetBranchAddress("trig_EF_el_nPixHits", &trig_EF_el_nPixHits, &b_trig_EF_el_nPixHits);
   fChain->SetBranchAddress("trig_EF_el_nSCTHits", &trig_EF_el_nSCTHits, &b_trig_EF_el_nSCTHits);
   fChain->SetBranchAddress("trig_EF_el_nTRTHits", &trig_EF_el_nTRTHits, &b_trig_EF_el_nTRTHits);
   fChain->SetBranchAddress("trig_EF_el_nTRTHighTHits", &trig_EF_el_nTRTHighTHits, &b_trig_EF_el_nTRTHighTHits);
   fChain->SetBranchAddress("trig_EF_el_nPixHoles", &trig_EF_el_nPixHoles, &b_trig_EF_el_nPixHoles);
   fChain->SetBranchAddress("trig_EF_el_nSCTHoles", &trig_EF_el_nSCTHoles, &b_trig_EF_el_nSCTHoles);
   fChain->SetBranchAddress("trig_EF_el_nTRTHoles", &trig_EF_el_nTRTHoles, &b_trig_EF_el_nTRTHoles);
   fChain->SetBranchAddress("trig_EF_el_nBLSharedHits", &trig_EF_el_nBLSharedHits, &b_trig_EF_el_nBLSharedHits);
   fChain->SetBranchAddress("trig_EF_el_nPixSharedHits", &trig_EF_el_nPixSharedHits, &b_trig_EF_el_nPixSharedHits);
   fChain->SetBranchAddress("trig_EF_el_nSCTSharedHits", &trig_EF_el_nSCTSharedHits, &b_trig_EF_el_nSCTSharedHits);
   fChain->SetBranchAddress("trig_EF_el_nBLayerOutliers", &trig_EF_el_nBLayerOutliers, &b_trig_EF_el_nBLayerOutliers);
   fChain->SetBranchAddress("trig_EF_el_nPixelOutliers", &trig_EF_el_nPixelOutliers, &b_trig_EF_el_nPixelOutliers);
   fChain->SetBranchAddress("trig_EF_el_nSCTOutliers", &trig_EF_el_nSCTOutliers, &b_trig_EF_el_nSCTOutliers);
   fChain->SetBranchAddress("trig_EF_el_nTRTOutliers", &trig_EF_el_nTRTOutliers, &b_trig_EF_el_nTRTOutliers);
   fChain->SetBranchAddress("trig_EF_el_nTRTHighTOutliers", &trig_EF_el_nTRTHighTOutliers, &b_trig_EF_el_nTRTHighTOutliers);
   fChain->SetBranchAddress("trig_EF_el_expectBLayerHit", &trig_EF_el_expectBLayerHit, &b_trig_EF_el_expectBLayerHit);
   fChain->SetBranchAddress("trig_EF_el_nSiHits", &trig_EF_el_nSiHits, &b_trig_EF_el_nSiHits);
   fChain->SetBranchAddress("trig_EF_el_TRTHighTHitsRatio", &trig_EF_el_TRTHighTHitsRatio, &b_trig_EF_el_TRTHighTHitsRatio);
   fChain->SetBranchAddress("trig_EF_el_TRTHighTOutliersRatio", &trig_EF_el_TRTHighTOutliersRatio, &b_trig_EF_el_TRTHighTOutliersRatio);
   fChain->SetBranchAddress("trig_EF_el_pixeldEdx", &trig_EF_el_pixeldEdx, &b_trig_EF_el_pixeldEdx);
   fChain->SetBranchAddress("trig_EF_el_nGoodHitsPixeldEdx", &trig_EF_el_nGoodHitsPixeldEdx, &b_trig_EF_el_nGoodHitsPixeldEdx);
   fChain->SetBranchAddress("trig_EF_el_massPixeldEdx", &trig_EF_el_massPixeldEdx, &b_trig_EF_el_massPixeldEdx);
   fChain->SetBranchAddress("trig_EF_el_likelihoodsPixeldEdx", &trig_EF_el_likelihoodsPixeldEdx, &b_trig_EF_el_likelihoodsPixeldEdx);
   fChain->SetBranchAddress("trig_EF_el_eProbabilityComb", &trig_EF_el_eProbabilityComb, &b_trig_EF_el_eProbabilityComb);
   fChain->SetBranchAddress("trig_EF_el_eProbabilityHT", &trig_EF_el_eProbabilityHT, &b_trig_EF_el_eProbabilityHT);
   fChain->SetBranchAddress("trig_EF_el_eProbabilityToT", &trig_EF_el_eProbabilityToT, &b_trig_EF_el_eProbabilityToT);
   fChain->SetBranchAddress("trig_EF_el_eProbabilityBrem", &trig_EF_el_eProbabilityBrem, &b_trig_EF_el_eProbabilityBrem);
   fChain->SetBranchAddress("trig_EF_el_vertweight", &trig_EF_el_vertweight, &b_trig_EF_el_vertweight);
   fChain->SetBranchAddress("trig_EF_el_hastrack", &trig_EF_el_hastrack, &b_trig_EF_el_hastrack);
   fChain->SetBranchAddress("trig_EF_ph_n", &trig_EF_ph_n, &b_trig_EF_ph_n);
   fChain->SetBranchAddress("trig_EF_ph_E", &trig_EF_ph_E, &b_trig_EF_ph_E);
   fChain->SetBranchAddress("trig_EF_ph_Et", &trig_EF_ph_Et, &b_trig_EF_ph_Et);
   fChain->SetBranchAddress("trig_EF_ph_pt", &trig_EF_ph_pt, &b_trig_EF_ph_pt);
   fChain->SetBranchAddress("trig_EF_ph_m", &trig_EF_ph_m, &b_trig_EF_ph_m);
   fChain->SetBranchAddress("trig_EF_ph_eta", &trig_EF_ph_eta, &b_trig_EF_ph_eta);
   fChain->SetBranchAddress("trig_EF_ph_phi", &trig_EF_ph_phi, &b_trig_EF_ph_phi);
   fChain->SetBranchAddress("trig_EF_ph_px", &trig_EF_ph_px, &b_trig_EF_ph_px);
   fChain->SetBranchAddress("trig_EF_ph_py", &trig_EF_ph_py, &b_trig_EF_ph_py);
   fChain->SetBranchAddress("trig_EF_ph_pz", &trig_EF_ph_pz, &b_trig_EF_ph_pz);
   fChain->SetBranchAddress("trig_EF_ph_author", &trig_EF_ph_author, &b_trig_EF_ph_author);
   fChain->SetBranchAddress("trig_EF_ph_isRecovered", &trig_EF_ph_isRecovered, &b_trig_EF_ph_isRecovered);
   fChain->SetBranchAddress("trig_EF_ph_isEM", &trig_EF_ph_isEM, &b_trig_EF_ph_isEM);
   fChain->SetBranchAddress("trig_EF_ph_isEMLoose", &trig_EF_ph_isEMLoose, &b_trig_EF_ph_isEMLoose);
   fChain->SetBranchAddress("trig_EF_ph_isEMMedium", &trig_EF_ph_isEMMedium, &b_trig_EF_ph_isEMMedium);
   fChain->SetBranchAddress("trig_EF_ph_isEMTight", &trig_EF_ph_isEMTight, &b_trig_EF_ph_isEMTight);
   fChain->SetBranchAddress("trig_EF_ph_convFlag", &trig_EF_ph_convFlag, &b_trig_EF_ph_convFlag);
   fChain->SetBranchAddress("trig_EF_ph_isConv", &trig_EF_ph_isConv, &b_trig_EF_ph_isConv);
   fChain->SetBranchAddress("trig_EF_ph_nConv", &trig_EF_ph_nConv, &b_trig_EF_ph_nConv);
   fChain->SetBranchAddress("trig_EF_ph_nSingleTrackConv", &trig_EF_ph_nSingleTrackConv, &b_trig_EF_ph_nSingleTrackConv);
   fChain->SetBranchAddress("trig_EF_ph_nDoubleTrackConv", &trig_EF_ph_nDoubleTrackConv, &b_trig_EF_ph_nDoubleTrackConv);
   fChain->SetBranchAddress("trig_EF_ph_loose", &trig_EF_ph_loose, &b_trig_EF_ph_loose);
   fChain->SetBranchAddress("trig_EF_ph_looseIso", &trig_EF_ph_looseIso, &b_trig_EF_ph_looseIso);
   fChain->SetBranchAddress("trig_EF_ph_tight", &trig_EF_ph_tight, &b_trig_EF_ph_tight);
   fChain->SetBranchAddress("trig_EF_ph_tightIso", &trig_EF_ph_tightIso, &b_trig_EF_ph_tightIso);
   fChain->SetBranchAddress("trig_EF_ph_looseAR", &trig_EF_ph_looseAR, &b_trig_EF_ph_looseAR);
   fChain->SetBranchAddress("trig_EF_ph_looseARIso", &trig_EF_ph_looseARIso, &b_trig_EF_ph_looseARIso);
   fChain->SetBranchAddress("trig_EF_ph_tightAR", &trig_EF_ph_tightAR, &b_trig_EF_ph_tightAR);
   fChain->SetBranchAddress("trig_EF_ph_tightARIso", &trig_EF_ph_tightARIso, &b_trig_EF_ph_tightARIso);
   fChain->SetBranchAddress("trig_EF_ph_Ethad", &trig_EF_ph_Ethad, &b_trig_EF_ph_Ethad);
   fChain->SetBranchAddress("trig_EF_ph_Ethad1", &trig_EF_ph_Ethad1, &b_trig_EF_ph_Ethad1);
   fChain->SetBranchAddress("trig_EF_ph_E033", &trig_EF_ph_E033, &b_trig_EF_ph_E033);
   fChain->SetBranchAddress("trig_EF_ph_f1", &trig_EF_ph_f1, &b_trig_EF_ph_f1);
   fChain->SetBranchAddress("trig_EF_ph_f1core", &trig_EF_ph_f1core, &b_trig_EF_ph_f1core);
   fChain->SetBranchAddress("trig_EF_ph_Emins1", &trig_EF_ph_Emins1, &b_trig_EF_ph_Emins1);
   fChain->SetBranchAddress("trig_EF_ph_fside", &trig_EF_ph_fside, &b_trig_EF_ph_fside);
   fChain->SetBranchAddress("trig_EF_ph_Emax2", &trig_EF_ph_Emax2, &b_trig_EF_ph_Emax2);
   fChain->SetBranchAddress("trig_EF_ph_ws3", &trig_EF_ph_ws3, &b_trig_EF_ph_ws3);
   fChain->SetBranchAddress("trig_EF_ph_wstot", &trig_EF_ph_wstot, &b_trig_EF_ph_wstot);
   fChain->SetBranchAddress("trig_EF_ph_E132", &trig_EF_ph_E132, &b_trig_EF_ph_E132);
   fChain->SetBranchAddress("trig_EF_ph_E1152", &trig_EF_ph_E1152, &b_trig_EF_ph_E1152);
   fChain->SetBranchAddress("trig_EF_ph_emaxs1", &trig_EF_ph_emaxs1, &b_trig_EF_ph_emaxs1);
   fChain->SetBranchAddress("trig_EF_ph_deltaEs", &trig_EF_ph_deltaEs, &b_trig_EF_ph_deltaEs);
   fChain->SetBranchAddress("trig_EF_ph_E233", &trig_EF_ph_E233, &b_trig_EF_ph_E233);
   fChain->SetBranchAddress("trig_EF_ph_E237", &trig_EF_ph_E237, &b_trig_EF_ph_E237);
   fChain->SetBranchAddress("trig_EF_ph_E277", &trig_EF_ph_E277, &b_trig_EF_ph_E277);
   fChain->SetBranchAddress("trig_EF_ph_weta2", &trig_EF_ph_weta2, &b_trig_EF_ph_weta2);
   fChain->SetBranchAddress("trig_EF_ph_f3", &trig_EF_ph_f3, &b_trig_EF_ph_f3);
   fChain->SetBranchAddress("trig_EF_ph_f3core", &trig_EF_ph_f3core, &b_trig_EF_ph_f3core);
   fChain->SetBranchAddress("trig_EF_ph_rphiallcalo", &trig_EF_ph_rphiallcalo, &b_trig_EF_ph_rphiallcalo);
   fChain->SetBranchAddress("trig_EF_ph_Etcone45", &trig_EF_ph_Etcone45, &b_trig_EF_ph_Etcone45);
   fChain->SetBranchAddress("trig_EF_ph_Etcone15", &trig_EF_ph_Etcone15, &b_trig_EF_ph_Etcone15);
   fChain->SetBranchAddress("trig_EF_ph_Etcone20", &trig_EF_ph_Etcone20, &b_trig_EF_ph_Etcone20);
   fChain->SetBranchAddress("trig_EF_ph_Etcone25", &trig_EF_ph_Etcone25, &b_trig_EF_ph_Etcone25);
   fChain->SetBranchAddress("trig_EF_ph_Etcone30", &trig_EF_ph_Etcone30, &b_trig_EF_ph_Etcone30);
   fChain->SetBranchAddress("trig_EF_ph_Etcone35", &trig_EF_ph_Etcone35, &b_trig_EF_ph_Etcone35);
   fChain->SetBranchAddress("trig_EF_ph_Etcone40", &trig_EF_ph_Etcone40, &b_trig_EF_ph_Etcone40);
   fChain->SetBranchAddress("trig_EF_ph_ptcone20", &trig_EF_ph_ptcone20, &b_trig_EF_ph_ptcone20);
   fChain->SetBranchAddress("trig_EF_ph_ptcone30", &trig_EF_ph_ptcone30, &b_trig_EF_ph_ptcone30);
   fChain->SetBranchAddress("trig_EF_ph_ptcone40", &trig_EF_ph_ptcone40, &b_trig_EF_ph_ptcone40);
   fChain->SetBranchAddress("trig_EF_ph_convanglematch", &trig_EF_ph_convanglematch, &b_trig_EF_ph_convanglematch);
   fChain->SetBranchAddress("trig_EF_ph_convtrackmatch", &trig_EF_ph_convtrackmatch, &b_trig_EF_ph_convtrackmatch);
   fChain->SetBranchAddress("trig_EF_ph_hasconv", &trig_EF_ph_hasconv, &b_trig_EF_ph_hasconv);
   fChain->SetBranchAddress("trig_EF_ph_convvtxx", &trig_EF_ph_convvtxx, &b_trig_EF_ph_convvtxx);
   fChain->SetBranchAddress("trig_EF_ph_convvtxy", &trig_EF_ph_convvtxy, &b_trig_EF_ph_convvtxy);
   fChain->SetBranchAddress("trig_EF_ph_convvtxz", &trig_EF_ph_convvtxz, &b_trig_EF_ph_convvtxz);
   fChain->SetBranchAddress("trig_EF_ph_Rconv", &trig_EF_ph_Rconv, &b_trig_EF_ph_Rconv);
   fChain->SetBranchAddress("trig_EF_ph_zconv", &trig_EF_ph_zconv, &b_trig_EF_ph_zconv);
   fChain->SetBranchAddress("trig_EF_ph_convvtxchi2", &trig_EF_ph_convvtxchi2, &b_trig_EF_ph_convvtxchi2);
   fChain->SetBranchAddress("trig_EF_ph_pt1conv", &trig_EF_ph_pt1conv, &b_trig_EF_ph_pt1conv);
   fChain->SetBranchAddress("trig_EF_ph_convtrk1nBLHits", &trig_EF_ph_convtrk1nBLHits, &b_trig_EF_ph_convtrk1nBLHits);
   fChain->SetBranchAddress("trig_EF_ph_convtrk1nPixHits", &trig_EF_ph_convtrk1nPixHits, &b_trig_EF_ph_convtrk1nPixHits);
   fChain->SetBranchAddress("trig_EF_ph_convtrk1nSCTHits", &trig_EF_ph_convtrk1nSCTHits, &b_trig_EF_ph_convtrk1nSCTHits);
   fChain->SetBranchAddress("trig_EF_ph_convtrk1nTRTHits", &trig_EF_ph_convtrk1nTRTHits, &b_trig_EF_ph_convtrk1nTRTHits);
   fChain->SetBranchAddress("trig_EF_ph_pt2conv", &trig_EF_ph_pt2conv, &b_trig_EF_ph_pt2conv);
   fChain->SetBranchAddress("trig_EF_ph_convtrk2nBLHits", &trig_EF_ph_convtrk2nBLHits, &b_trig_EF_ph_convtrk2nBLHits);
   fChain->SetBranchAddress("trig_EF_ph_convtrk2nPixHits", &trig_EF_ph_convtrk2nPixHits, &b_trig_EF_ph_convtrk2nPixHits);
   fChain->SetBranchAddress("trig_EF_ph_convtrk2nSCTHits", &trig_EF_ph_convtrk2nSCTHits, &b_trig_EF_ph_convtrk2nSCTHits);
   fChain->SetBranchAddress("trig_EF_ph_convtrk2nTRTHits", &trig_EF_ph_convtrk2nTRTHits, &b_trig_EF_ph_convtrk2nTRTHits);
   fChain->SetBranchAddress("trig_EF_ph_ptconv", &trig_EF_ph_ptconv, &b_trig_EF_ph_ptconv);
   fChain->SetBranchAddress("trig_EF_ph_pzconv", &trig_EF_ph_pzconv, &b_trig_EF_ph_pzconv);
   fChain->SetBranchAddress("trig_EF_ph_reta", &trig_EF_ph_reta, &b_trig_EF_ph_reta);
   fChain->SetBranchAddress("trig_EF_ph_rphi", &trig_EF_ph_rphi, &b_trig_EF_ph_rphi);
   fChain->SetBranchAddress("trig_EF_ph_cl_E", &trig_EF_ph_cl_E, &b_trig_EF_ph_cl_E);
   fChain->SetBranchAddress("trig_EF_ph_cl_pt", &trig_EF_ph_cl_pt, &b_trig_EF_ph_cl_pt);
   fChain->SetBranchAddress("trig_EF_ph_cl_eta", &trig_EF_ph_cl_eta, &b_trig_EF_ph_cl_eta);
   fChain->SetBranchAddress("trig_EF_ph_cl_phi", &trig_EF_ph_cl_phi, &b_trig_EF_ph_cl_phi);
   fChain->SetBranchAddress("trig_EF_ph_cl_etas2", &trig_EF_ph_cl_etas2, &b_trig_EF_ph_cl_etas2);
   fChain->SetBranchAddress("trig_Nav_n", &trig_Nav_n, &b_trig_Nav_n);
   fChain->SetBranchAddress("trig_Nav_chain_ChainId", &trig_Nav_chain_ChainId, &b_trig_Nav_chain_ChainId);
   fChain->SetBranchAddress("trig_Nav_chain_RoIType", &trig_Nav_chain_RoIType, &b_trig_Nav_chain_RoIType);
   fChain->SetBranchAddress("trig_Nav_chain_RoIIndex", &trig_Nav_chain_RoIIndex, &b_trig_Nav_chain_RoIIndex);
   fChain->SetBranchAddress("trig_RoI_L2_e_n", &trig_RoI_L2_e_n, &b_trig_RoI_L2_e_n);
   fChain->SetBranchAddress("trig_RoI_L2_e_type", &trig_RoI_L2_e_type, &b_trig_RoI_L2_e_type);
   fChain->SetBranchAddress("trig_RoI_L2_e_active", &trig_RoI_L2_e_active, &b_trig_RoI_L2_e_active);
   fChain->SetBranchAddress("trig_RoI_L2_e_lastStep", &trig_RoI_L2_e_lastStep, &b_trig_RoI_L2_e_lastStep);
   fChain->SetBranchAddress("trig_RoI_L2_e_TENumber", &trig_RoI_L2_e_TENumber, &b_trig_RoI_L2_e_TENumber);
   fChain->SetBranchAddress("trig_RoI_L2_e_roiNumber", &trig_RoI_L2_e_roiNumber, &b_trig_RoI_L2_e_roiNumber);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma", &trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma, &b_trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus", &trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus, &b_trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigEMCluster", &trig_RoI_L2_e_TrigEMCluster, &b_trig_RoI_L2_e_TrigEMCluster);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigEMClusterStatus", &trig_RoI_L2_e_TrigEMClusterStatus, &b_trig_RoI_L2_e_TrigEMClusterStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_EmTau_ROI", &trig_RoI_L2_e_EmTau_ROI, &b_trig_RoI_L2_e_EmTau_ROI);
   fChain->SetBranchAddress("trig_RoI_L2_e_EmTau_ROIStatus", &trig_RoI_L2_e_EmTau_ROIStatus, &b_trig_RoI_L2_e_EmTau_ROIStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma", &trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma, &b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus", &trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus, &b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma", &trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma, &b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus", &trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus, &b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigElectronContainer", &trig_RoI_L2_e_TrigElectronContainer, &b_trig_RoI_L2_e_TrigElectronContainer);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigElectronContainerStatus", &trig_RoI_L2_e_TrigElectronContainerStatus, &b_trig_RoI_L2_e_TrigElectronContainerStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigPhotonContainer", &trig_RoI_L2_e_TrigPhotonContainer, &b_trig_RoI_L2_e_TrigPhotonContainer);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigPhotonContainerStatus", &trig_RoI_L2_e_TrigPhotonContainerStatus, &b_trig_RoI_L2_e_TrigPhotonContainerStatus);
   fChain->SetBranchAddress("trig_RoI_EF_e_n", &trig_RoI_EF_e_n, &b_trig_RoI_EF_e_n);
   fChain->SetBranchAddress("trig_RoI_EF_e_type", &trig_RoI_EF_e_type, &b_trig_RoI_EF_e_type);
   fChain->SetBranchAddress("trig_RoI_EF_e_active", &trig_RoI_EF_e_active, &b_trig_RoI_EF_e_active);
   fChain->SetBranchAddress("trig_RoI_EF_e_lastStep", &trig_RoI_EF_e_lastStep, &b_trig_RoI_EF_e_lastStep);
   fChain->SetBranchAddress("trig_RoI_EF_e_TENumber", &trig_RoI_EF_e_TENumber, &b_trig_RoI_EF_e_TENumber);
   fChain->SetBranchAddress("trig_RoI_EF_e_roiNumber", &trig_RoI_EF_e_roiNumber, &b_trig_RoI_EF_e_roiNumber);
   fChain->SetBranchAddress("trig_RoI_EF_e_EmTau_ROI", &trig_RoI_EF_e_EmTau_ROI, &b_trig_RoI_EF_e_EmTau_ROI);
   fChain->SetBranchAddress("trig_RoI_EF_e_EmTau_ROIStatus", &trig_RoI_EF_e_EmTau_ROIStatus, &b_trig_RoI_EF_e_EmTau_ROIStatus);
   fChain->SetBranchAddress("trig_RoI_EF_e_Rec::TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID", &trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID, &b_trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID);
   fChain->SetBranchAddress("trig_RoI_EF_e_Rec::TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus", &trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus, &b_trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_Electrons", &trig_RoI_EF_e_egammaContainer_egamma_Electrons, &b_trig_RoI_EF_e_egammaContainer_egamma_Electrons);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus", &trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus, &b_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_Photons", &trig_RoI_EF_e_egammaContainer_egamma_Photons, &b_trig_RoI_EF_e_egammaContainer_egamma_Photons);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus", &trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus, &b_trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus);
   fChain->SetBranchAddress("trig_DB_SMK", &trig_DB_SMK, &b_trig_DB_SMK);
   fChain->SetBranchAddress("trig_DB_L1PSK", &trig_DB_L1PSK, &b_trig_DB_L1PSK);
   fChain->SetBranchAddress("trig_DB_HLTPSK", &trig_DB_HLTPSK, &b_trig_DB_HLTPSK);
   fChain->SetBranchAddress("PV_n", &PV_n, &b_PV_n);
   fChain->SetBranchAddress("PV_x", &PV_x, &b_PV_x);
   fChain->SetBranchAddress("PV_y", &PV_y, &b_PV_y);
   fChain->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
   fChain->SetBranchAddress("PV_type", &PV_type, &b_PV_type);
   fChain->SetBranchAddress("PV_px", &PV_px, &b_PV_px);
   fChain->SetBranchAddress("PV_py", &PV_py, &b_PV_py);
   fChain->SetBranchAddress("PV_pz", &PV_pz, &b_PV_pz);
   fChain->SetBranchAddress("PV_E", &PV_E, &b_PV_E);
   fChain->SetBranchAddress("PV_m", &PV_m, &b_PV_m);
   fChain->SetBranchAddress("PV_nTracks", &PV_nTracks, &b_PV_nTracks);
   fChain->SetBranchAddress("PV_sumPt", &PV_sumPt, &b_PV_sumPt);
   fChain->SetBranchAddress("PV_trk_weight", &PV_trk_weight, &b_PV_trk_weight);
   fChain->SetBranchAddress("PV_trk_n", &PV_trk_n, &b_PV_trk_n);
   fChain->SetBranchAddress("PV_trk_index", &PV_trk_index, &b_PV_trk_index);
   fChain->SetBranchAddress("PhotonPV_n", &PhotonPV_n, &b_PhotonPV_n);
   fChain->SetBranchAddress("PhotonPV_px", &PhotonPV_px, &b_PhotonPV_px);
   fChain->SetBranchAddress("PhotonPV_py", &PhotonPV_py, &b_PhotonPV_py);
   fChain->SetBranchAddress("PhotonPV_pz", &PhotonPV_pz, &b_PhotonPV_pz);
   fChain->SetBranchAddress("PhotonPV_E", &PhotonPV_E, &b_PhotonPV_E);
   fChain->SetBranchAddress("PhotonPV_m", &PhotonPV_m, &b_PhotonPV_m);
   fChain->SetBranchAddress("PhotonPV_nTracks", &PhotonPV_nTracks, &b_PhotonPV_nTracks);
   fChain->SetBranchAddress("PhotonPV_sumPt", &PhotonPV_sumPt, &b_PhotonPV_sumPt);
   fChain->SetBranchAddress("PhotonPV_sumPt2", &PhotonPV_sumPt2, &b_PhotonPV_sumPt2);
   fChain->SetBranchAddress("PhotonPV_type", &PhotonPV_type, &b_PhotonPV_type);
   fChain->SetBranchAddress("PhotonPV_missPt", &PhotonPV_missPt, &b_PhotonPV_missPt);
   fChain->SetBranchAddress("PhotonPV_meanPt", &PhotonPV_meanPt, &b_PhotonPV_meanPt);
   fChain->SetBranchAddress("PhotonPV_nTracks_05GeV", &PhotonPV_nTracks_05GeV, &b_PhotonPV_nTracks_05GeV);
   fChain->SetBranchAddress("PhotonPV_nTracks_07GeV", &PhotonPV_nTracks_07GeV, &b_PhotonPV_nTracks_07GeV);
   fChain->SetBranchAddress("PhotonPV_nTracks_1GeV", &PhotonPV_nTracks_1GeV, &b_PhotonPV_nTracks_1GeV);
   fChain->SetBranchAddress("PhotonPV_nTracks_2GeV", &PhotonPV_nTracks_2GeV, &b_PhotonPV_nTracks_2GeV);
   fChain->SetBranchAddress("mcevt_n", &mcevt_n, &b_mcevt_n);
   fChain->SetBranchAddress("mcevt_signal_process_id", &mcevt_signal_process_id, &b_mcevt_signal_process_id);
   fChain->SetBranchAddress("mcevt_event_number", &mcevt_event_number, &b_mcevt_event_number);
   fChain->SetBranchAddress("mcevt_event_scale", &mcevt_event_scale, &b_mcevt_event_scale);
   fChain->SetBranchAddress("mcevt_alphaQCD", &mcevt_alphaQCD, &b_mcevt_alphaQCD);
   fChain->SetBranchAddress("mcevt_alphaQED", &mcevt_alphaQED, &b_mcevt_alphaQED);
   fChain->SetBranchAddress("mcevt_pdf_id1", &mcevt_pdf_id1, &b_mcevt_pdf_id1);
   fChain->SetBranchAddress("mcevt_pdf_id2", &mcevt_pdf_id2, &b_mcevt_pdf_id2);
   fChain->SetBranchAddress("mcevt_pdf_x1", &mcevt_pdf_x1, &b_mcevt_pdf_x1);
   fChain->SetBranchAddress("mcevt_pdf_x2", &mcevt_pdf_x2, &b_mcevt_pdf_x2);
   fChain->SetBranchAddress("mcevt_pdf_scale", &mcevt_pdf_scale, &b_mcevt_pdf_scale);
   fChain->SetBranchAddress("mcevt_pdf1", &mcevt_pdf1, &b_mcevt_pdf1);
   fChain->SetBranchAddress("mcevt_pdf2", &mcevt_pdf2, &b_mcevt_pdf2);
   fChain->SetBranchAddress("mcevt_weight", &mcevt_weight, &b_mcevt_weight);
   fChain->SetBranchAddress("mcevt_nparticle", &mcevt_nparticle, &b_mcevt_nparticle);
   fChain->SetBranchAddress("mcevt_pileUpType", &mcevt_pileUpType, &b_mcevt_pileUpType);
   fChain->SetBranchAddress("mc_n", &mc_n, &b_mc_n);
   fChain->SetBranchAddress("mc_pt", &mc_pt, &b_mc_pt);
   fChain->SetBranchAddress("mc_m", &mc_m, &b_mc_m);
   fChain->SetBranchAddress("mc_eta", &mc_eta, &b_mc_eta);
   fChain->SetBranchAddress("mc_phi", &mc_phi, &b_mc_phi);
   fChain->SetBranchAddress("mc_status", &mc_status, &b_mc_status);
   fChain->SetBranchAddress("mc_barcode", &mc_barcode, &b_mc_barcode);
   fChain->SetBranchAddress("mc_parents", &mc_parents, &b_mc_parents);
   fChain->SetBranchAddress("mc_children", &mc_children, &b_mc_children);
   fChain->SetBranchAddress("mc_pdgId", &mc_pdgId, &b_mc_pdgId);
   fChain->SetBranchAddress("mc_charge", &mc_charge, &b_mc_charge);
   fChain->SetBranchAddress("mc_vx_x", &mc_vx_x, &b_mc_vx_x);
   fChain->SetBranchAddress("mc_vx_y", &mc_vx_y, &b_mc_vx_y);
   fChain->SetBranchAddress("mc_vx_z", &mc_vx_z, &b_mc_vx_z);
   fChain->SetBranchAddress("mc_vx_barcode", &mc_vx_barcode, &b_mc_vx_barcode);
   fChain->SetBranchAddress("mc_child_index", &mc_child_index, &b_mc_child_index);
   fChain->SetBranchAddress("mc_parent_index", &mc_parent_index, &b_mc_parent_index);
   fChain->SetBranchAddress("mc_PartonIsolation15_UE", &mc_PartonIsolation15_UE, &b_mc_PartonIsolation15_UE);
   fChain->SetBranchAddress("mc_PartonIsolation20_UE", &mc_PartonIsolation20_UE, &b_mc_PartonIsolation20_UE);
   fChain->SetBranchAddress("mc_PartonIsolation25_UE", &mc_PartonIsolation25_UE, &b_mc_PartonIsolation25_UE);
   fChain->SetBranchAddress("mc_PartonIsolation30_UE", &mc_PartonIsolation30_UE, &b_mc_PartonIsolation30_UE);
   fChain->SetBranchAddress("mc_PartonIsolation35_UE", &mc_PartonIsolation35_UE, &b_mc_PartonIsolation35_UE);
   fChain->SetBranchAddress("mc_PartonIsolation40_UE", &mc_PartonIsolation40_UE, &b_mc_PartonIsolation40_UE);
   fChain->SetBranchAddress("mc_PartonIsolation45_UE", &mc_PartonIsolation45_UE, &b_mc_PartonIsolation45_UE);
   fChain->SetBranchAddress("mc_PartonIsolation60_UE", &mc_PartonIsolation60_UE, &b_mc_PartonIsolation60_UE);
   fChain->SetBranchAddress("mc_PartonIsolation15", &mc_PartonIsolation15, &b_mc_PartonIsolation15);
   fChain->SetBranchAddress("mc_PartonIsolation20", &mc_PartonIsolation20, &b_mc_PartonIsolation20);
   fChain->SetBranchAddress("mc_PartonIsolation25", &mc_PartonIsolation25, &b_mc_PartonIsolation25);
   fChain->SetBranchAddress("mc_PartonIsolation30", &mc_PartonIsolation30, &b_mc_PartonIsolation30);
   fChain->SetBranchAddress("mc_PartonIsolation35", &mc_PartonIsolation35, &b_mc_PartonIsolation35);
   fChain->SetBranchAddress("mc_PartonIsolation40", &mc_PartonIsolation40, &b_mc_PartonIsolation40);
   fChain->SetBranchAddress("mc_PartonIsolation45", &mc_PartonIsolation45, &b_mc_PartonIsolation45);
   fChain->SetBranchAddress("mc_PartonIsolation60", &mc_PartonIsolation60, &b_mc_PartonIsolation60);
   fChain->SetBranchAddress("mc_ParticleIsolation40", &mc_ParticleIsolation40, &b_mc_ParticleIsolation40);
   fChain->SetBranchAddress("mc_ParticleIsolation40_ED_corrected", &mc_ParticleIsolation40_ED_corrected, &b_mc_ParticleIsolation40_ED_corrected);
   fChain->SetBranchAddress("mc_ParticleIsolation40_ED_corrected_reco", &mc_ParticleIsolation40_ED_corrected_reco, &b_mc_ParticleIsolation40_ED_corrected_reco);
   fChain->SetBranchAddress("mc_ParticleIsolation40_ED_corrected_new", &mc_ParticleIsolation40_ED_corrected_new, &b_mc_ParticleIsolation40_ED_corrected_new);
   fChain->SetBranchAddress("mc_ParticleIsolation40_ED_corrected_reco_new", &mc_ParticleIsolation40_ED_corrected_reco_new, &b_mc_ParticleIsolation40_ED_corrected_reco_new);
   fChain->SetBranchAddress("mc_isBremPhoton", &mc_isBremPhoton, &b_mc_isBremPhoton);
   fChain->SetBranchAddress("mc_isHardProcPhoton", &mc_isHardProcPhoton, &b_mc_isHardProcPhoton);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_n", &jet_AntiKt4TruthJets_n, &b_jet_AntiKt4TruthJets_n);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_E", &jet_AntiKt4TruthJets_E, &b_jet_AntiKt4TruthJets_E);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_pt", &jet_AntiKt4TruthJets_pt, &b_jet_AntiKt4TruthJets_pt);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_m", &jet_AntiKt4TruthJets_m, &b_jet_AntiKt4TruthJets_m);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_eta", &jet_AntiKt4TruthJets_eta, &b_jet_AntiKt4TruthJets_eta);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_phi", &jet_AntiKt4TruthJets_phi, &b_jet_AntiKt4TruthJets_phi);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_EtaOrigin", &jet_AntiKt4TruthJets_EtaOrigin, &b_jet_AntiKt4TruthJets_EtaOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_PhiOrigin", &jet_AntiKt4TruthJets_PhiOrigin, &b_jet_AntiKt4TruthJets_PhiOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_MOrigin", &jet_AntiKt4TruthJets_MOrigin, &b_jet_AntiKt4TruthJets_MOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_EtaOriginEM", &jet_AntiKt4TruthJets_EtaOriginEM, &b_jet_AntiKt4TruthJets_EtaOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_PhiOriginEM", &jet_AntiKt4TruthJets_PhiOriginEM, &b_jet_AntiKt4TruthJets_PhiOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_MOriginEM", &jet_AntiKt4TruthJets_MOriginEM, &b_jet_AntiKt4TruthJets_MOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_shapeBins", &jet_AntiKt4TruthJets_shapeBins, &b_jet_AntiKt4TruthJets_shapeBins);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_flavor_truth_label", &jet_AntiKt4TruthJets_flavor_truth_label, &b_jet_AntiKt4TruthJets_flavor_truth_label);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_flavor_truth_dRminToB", &jet_AntiKt4TruthJets_flavor_truth_dRminToB, &b_jet_AntiKt4TruthJets_flavor_truth_dRminToB);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_flavor_truth_dRminToC", &jet_AntiKt4TruthJets_flavor_truth_dRminToC, &b_jet_AntiKt4TruthJets_flavor_truth_dRminToC);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_flavor_truth_dRminToT", &jet_AntiKt4TruthJets_flavor_truth_dRminToT, &b_jet_AntiKt4TruthJets_flavor_truth_dRminToT);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_flavor_truth_BHadronpdg", &jet_AntiKt4TruthJets_flavor_truth_BHadronpdg, &b_jet_AntiKt4TruthJets_flavor_truth_BHadronpdg);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_flavor_truth_vx_x", &jet_AntiKt4TruthJets_flavor_truth_vx_x, &b_jet_AntiKt4TruthJets_flavor_truth_vx_x);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_flavor_truth_vx_y", &jet_AntiKt4TruthJets_flavor_truth_vx_y, &b_jet_AntiKt4TruthJets_flavor_truth_vx_y);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_flavor_truth_vx_z", &jet_AntiKt4TruthJets_flavor_truth_vx_z, &b_jet_AntiKt4TruthJets_flavor_truth_vx_z);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_el_dr", &jet_AntiKt4TruthJets_el_dr, &b_jet_AntiKt4TruthJets_el_dr);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_el_matched", &jet_AntiKt4TruthJets_el_matched, &b_jet_AntiKt4TruthJets_el_matched);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_mu_dr", &jet_AntiKt4TruthJets_mu_dr, &b_jet_AntiKt4TruthJets_mu_dr);
   fChain->SetBranchAddress("jet_AntiKt4TruthJets_mu_matched", &jet_AntiKt4TruthJets_mu_matched, &b_jet_AntiKt4TruthJets_mu_matched);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_n", &jet_AntiKt6TruthJets_n, &b_jet_AntiKt6TruthJets_n);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_E", &jet_AntiKt6TruthJets_E, &b_jet_AntiKt6TruthJets_E);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_pt", &jet_AntiKt6TruthJets_pt, &b_jet_AntiKt6TruthJets_pt);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_m", &jet_AntiKt6TruthJets_m, &b_jet_AntiKt6TruthJets_m);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_eta", &jet_AntiKt6TruthJets_eta, &b_jet_AntiKt6TruthJets_eta);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_phi", &jet_AntiKt6TruthJets_phi, &b_jet_AntiKt6TruthJets_phi);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_EtaOrigin", &jet_AntiKt6TruthJets_EtaOrigin, &b_jet_AntiKt6TruthJets_EtaOrigin);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_PhiOrigin", &jet_AntiKt6TruthJets_PhiOrigin, &b_jet_AntiKt6TruthJets_PhiOrigin);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_MOrigin", &jet_AntiKt6TruthJets_MOrigin, &b_jet_AntiKt6TruthJets_MOrigin);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_EtaOriginEM", &jet_AntiKt6TruthJets_EtaOriginEM, &b_jet_AntiKt6TruthJets_EtaOriginEM);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_PhiOriginEM", &jet_AntiKt6TruthJets_PhiOriginEM, &b_jet_AntiKt6TruthJets_PhiOriginEM);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_MOriginEM", &jet_AntiKt6TruthJets_MOriginEM, &b_jet_AntiKt6TruthJets_MOriginEM);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_shapeBins", &jet_AntiKt6TruthJets_shapeBins, &b_jet_AntiKt6TruthJets_shapeBins);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_flavor_truth_label", &jet_AntiKt6TruthJets_flavor_truth_label, &b_jet_AntiKt6TruthJets_flavor_truth_label);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_flavor_truth_dRminToB", &jet_AntiKt6TruthJets_flavor_truth_dRminToB, &b_jet_AntiKt6TruthJets_flavor_truth_dRminToB);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_flavor_truth_dRminToC", &jet_AntiKt6TruthJets_flavor_truth_dRminToC, &b_jet_AntiKt6TruthJets_flavor_truth_dRminToC);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_flavor_truth_dRminToT", &jet_AntiKt6TruthJets_flavor_truth_dRminToT, &b_jet_AntiKt6TruthJets_flavor_truth_dRminToT);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_flavor_truth_BHadronpdg", &jet_AntiKt6TruthJets_flavor_truth_BHadronpdg, &b_jet_AntiKt6TruthJets_flavor_truth_BHadronpdg);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_flavor_truth_vx_x", &jet_AntiKt6TruthJets_flavor_truth_vx_x, &b_jet_AntiKt6TruthJets_flavor_truth_vx_x);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_flavor_truth_vx_y", &jet_AntiKt6TruthJets_flavor_truth_vx_y, &b_jet_AntiKt6TruthJets_flavor_truth_vx_y);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_flavor_truth_vx_z", &jet_AntiKt6TruthJets_flavor_truth_vx_z, &b_jet_AntiKt6TruthJets_flavor_truth_vx_z);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_el_dr", &jet_AntiKt6TruthJets_el_dr, &b_jet_AntiKt6TruthJets_el_dr);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_el_matched", &jet_AntiKt6TruthJets_el_matched, &b_jet_AntiKt6TruthJets_el_matched);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_mu_dr", &jet_AntiKt6TruthJets_mu_dr, &b_jet_AntiKt6TruthJets_mu_dr);
   fChain->SetBranchAddress("jet_AntiKt6TruthJets_mu_matched", &jet_AntiKt6TruthJets_mu_matched, &b_jet_AntiKt6TruthJets_mu_matched);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_n", &jet_AntiKt4TruthWithMuNoIntJets_n, &b_jet_AntiKt4TruthWithMuNoIntJets_n);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_E", &jet_AntiKt4TruthWithMuNoIntJets_E, &b_jet_AntiKt4TruthWithMuNoIntJets_E);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_pt", &jet_AntiKt4TruthWithMuNoIntJets_pt, &b_jet_AntiKt4TruthWithMuNoIntJets_pt);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_m", &jet_AntiKt4TruthWithMuNoIntJets_m, &b_jet_AntiKt4TruthWithMuNoIntJets_m);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_eta", &jet_AntiKt4TruthWithMuNoIntJets_eta, &b_jet_AntiKt4TruthWithMuNoIntJets_eta);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_phi", &jet_AntiKt4TruthWithMuNoIntJets_phi, &b_jet_AntiKt4TruthWithMuNoIntJets_phi);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_EtaOrigin", &jet_AntiKt4TruthWithMuNoIntJets_EtaOrigin, &b_jet_AntiKt4TruthWithMuNoIntJets_EtaOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_PhiOrigin", &jet_AntiKt4TruthWithMuNoIntJets_PhiOrigin, &b_jet_AntiKt4TruthWithMuNoIntJets_PhiOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_MOrigin", &jet_AntiKt4TruthWithMuNoIntJets_MOrigin, &b_jet_AntiKt4TruthWithMuNoIntJets_MOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_EtaOriginEM", &jet_AntiKt4TruthWithMuNoIntJets_EtaOriginEM, &b_jet_AntiKt4TruthWithMuNoIntJets_EtaOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_PhiOriginEM", &jet_AntiKt4TruthWithMuNoIntJets_PhiOriginEM, &b_jet_AntiKt4TruthWithMuNoIntJets_PhiOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_MOriginEM", &jet_AntiKt4TruthWithMuNoIntJets_MOriginEM, &b_jet_AntiKt4TruthWithMuNoIntJets_MOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_shapeBins", &jet_AntiKt4TruthWithMuNoIntJets_shapeBins, &b_jet_AntiKt4TruthWithMuNoIntJets_shapeBins);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_label", &jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_label, &b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_label);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToB", &jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToB, &b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToB);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToC", &jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToC, &b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToC);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToT", &jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToT, &b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_dRminToT);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_BHadronpdg", &jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_BHadronpdg, &b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_BHadronpdg);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_x", &jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_x, &b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_x);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_y", &jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_y, &b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_y);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_z", &jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_z, &b_jet_AntiKt4TruthWithMuNoIntJets_flavor_truth_vx_z);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_el_dr", &jet_AntiKt4TruthWithMuNoIntJets_el_dr, &b_jet_AntiKt4TruthWithMuNoIntJets_el_dr);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_el_matched", &jet_AntiKt4TruthWithMuNoIntJets_el_matched, &b_jet_AntiKt4TruthWithMuNoIntJets_el_matched);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_mu_dr", &jet_AntiKt4TruthWithMuNoIntJets_mu_dr, &b_jet_AntiKt4TruthWithMuNoIntJets_mu_dr);
   fChain->SetBranchAddress("jet_AntiKt4TruthWithMuNoIntJets_mu_matched", &jet_AntiKt4TruthWithMuNoIntJets_mu_matched, &b_jet_AntiKt4TruthWithMuNoIntJets_mu_matched);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_n", &jet_AntiKt6TruthWithMuNoIntJets_n, &b_jet_AntiKt6TruthWithMuNoIntJets_n);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_E", &jet_AntiKt6TruthWithMuNoIntJets_E, &b_jet_AntiKt6TruthWithMuNoIntJets_E);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_pt", &jet_AntiKt6TruthWithMuNoIntJets_pt, &b_jet_AntiKt6TruthWithMuNoIntJets_pt);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_m", &jet_AntiKt6TruthWithMuNoIntJets_m, &b_jet_AntiKt6TruthWithMuNoIntJets_m);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_eta", &jet_AntiKt6TruthWithMuNoIntJets_eta, &b_jet_AntiKt6TruthWithMuNoIntJets_eta);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_phi", &jet_AntiKt6TruthWithMuNoIntJets_phi, &b_jet_AntiKt6TruthWithMuNoIntJets_phi);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_EtaOrigin", &jet_AntiKt6TruthWithMuNoIntJets_EtaOrigin, &b_jet_AntiKt6TruthWithMuNoIntJets_EtaOrigin);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_PhiOrigin", &jet_AntiKt6TruthWithMuNoIntJets_PhiOrigin, &b_jet_AntiKt6TruthWithMuNoIntJets_PhiOrigin);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_MOrigin", &jet_AntiKt6TruthWithMuNoIntJets_MOrigin, &b_jet_AntiKt6TruthWithMuNoIntJets_MOrigin);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_EtaOriginEM", &jet_AntiKt6TruthWithMuNoIntJets_EtaOriginEM, &b_jet_AntiKt6TruthWithMuNoIntJets_EtaOriginEM);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_PhiOriginEM", &jet_AntiKt6TruthWithMuNoIntJets_PhiOriginEM, &b_jet_AntiKt6TruthWithMuNoIntJets_PhiOriginEM);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_MOriginEM", &jet_AntiKt6TruthWithMuNoIntJets_MOriginEM, &b_jet_AntiKt6TruthWithMuNoIntJets_MOriginEM);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_shapeBins", &jet_AntiKt6TruthWithMuNoIntJets_shapeBins, &b_jet_AntiKt6TruthWithMuNoIntJets_shapeBins);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_label", &jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_label, &b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_label);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToB", &jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToB, &b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToB);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToC", &jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToC, &b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToC);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToT", &jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToT, &b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_dRminToT);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_BHadronpdg", &jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_BHadronpdg, &b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_BHadronpdg);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_x", &jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_x, &b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_x);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_y", &jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_y, &b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_y);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_z", &jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_z, &b_jet_AntiKt6TruthWithMuNoIntJets_flavor_truth_vx_z);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_el_dr", &jet_AntiKt6TruthWithMuNoIntJets_el_dr, &b_jet_AntiKt6TruthWithMuNoIntJets_el_dr);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_el_matched", &jet_AntiKt6TruthWithMuNoIntJets_el_matched, &b_jet_AntiKt6TruthWithMuNoIntJets_el_matched);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_mu_dr", &jet_AntiKt6TruthWithMuNoIntJets_mu_dr, &b_jet_AntiKt6TruthWithMuNoIntJets_mu_dr);
   fChain->SetBranchAddress("jet_AntiKt6TruthWithMuNoIntJets_mu_matched", &jet_AntiKt6TruthWithMuNoIntJets_mu_matched, &b_jet_AntiKt6TruthWithMuNoIntJets_mu_matched);
   fChain->SetBranchAddress("met_etx", &met_etx, &b_met_etx);
   fChain->SetBranchAddress("met_ety", &met_ety, &b_met_ety);
   fChain->SetBranchAddress("MET_Cryo_etx", &MET_Cryo_etx, &b_MET_Cryo_etx);
   fChain->SetBranchAddress("MET_Cryo_ety", &MET_Cryo_ety, &b_MET_Cryo_ety);
   fChain->SetBranchAddress("MET_Cryo_phi", &MET_Cryo_phi, &b_MET_Cryo_phi);
   fChain->SetBranchAddress("MET_Cryo_et", &MET_Cryo_et, &b_MET_Cryo_et);
   fChain->SetBranchAddress("MET_Cryo_sumet", &MET_Cryo_sumet, &b_MET_Cryo_sumet);
   fChain->SetBranchAddress("MET_Cryo_etx_CentralReg", &MET_Cryo_etx_CentralReg, &b_MET_Cryo_etx_CentralReg);
   fChain->SetBranchAddress("MET_Cryo_ety_CentralReg", &MET_Cryo_ety_CentralReg, &b_MET_Cryo_ety_CentralReg);
   fChain->SetBranchAddress("MET_Cryo_sumet_CentralReg", &MET_Cryo_sumet_CentralReg, &b_MET_Cryo_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Cryo_phi_CentralReg", &MET_Cryo_phi_CentralReg, &b_MET_Cryo_phi_CentralReg);
   fChain->SetBranchAddress("MET_Cryo_etx_EndcapRegion", &MET_Cryo_etx_EndcapRegion, &b_MET_Cryo_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Cryo_ety_EndcapRegion", &MET_Cryo_ety_EndcapRegion, &b_MET_Cryo_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Cryo_sumet_EndcapRegion", &MET_Cryo_sumet_EndcapRegion, &b_MET_Cryo_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Cryo_phi_EndcapRegion", &MET_Cryo_phi_EndcapRegion, &b_MET_Cryo_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Cryo_etx_ForwardReg", &MET_Cryo_etx_ForwardReg, &b_MET_Cryo_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Cryo_ety_ForwardReg", &MET_Cryo_ety_ForwardReg, &b_MET_Cryo_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Cryo_sumet_ForwardReg", &MET_Cryo_sumet_ForwardReg, &b_MET_Cryo_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Cryo_phi_ForwardReg", &MET_Cryo_phi_ForwardReg, &b_MET_Cryo_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_etx", &MET_RefFinal_etx, &b_MET_RefFinal_etx);
   fChain->SetBranchAddress("MET_RefFinal_ety", &MET_RefFinal_ety, &b_MET_RefFinal_ety);
   fChain->SetBranchAddress("MET_RefFinal_phi", &MET_RefFinal_phi, &b_MET_RefFinal_phi);
   fChain->SetBranchAddress("MET_RefFinal_et", &MET_RefFinal_et, &b_MET_RefFinal_et);
   fChain->SetBranchAddress("MET_RefFinal_sumet", &MET_RefFinal_sumet, &b_MET_RefFinal_sumet);
   fChain->SetBranchAddress("MET_RefFinal_etx_CentralReg", &MET_RefFinal_etx_CentralReg, &b_MET_RefFinal_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_ety_CentralReg", &MET_RefFinal_ety_CentralReg, &b_MET_RefFinal_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_sumet_CentralReg", &MET_RefFinal_sumet_CentralReg, &b_MET_RefFinal_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_phi_CentralReg", &MET_RefFinal_phi_CentralReg, &b_MET_RefFinal_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_etx_EndcapRegion", &MET_RefFinal_etx_EndcapRegion, &b_MET_RefFinal_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_ety_EndcapRegion", &MET_RefFinal_ety_EndcapRegion, &b_MET_RefFinal_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_sumet_EndcapRegion", &MET_RefFinal_sumet_EndcapRegion, &b_MET_RefFinal_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_phi_EndcapRegion", &MET_RefFinal_phi_EndcapRegion, &b_MET_RefFinal_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_etx_ForwardReg", &MET_RefFinal_etx_ForwardReg, &b_MET_RefFinal_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_ety_ForwardReg", &MET_RefFinal_ety_ForwardReg, &b_MET_RefFinal_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_sumet_ForwardReg", &MET_RefFinal_sumet_ForwardReg, &b_MET_RefFinal_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_phi_ForwardReg", &MET_RefFinal_phi_ForwardReg, &b_MET_RefFinal_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefEle_etx", &MET_RefEle_etx, &b_MET_RefEle_etx);
   fChain->SetBranchAddress("MET_RefEle_ety", &MET_RefEle_ety, &b_MET_RefEle_ety);
   fChain->SetBranchAddress("MET_RefEle_phi", &MET_RefEle_phi, &b_MET_RefEle_phi);
   fChain->SetBranchAddress("MET_RefEle_et", &MET_RefEle_et, &b_MET_RefEle_et);
   fChain->SetBranchAddress("MET_RefEle_sumet", &MET_RefEle_sumet, &b_MET_RefEle_sumet);
   fChain->SetBranchAddress("MET_RefEle_etx_CentralReg", &MET_RefEle_etx_CentralReg, &b_MET_RefEle_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefEle_ety_CentralReg", &MET_RefEle_ety_CentralReg, &b_MET_RefEle_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefEle_sumet_CentralReg", &MET_RefEle_sumet_CentralReg, &b_MET_RefEle_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefEle_phi_CentralReg", &MET_RefEle_phi_CentralReg, &b_MET_RefEle_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefEle_etx_EndcapRegion", &MET_RefEle_etx_EndcapRegion, &b_MET_RefEle_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefEle_ety_EndcapRegion", &MET_RefEle_ety_EndcapRegion, &b_MET_RefEle_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefEle_sumet_EndcapRegion", &MET_RefEle_sumet_EndcapRegion, &b_MET_RefEle_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefEle_phi_EndcapRegion", &MET_RefEle_phi_EndcapRegion, &b_MET_RefEle_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefEle_etx_ForwardReg", &MET_RefEle_etx_ForwardReg, &b_MET_RefEle_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefEle_ety_ForwardReg", &MET_RefEle_ety_ForwardReg, &b_MET_RefEle_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefEle_sumet_ForwardReg", &MET_RefEle_sumet_ForwardReg, &b_MET_RefEle_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefEle_phi_ForwardReg", &MET_RefEle_phi_ForwardReg, &b_MET_RefEle_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefJet_etx", &MET_RefJet_etx, &b_MET_RefJet_etx);
   fChain->SetBranchAddress("MET_RefJet_ety", &MET_RefJet_ety, &b_MET_RefJet_ety);
   fChain->SetBranchAddress("MET_RefJet_phi", &MET_RefJet_phi, &b_MET_RefJet_phi);
   fChain->SetBranchAddress("MET_RefJet_et", &MET_RefJet_et, &b_MET_RefJet_et);
   fChain->SetBranchAddress("MET_RefJet_sumet", &MET_RefJet_sumet, &b_MET_RefJet_sumet);
   fChain->SetBranchAddress("MET_RefJet_etx_CentralReg", &MET_RefJet_etx_CentralReg, &b_MET_RefJet_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefJet_ety_CentralReg", &MET_RefJet_ety_CentralReg, &b_MET_RefJet_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefJet_sumet_CentralReg", &MET_RefJet_sumet_CentralReg, &b_MET_RefJet_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefJet_phi_CentralReg", &MET_RefJet_phi_CentralReg, &b_MET_RefJet_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefJet_etx_EndcapRegion", &MET_RefJet_etx_EndcapRegion, &b_MET_RefJet_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefJet_ety_EndcapRegion", &MET_RefJet_ety_EndcapRegion, &b_MET_RefJet_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefJet_sumet_EndcapRegion", &MET_RefJet_sumet_EndcapRegion, &b_MET_RefJet_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefJet_phi_EndcapRegion", &MET_RefJet_phi_EndcapRegion, &b_MET_RefJet_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefJet_etx_ForwardReg", &MET_RefJet_etx_ForwardReg, &b_MET_RefJet_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefJet_ety_ForwardReg", &MET_RefJet_ety_ForwardReg, &b_MET_RefJet_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefJet_sumet_ForwardReg", &MET_RefJet_sumet_ForwardReg, &b_MET_RefJet_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefJet_phi_ForwardReg", &MET_RefJet_phi_ForwardReg, &b_MET_RefJet_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_etx", &MET_RefMuon_etx, &b_MET_RefMuon_etx);
   fChain->SetBranchAddress("MET_RefMuon_ety", &MET_RefMuon_ety, &b_MET_RefMuon_ety);
   fChain->SetBranchAddress("MET_RefMuon_phi", &MET_RefMuon_phi, &b_MET_RefMuon_phi);
   fChain->SetBranchAddress("MET_RefMuon_et", &MET_RefMuon_et, &b_MET_RefMuon_et);
   fChain->SetBranchAddress("MET_RefMuon_sumet", &MET_RefMuon_sumet, &b_MET_RefMuon_sumet);
   fChain->SetBranchAddress("MET_RefMuon_etx_CentralReg", &MET_RefMuon_etx_CentralReg, &b_MET_RefMuon_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_ety_CentralReg", &MET_RefMuon_ety_CentralReg, &b_MET_RefMuon_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_sumet_CentralReg", &MET_RefMuon_sumet_CentralReg, &b_MET_RefMuon_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_phi_CentralReg", &MET_RefMuon_phi_CentralReg, &b_MET_RefMuon_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_etx_EndcapRegion", &MET_RefMuon_etx_EndcapRegion, &b_MET_RefMuon_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_ety_EndcapRegion", &MET_RefMuon_ety_EndcapRegion, &b_MET_RefMuon_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_sumet_EndcapRegion", &MET_RefMuon_sumet_EndcapRegion, &b_MET_RefMuon_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_phi_EndcapRegion", &MET_RefMuon_phi_EndcapRegion, &b_MET_RefMuon_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_etx_ForwardReg", &MET_RefMuon_etx_ForwardReg, &b_MET_RefMuon_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_ety_ForwardReg", &MET_RefMuon_ety_ForwardReg, &b_MET_RefMuon_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_sumet_ForwardReg", &MET_RefMuon_sumet_ForwardReg, &b_MET_RefMuon_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_phi_ForwardReg", &MET_RefMuon_phi_ForwardReg, &b_MET_RefMuon_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_etx", &MET_RefMuon_Staco_etx, &b_MET_RefMuon_Staco_etx);
   fChain->SetBranchAddress("MET_RefMuon_Staco_ety", &MET_RefMuon_Staco_ety, &b_MET_RefMuon_Staco_ety);
   fChain->SetBranchAddress("MET_RefMuon_Staco_phi", &MET_RefMuon_Staco_phi, &b_MET_RefMuon_Staco_phi);
   fChain->SetBranchAddress("MET_RefMuon_Staco_et", &MET_RefMuon_Staco_et, &b_MET_RefMuon_Staco_et);
   fChain->SetBranchAddress("MET_RefMuon_Staco_sumet", &MET_RefMuon_Staco_sumet, &b_MET_RefMuon_Staco_sumet);
   fChain->SetBranchAddress("MET_RefMuon_Staco_etx_CentralReg", &MET_RefMuon_Staco_etx_CentralReg, &b_MET_RefMuon_Staco_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_ety_CentralReg", &MET_RefMuon_Staco_ety_CentralReg, &b_MET_RefMuon_Staco_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_sumet_CentralReg", &MET_RefMuon_Staco_sumet_CentralReg, &b_MET_RefMuon_Staco_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_phi_CentralReg", &MET_RefMuon_Staco_phi_CentralReg, &b_MET_RefMuon_Staco_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_etx_EndcapRegion", &MET_RefMuon_Staco_etx_EndcapRegion, &b_MET_RefMuon_Staco_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Staco_ety_EndcapRegion", &MET_RefMuon_Staco_ety_EndcapRegion, &b_MET_RefMuon_Staco_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Staco_sumet_EndcapRegion", &MET_RefMuon_Staco_sumet_EndcapRegion, &b_MET_RefMuon_Staco_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Staco_phi_EndcapRegion", &MET_RefMuon_Staco_phi_EndcapRegion, &b_MET_RefMuon_Staco_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Staco_etx_ForwardReg", &MET_RefMuon_Staco_etx_ForwardReg, &b_MET_RefMuon_Staco_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_ety_ForwardReg", &MET_RefMuon_Staco_ety_ForwardReg, &b_MET_RefMuon_Staco_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_sumet_ForwardReg", &MET_RefMuon_Staco_sumet_ForwardReg, &b_MET_RefMuon_Staco_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_phi_ForwardReg", &MET_RefMuon_Staco_phi_ForwardReg, &b_MET_RefMuon_Staco_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Muid_etx", &MET_RefMuon_Muid_etx, &b_MET_RefMuon_Muid_etx);
   fChain->SetBranchAddress("MET_RefMuon_Muid_ety", &MET_RefMuon_Muid_ety, &b_MET_RefMuon_Muid_ety);
   fChain->SetBranchAddress("MET_RefMuon_Muid_phi", &MET_RefMuon_Muid_phi, &b_MET_RefMuon_Muid_phi);
   fChain->SetBranchAddress("MET_RefMuon_Muid_et", &MET_RefMuon_Muid_et, &b_MET_RefMuon_Muid_et);
   fChain->SetBranchAddress("MET_RefMuon_Muid_sumet", &MET_RefMuon_Muid_sumet, &b_MET_RefMuon_Muid_sumet);
   fChain->SetBranchAddress("MET_RefMuon_Muid_etx_CentralReg", &MET_RefMuon_Muid_etx_CentralReg, &b_MET_RefMuon_Muid_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Muid_ety_CentralReg", &MET_RefMuon_Muid_ety_CentralReg, &b_MET_RefMuon_Muid_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Muid_sumet_CentralReg", &MET_RefMuon_Muid_sumet_CentralReg, &b_MET_RefMuon_Muid_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Muid_phi_CentralReg", &MET_RefMuon_Muid_phi_CentralReg, &b_MET_RefMuon_Muid_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Muid_etx_EndcapRegion", &MET_RefMuon_Muid_etx_EndcapRegion, &b_MET_RefMuon_Muid_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Muid_ety_EndcapRegion", &MET_RefMuon_Muid_ety_EndcapRegion, &b_MET_RefMuon_Muid_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Muid_sumet_EndcapRegion", &MET_RefMuon_Muid_sumet_EndcapRegion, &b_MET_RefMuon_Muid_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Muid_phi_EndcapRegion", &MET_RefMuon_Muid_phi_EndcapRegion, &b_MET_RefMuon_Muid_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Muid_etx_ForwardReg", &MET_RefMuon_Muid_etx_ForwardReg, &b_MET_RefMuon_Muid_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Muid_ety_ForwardReg", &MET_RefMuon_Muid_ety_ForwardReg, &b_MET_RefMuon_Muid_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Muid_sumet_ForwardReg", &MET_RefMuon_Muid_sumet_ForwardReg, &b_MET_RefMuon_Muid_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Muid_phi_ForwardReg", &MET_RefMuon_Muid_phi_ForwardReg, &b_MET_RefMuon_Muid_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefGamma_etx", &MET_RefGamma_etx, &b_MET_RefGamma_etx);
   fChain->SetBranchAddress("MET_RefGamma_ety", &MET_RefGamma_ety, &b_MET_RefGamma_ety);
   fChain->SetBranchAddress("MET_RefGamma_phi", &MET_RefGamma_phi, &b_MET_RefGamma_phi);
   fChain->SetBranchAddress("MET_RefGamma_et", &MET_RefGamma_et, &b_MET_RefGamma_et);
   fChain->SetBranchAddress("MET_RefGamma_sumet", &MET_RefGamma_sumet, &b_MET_RefGamma_sumet);
   fChain->SetBranchAddress("MET_RefGamma_etx_CentralReg", &MET_RefGamma_etx_CentralReg, &b_MET_RefGamma_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefGamma_ety_CentralReg", &MET_RefGamma_ety_CentralReg, &b_MET_RefGamma_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefGamma_sumet_CentralReg", &MET_RefGamma_sumet_CentralReg, &b_MET_RefGamma_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefGamma_phi_CentralReg", &MET_RefGamma_phi_CentralReg, &b_MET_RefGamma_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefGamma_etx_EndcapRegion", &MET_RefGamma_etx_EndcapRegion, &b_MET_RefGamma_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefGamma_ety_EndcapRegion", &MET_RefGamma_ety_EndcapRegion, &b_MET_RefGamma_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefGamma_sumet_EndcapRegion", &MET_RefGamma_sumet_EndcapRegion, &b_MET_RefGamma_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefGamma_phi_EndcapRegion", &MET_RefGamma_phi_EndcapRegion, &b_MET_RefGamma_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefGamma_etx_ForwardReg", &MET_RefGamma_etx_ForwardReg, &b_MET_RefGamma_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefGamma_ety_ForwardReg", &MET_RefGamma_ety_ForwardReg, &b_MET_RefGamma_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefGamma_sumet_ForwardReg", &MET_RefGamma_sumet_ForwardReg, &b_MET_RefGamma_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefGamma_phi_ForwardReg", &MET_RefGamma_phi_ForwardReg, &b_MET_RefGamma_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefTau_etx", &MET_RefTau_etx, &b_MET_RefTau_etx);
   fChain->SetBranchAddress("MET_RefTau_ety", &MET_RefTau_ety, &b_MET_RefTau_ety);
   fChain->SetBranchAddress("MET_RefTau_phi", &MET_RefTau_phi, &b_MET_RefTau_phi);
   fChain->SetBranchAddress("MET_RefTau_et", &MET_RefTau_et, &b_MET_RefTau_et);
   fChain->SetBranchAddress("MET_RefTau_sumet", &MET_RefTau_sumet, &b_MET_RefTau_sumet);
   fChain->SetBranchAddress("MET_RefTau_etx_CentralReg", &MET_RefTau_etx_CentralReg, &b_MET_RefTau_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefTau_ety_CentralReg", &MET_RefTau_ety_CentralReg, &b_MET_RefTau_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefTau_sumet_CentralReg", &MET_RefTau_sumet_CentralReg, &b_MET_RefTau_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefTau_phi_CentralReg", &MET_RefTau_phi_CentralReg, &b_MET_RefTau_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefTau_etx_EndcapRegion", &MET_RefTau_etx_EndcapRegion, &b_MET_RefTau_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefTau_ety_EndcapRegion", &MET_RefTau_ety_EndcapRegion, &b_MET_RefTau_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefTau_sumet_EndcapRegion", &MET_RefTau_sumet_EndcapRegion, &b_MET_RefTau_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefTau_phi_EndcapRegion", &MET_RefTau_phi_EndcapRegion, &b_MET_RefTau_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefTau_etx_ForwardReg", &MET_RefTau_etx_ForwardReg, &b_MET_RefTau_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefTau_ety_ForwardReg", &MET_RefTau_ety_ForwardReg, &b_MET_RefTau_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefTau_sumet_ForwardReg", &MET_RefTau_sumet_ForwardReg, &b_MET_RefTau_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefTau_phi_ForwardReg", &MET_RefTau_phi_ForwardReg, &b_MET_RefTau_phi_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_etx", &MET_CellOut_etx, &b_MET_CellOut_etx);
   fChain->SetBranchAddress("MET_CellOut_ety", &MET_CellOut_ety, &b_MET_CellOut_ety);
   fChain->SetBranchAddress("MET_CellOut_phi", &MET_CellOut_phi, &b_MET_CellOut_phi);
   fChain->SetBranchAddress("MET_CellOut_et", &MET_CellOut_et, &b_MET_CellOut_et);
   fChain->SetBranchAddress("MET_CellOut_sumet", &MET_CellOut_sumet, &b_MET_CellOut_sumet);
   fChain->SetBranchAddress("MET_CellOut_etx_CentralReg", &MET_CellOut_etx_CentralReg, &b_MET_CellOut_etx_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_ety_CentralReg", &MET_CellOut_ety_CentralReg, &b_MET_CellOut_ety_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_sumet_CentralReg", &MET_CellOut_sumet_CentralReg, &b_MET_CellOut_sumet_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_phi_CentralReg", &MET_CellOut_phi_CentralReg, &b_MET_CellOut_phi_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_etx_EndcapRegion", &MET_CellOut_etx_EndcapRegion, &b_MET_CellOut_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_ety_EndcapRegion", &MET_CellOut_ety_EndcapRegion, &b_MET_CellOut_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_sumet_EndcapRegion", &MET_CellOut_sumet_EndcapRegion, &b_MET_CellOut_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_phi_EndcapRegion", &MET_CellOut_phi_EndcapRegion, &b_MET_CellOut_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_etx_ForwardReg", &MET_CellOut_etx_ForwardReg, &b_MET_CellOut_etx_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_ety_ForwardReg", &MET_CellOut_ety_ForwardReg, &b_MET_CellOut_ety_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_sumet_ForwardReg", &MET_CellOut_sumet_ForwardReg, &b_MET_CellOut_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_phi_ForwardReg", &MET_CellOut_phi_ForwardReg, &b_MET_CellOut_phi_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_etx", &MET_MuonBoy_etx, &b_MET_MuonBoy_etx);
   fChain->SetBranchAddress("MET_MuonBoy_ety", &MET_MuonBoy_ety, &b_MET_MuonBoy_ety);
   fChain->SetBranchAddress("MET_MuonBoy_phi", &MET_MuonBoy_phi, &b_MET_MuonBoy_phi);
   fChain->SetBranchAddress("MET_MuonBoy_et", &MET_MuonBoy_et, &b_MET_MuonBoy_et);
   fChain->SetBranchAddress("MET_MuonBoy_sumet", &MET_MuonBoy_sumet, &b_MET_MuonBoy_sumet);
   fChain->SetBranchAddress("MET_MuonBoy_etx_CentralReg", &MET_MuonBoy_etx_CentralReg, &b_MET_MuonBoy_etx_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_ety_CentralReg", &MET_MuonBoy_ety_CentralReg, &b_MET_MuonBoy_ety_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_sumet_CentralReg", &MET_MuonBoy_sumet_CentralReg, &b_MET_MuonBoy_sumet_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_phi_CentralReg", &MET_MuonBoy_phi_CentralReg, &b_MET_MuonBoy_phi_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_etx_EndcapRegion", &MET_MuonBoy_etx_EndcapRegion, &b_MET_MuonBoy_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_ety_EndcapRegion", &MET_MuonBoy_ety_EndcapRegion, &b_MET_MuonBoy_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_sumet_EndcapRegion", &MET_MuonBoy_sumet_EndcapRegion, &b_MET_MuonBoy_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_phi_EndcapRegion", &MET_MuonBoy_phi_EndcapRegion, &b_MET_MuonBoy_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_etx_ForwardReg", &MET_MuonBoy_etx_ForwardReg, &b_MET_MuonBoy_etx_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_ety_ForwardReg", &MET_MuonBoy_ety_ForwardReg, &b_MET_MuonBoy_ety_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_sumet_ForwardReg", &MET_MuonBoy_sumet_ForwardReg, &b_MET_MuonBoy_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_phi_ForwardReg", &MET_MuonBoy_phi_ForwardReg, &b_MET_MuonBoy_phi_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_Track_etx", &MET_MuonBoy_Track_etx, &b_MET_MuonBoy_Track_etx);
   fChain->SetBranchAddress("MET_MuonBoy_Track_ety", &MET_MuonBoy_Track_ety, &b_MET_MuonBoy_Track_ety);
   fChain->SetBranchAddress("MET_MuonBoy_Track_phi", &MET_MuonBoy_Track_phi, &b_MET_MuonBoy_Track_phi);
   fChain->SetBranchAddress("MET_MuonBoy_Track_et", &MET_MuonBoy_Track_et, &b_MET_MuonBoy_Track_et);
   fChain->SetBranchAddress("MET_MuonBoy_Track_sumet", &MET_MuonBoy_Track_sumet, &b_MET_MuonBoy_Track_sumet);
   fChain->SetBranchAddress("MET_MuonBoy_Track_etx_CentralReg", &MET_MuonBoy_Track_etx_CentralReg, &b_MET_MuonBoy_Track_etx_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_Track_ety_CentralReg", &MET_MuonBoy_Track_ety_CentralReg, &b_MET_MuonBoy_Track_ety_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_Track_sumet_CentralReg", &MET_MuonBoy_Track_sumet_CentralReg, &b_MET_MuonBoy_Track_sumet_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_Track_phi_CentralReg", &MET_MuonBoy_Track_phi_CentralReg, &b_MET_MuonBoy_Track_phi_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_Track_etx_EndcapRegion", &MET_MuonBoy_Track_etx_EndcapRegion, &b_MET_MuonBoy_Track_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_Track_ety_EndcapRegion", &MET_MuonBoy_Track_ety_EndcapRegion, &b_MET_MuonBoy_Track_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_Track_sumet_EndcapRegion", &MET_MuonBoy_Track_sumet_EndcapRegion, &b_MET_MuonBoy_Track_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_Track_phi_EndcapRegion", &MET_MuonBoy_Track_phi_EndcapRegion, &b_MET_MuonBoy_Track_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_Track_etx_ForwardReg", &MET_MuonBoy_Track_etx_ForwardReg, &b_MET_MuonBoy_Track_etx_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_Track_ety_ForwardReg", &MET_MuonBoy_Track_ety_ForwardReg, &b_MET_MuonBoy_Track_ety_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_Track_sumet_ForwardReg", &MET_MuonBoy_Track_sumet_ForwardReg, &b_MET_MuonBoy_Track_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_Track_phi_ForwardReg", &MET_MuonBoy_Track_phi_ForwardReg, &b_MET_MuonBoy_Track_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Final_etx", &MET_Final_etx, &b_MET_Final_etx);
   fChain->SetBranchAddress("MET_Final_ety", &MET_Final_ety, &b_MET_Final_ety);
   fChain->SetBranchAddress("MET_Final_phi", &MET_Final_phi, &b_MET_Final_phi);
   fChain->SetBranchAddress("MET_Final_et", &MET_Final_et, &b_MET_Final_et);
   fChain->SetBranchAddress("MET_Final_sumet", &MET_Final_sumet, &b_MET_Final_sumet);
   fChain->SetBranchAddress("MET_Final_etx_CentralReg", &MET_Final_etx_CentralReg, &b_MET_Final_etx_CentralReg);
   fChain->SetBranchAddress("MET_Final_ety_CentralReg", &MET_Final_ety_CentralReg, &b_MET_Final_ety_CentralReg);
   fChain->SetBranchAddress("MET_Final_sumet_CentralReg", &MET_Final_sumet_CentralReg, &b_MET_Final_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Final_phi_CentralReg", &MET_Final_phi_CentralReg, &b_MET_Final_phi_CentralReg);
   fChain->SetBranchAddress("MET_Final_etx_EndcapRegion", &MET_Final_etx_EndcapRegion, &b_MET_Final_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Final_ety_EndcapRegion", &MET_Final_ety_EndcapRegion, &b_MET_Final_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Final_sumet_EndcapRegion", &MET_Final_sumet_EndcapRegion, &b_MET_Final_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Final_phi_EndcapRegion", &MET_Final_phi_EndcapRegion, &b_MET_Final_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Final_etx_ForwardReg", &MET_Final_etx_ForwardReg, &b_MET_Final_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Final_ety_ForwardReg", &MET_Final_ety_ForwardReg, &b_MET_Final_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Final_sumet_ForwardReg", &MET_Final_sumet_ForwardReg, &b_MET_Final_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Final_phi_ForwardReg", &MET_Final_phi_ForwardReg, &b_MET_Final_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Topo_etx", &MET_Topo_etx, &b_MET_Topo_etx);
   fChain->SetBranchAddress("MET_Topo_ety", &MET_Topo_ety, &b_MET_Topo_ety);
   fChain->SetBranchAddress("MET_Topo_phi", &MET_Topo_phi, &b_MET_Topo_phi);
   fChain->SetBranchAddress("MET_Topo_et", &MET_Topo_et, &b_MET_Topo_et);
   fChain->SetBranchAddress("MET_Topo_sumet", &MET_Topo_sumet, &b_MET_Topo_sumet);
   fChain->SetBranchAddress("MET_Topo_SUMET_EMFrac", &MET_Topo_SUMET_EMFrac, &b_MET_Topo_SUMET_EMFrac);
   fChain->SetBranchAddress("MET_Topo_etx_PEMB", &MET_Topo_etx_PEMB, &b_MET_Topo_etx_PEMB);
   fChain->SetBranchAddress("MET_Topo_ety_PEMB", &MET_Topo_ety_PEMB, &b_MET_Topo_ety_PEMB);
   fChain->SetBranchAddress("MET_Topo_sumet_PEMB", &MET_Topo_sumet_PEMB, &b_MET_Topo_sumet_PEMB);
   fChain->SetBranchAddress("MET_Topo_phi_PEMB", &MET_Topo_phi_PEMB, &b_MET_Topo_phi_PEMB);
   fChain->SetBranchAddress("MET_Topo_etx_EMB", &MET_Topo_etx_EMB, &b_MET_Topo_etx_EMB);
   fChain->SetBranchAddress("MET_Topo_ety_EMB", &MET_Topo_ety_EMB, &b_MET_Topo_ety_EMB);
   fChain->SetBranchAddress("MET_Topo_sumet_EMB", &MET_Topo_sumet_EMB, &b_MET_Topo_sumet_EMB);
   fChain->SetBranchAddress("MET_Topo_phi_EMB", &MET_Topo_phi_EMB, &b_MET_Topo_phi_EMB);
   fChain->SetBranchAddress("MET_Topo_etx_PEMEC", &MET_Topo_etx_PEMEC, &b_MET_Topo_etx_PEMEC);
   fChain->SetBranchAddress("MET_Topo_ety_PEMEC", &MET_Topo_ety_PEMEC, &b_MET_Topo_ety_PEMEC);
   fChain->SetBranchAddress("MET_Topo_sumet_PEMEC", &MET_Topo_sumet_PEMEC, &b_MET_Topo_sumet_PEMEC);
   fChain->SetBranchAddress("MET_Topo_phi_PEMEC", &MET_Topo_phi_PEMEC, &b_MET_Topo_phi_PEMEC);
   fChain->SetBranchAddress("MET_Topo_etx_EME", &MET_Topo_etx_EME, &b_MET_Topo_etx_EME);
   fChain->SetBranchAddress("MET_Topo_ety_EME", &MET_Topo_ety_EME, &b_MET_Topo_ety_EME);
   fChain->SetBranchAddress("MET_Topo_sumet_EME", &MET_Topo_sumet_EME, &b_MET_Topo_sumet_EME);
   fChain->SetBranchAddress("MET_Topo_phi_EME", &MET_Topo_phi_EME, &b_MET_Topo_phi_EME);
   fChain->SetBranchAddress("MET_Topo_etx_TILE", &MET_Topo_etx_TILE, &b_MET_Topo_etx_TILE);
   fChain->SetBranchAddress("MET_Topo_ety_TILE", &MET_Topo_ety_TILE, &b_MET_Topo_ety_TILE);
   fChain->SetBranchAddress("MET_Topo_sumet_TILE", &MET_Topo_sumet_TILE, &b_MET_Topo_sumet_TILE);
   fChain->SetBranchAddress("MET_Topo_phi_TILE", &MET_Topo_phi_TILE, &b_MET_Topo_phi_TILE);
   fChain->SetBranchAddress("MET_Topo_etx_HEC", &MET_Topo_etx_HEC, &b_MET_Topo_etx_HEC);
   fChain->SetBranchAddress("MET_Topo_ety_HEC", &MET_Topo_ety_HEC, &b_MET_Topo_ety_HEC);
   fChain->SetBranchAddress("MET_Topo_sumet_HEC", &MET_Topo_sumet_HEC, &b_MET_Topo_sumet_HEC);
   fChain->SetBranchAddress("MET_Topo_phi_HEC", &MET_Topo_phi_HEC, &b_MET_Topo_phi_HEC);
   fChain->SetBranchAddress("MET_Topo_etx_FCAL", &MET_Topo_etx_FCAL, &b_MET_Topo_etx_FCAL);
   fChain->SetBranchAddress("MET_Topo_ety_FCAL", &MET_Topo_ety_FCAL, &b_MET_Topo_ety_FCAL);
   fChain->SetBranchAddress("MET_Topo_sumet_FCAL", &MET_Topo_sumet_FCAL, &b_MET_Topo_sumet_FCAL);
   fChain->SetBranchAddress("MET_Topo_phi_FCAL", &MET_Topo_phi_FCAL, &b_MET_Topo_phi_FCAL);
   fChain->SetBranchAddress("MET_Topo_nCell_PEMB", &MET_Topo_nCell_PEMB, &b_MET_Topo_nCell_PEMB);
   fChain->SetBranchAddress("MET_Topo_nCell_EMB", &MET_Topo_nCell_EMB, &b_MET_Topo_nCell_EMB);
   fChain->SetBranchAddress("MET_Topo_nCell_PEMEC", &MET_Topo_nCell_PEMEC, &b_MET_Topo_nCell_PEMEC);
   fChain->SetBranchAddress("MET_Topo_nCell_EME", &MET_Topo_nCell_EME, &b_MET_Topo_nCell_EME);
   fChain->SetBranchAddress("MET_Topo_nCell_TILE", &MET_Topo_nCell_TILE, &b_MET_Topo_nCell_TILE);
   fChain->SetBranchAddress("MET_Topo_nCell_HEC", &MET_Topo_nCell_HEC, &b_MET_Topo_nCell_HEC);
   fChain->SetBranchAddress("MET_Topo_nCell_FCAL", &MET_Topo_nCell_FCAL, &b_MET_Topo_nCell_FCAL);
   fChain->SetBranchAddress("MET_Topo_etx_CentralReg", &MET_Topo_etx_CentralReg, &b_MET_Topo_etx_CentralReg);
   fChain->SetBranchAddress("MET_Topo_ety_CentralReg", &MET_Topo_ety_CentralReg, &b_MET_Topo_ety_CentralReg);
   fChain->SetBranchAddress("MET_Topo_sumet_CentralReg", &MET_Topo_sumet_CentralReg, &b_MET_Topo_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Topo_phi_CentralReg", &MET_Topo_phi_CentralReg, &b_MET_Topo_phi_CentralReg);
   fChain->SetBranchAddress("MET_Topo_etx_EndcapRegion", &MET_Topo_etx_EndcapRegion, &b_MET_Topo_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_ety_EndcapRegion", &MET_Topo_ety_EndcapRegion, &b_MET_Topo_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_sumet_EndcapRegion", &MET_Topo_sumet_EndcapRegion, &b_MET_Topo_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_phi_EndcapRegion", &MET_Topo_phi_EndcapRegion, &b_MET_Topo_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_etx_ForwardReg", &MET_Topo_etx_ForwardReg, &b_MET_Topo_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Topo_ety_ForwardReg", &MET_Topo_ety_ForwardReg, &b_MET_Topo_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Topo_sumet_ForwardReg", &MET_Topo_sumet_ForwardReg, &b_MET_Topo_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Topo_phi_ForwardReg", &MET_Topo_phi_ForwardReg, &b_MET_Topo_phi_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_etx", &MET_LocHadTopo_etx, &b_MET_LocHadTopo_etx);
   fChain->SetBranchAddress("MET_LocHadTopo_ety", &MET_LocHadTopo_ety, &b_MET_LocHadTopo_ety);
   fChain->SetBranchAddress("MET_LocHadTopo_phi", &MET_LocHadTopo_phi, &b_MET_LocHadTopo_phi);
   fChain->SetBranchAddress("MET_LocHadTopo_et", &MET_LocHadTopo_et, &b_MET_LocHadTopo_et);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet", &MET_LocHadTopo_sumet, &b_MET_LocHadTopo_sumet);
   fChain->SetBranchAddress("MET_LocHadTopo_SUMET_EMFrac", &MET_LocHadTopo_SUMET_EMFrac, &b_MET_LocHadTopo_SUMET_EMFrac);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_PEMB", &MET_LocHadTopo_etx_PEMB, &b_MET_LocHadTopo_etx_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_PEMB", &MET_LocHadTopo_ety_PEMB, &b_MET_LocHadTopo_ety_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_PEMB", &MET_LocHadTopo_sumet_PEMB, &b_MET_LocHadTopo_sumet_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_PEMB", &MET_LocHadTopo_phi_PEMB, &b_MET_LocHadTopo_phi_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EMB", &MET_LocHadTopo_etx_EMB, &b_MET_LocHadTopo_etx_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EMB", &MET_LocHadTopo_ety_EMB, &b_MET_LocHadTopo_ety_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EMB", &MET_LocHadTopo_sumet_EMB, &b_MET_LocHadTopo_sumet_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EMB", &MET_LocHadTopo_phi_EMB, &b_MET_LocHadTopo_phi_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_PEMEC", &MET_LocHadTopo_etx_PEMEC, &b_MET_LocHadTopo_etx_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_PEMEC", &MET_LocHadTopo_ety_PEMEC, &b_MET_LocHadTopo_ety_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_PEMEC", &MET_LocHadTopo_sumet_PEMEC, &b_MET_LocHadTopo_sumet_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_PEMEC", &MET_LocHadTopo_phi_PEMEC, &b_MET_LocHadTopo_phi_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EME", &MET_LocHadTopo_etx_EME, &b_MET_LocHadTopo_etx_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EME", &MET_LocHadTopo_ety_EME, &b_MET_LocHadTopo_ety_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EME", &MET_LocHadTopo_sumet_EME, &b_MET_LocHadTopo_sumet_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EME", &MET_LocHadTopo_phi_EME, &b_MET_LocHadTopo_phi_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_TILE", &MET_LocHadTopo_etx_TILE, &b_MET_LocHadTopo_etx_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_TILE", &MET_LocHadTopo_ety_TILE, &b_MET_LocHadTopo_ety_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_TILE", &MET_LocHadTopo_sumet_TILE, &b_MET_LocHadTopo_sumet_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_TILE", &MET_LocHadTopo_phi_TILE, &b_MET_LocHadTopo_phi_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_HEC", &MET_LocHadTopo_etx_HEC, &b_MET_LocHadTopo_etx_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_HEC", &MET_LocHadTopo_ety_HEC, &b_MET_LocHadTopo_ety_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_HEC", &MET_LocHadTopo_sumet_HEC, &b_MET_LocHadTopo_sumet_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_HEC", &MET_LocHadTopo_phi_HEC, &b_MET_LocHadTopo_phi_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_FCAL", &MET_LocHadTopo_etx_FCAL, &b_MET_LocHadTopo_etx_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_FCAL", &MET_LocHadTopo_ety_FCAL, &b_MET_LocHadTopo_ety_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_FCAL", &MET_LocHadTopo_sumet_FCAL, &b_MET_LocHadTopo_sumet_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_FCAL", &MET_LocHadTopo_phi_FCAL, &b_MET_LocHadTopo_phi_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_PEMB", &MET_LocHadTopo_nCell_PEMB, &b_MET_LocHadTopo_nCell_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_EMB", &MET_LocHadTopo_nCell_EMB, &b_MET_LocHadTopo_nCell_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_PEMEC", &MET_LocHadTopo_nCell_PEMEC, &b_MET_LocHadTopo_nCell_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_EME", &MET_LocHadTopo_nCell_EME, &b_MET_LocHadTopo_nCell_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_TILE", &MET_LocHadTopo_nCell_TILE, &b_MET_LocHadTopo_nCell_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_HEC", &MET_LocHadTopo_nCell_HEC, &b_MET_LocHadTopo_nCell_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_FCAL", &MET_LocHadTopo_nCell_FCAL, &b_MET_LocHadTopo_nCell_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_CentralReg", &MET_LocHadTopo_etx_CentralReg, &b_MET_LocHadTopo_etx_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_CentralReg", &MET_LocHadTopo_ety_CentralReg, &b_MET_LocHadTopo_ety_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_CentralReg", &MET_LocHadTopo_sumet_CentralReg, &b_MET_LocHadTopo_sumet_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_CentralReg", &MET_LocHadTopo_phi_CentralReg, &b_MET_LocHadTopo_phi_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EndcapRegion", &MET_LocHadTopo_etx_EndcapRegion, &b_MET_LocHadTopo_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EndcapRegion", &MET_LocHadTopo_ety_EndcapRegion, &b_MET_LocHadTopo_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EndcapRegion", &MET_LocHadTopo_sumet_EndcapRegion, &b_MET_LocHadTopo_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EndcapRegion", &MET_LocHadTopo_phi_EndcapRegion, &b_MET_LocHadTopo_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_ForwardReg", &MET_LocHadTopo_etx_ForwardReg, &b_MET_LocHadTopo_etx_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_ForwardReg", &MET_LocHadTopo_ety_ForwardReg, &b_MET_LocHadTopo_ety_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_ForwardReg", &MET_LocHadTopo_sumet_ForwardReg, &b_MET_LocHadTopo_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_ForwardReg", &MET_LocHadTopo_phi_ForwardReg, &b_MET_LocHadTopo_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Truth_NonInt_etx", &MET_Truth_NonInt_etx, &b_MET_Truth_NonInt_etx);
   fChain->SetBranchAddress("MET_Truth_NonInt_ety", &MET_Truth_NonInt_ety, &b_MET_Truth_NonInt_ety);
   fChain->SetBranchAddress("MET_Truth_NonInt_phi", &MET_Truth_NonInt_phi, &b_MET_Truth_NonInt_phi);
   fChain->SetBranchAddress("MET_Truth_NonInt_et", &MET_Truth_NonInt_et, &b_MET_Truth_NonInt_et);
   fChain->SetBranchAddress("MET_Truth_NonInt_sumet", &MET_Truth_NonInt_sumet, &b_MET_Truth_NonInt_sumet);
   fChain->SetBranchAddress("EF_2e12Tvh_medium", &EF_2e12Tvh_medium, &b_EF_2e12Tvh_medium);
   fChain->SetBranchAddress("EF_2e15vh_loose1_Zee", &EF_2e15vh_loose1_Zee, &b_EF_2e15vh_loose1_Zee);
   fChain->SetBranchAddress("EF_2e15vh_loose_Zee", &EF_2e15vh_loose_Zee, &b_EF_2e15vh_loose_Zee);
   fChain->SetBranchAddress("EF_2e15vh_medium", &EF_2e15vh_medium, &b_EF_2e15vh_medium);
   fChain->SetBranchAddress("EF_2mu4T_xe30_noMu", &EF_2mu4T_xe30_noMu, &b_EF_2mu4T_xe30_noMu);
   fChain->SetBranchAddress("EF_2mu4T_xe40_noMu", &EF_2mu4T_xe40_noMu, &b_EF_2mu4T_xe40_noMu);
   fChain->SetBranchAddress("EF_e10_etcut_mu10", &EF_e10_etcut_mu10, &b_EF_e10_etcut_mu10);
   fChain->SetBranchAddress("EF_e10_loose1", &EF_e10_loose1, &b_EF_e10_loose1);
   fChain->SetBranchAddress("EF_e12Tvh_medium", &EF_e12Tvh_medium, &b_EF_e12Tvh_medium);
   fChain->SetBranchAddress("EF_e12Tvh_medium_2e6T_medium", &EF_e12Tvh_medium_2e6T_medium, &b_EF_e12Tvh_medium_2e6T_medium);
   fChain->SetBranchAddress("EF_e12Tvh_medium_mu6", &EF_e12Tvh_medium_mu6, &b_EF_e12Tvh_medium_mu6);
   fChain->SetBranchAddress("EF_e12Tvh_medium_mu6_topo_medium", &EF_e12Tvh_medium_mu6_topo_medium, &b_EF_e12Tvh_medium_mu6_topo_medium);
   fChain->SetBranchAddress("EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20", &EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20, &b_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20);
   fChain->SetBranchAddress("EF_e13_etcutTrk_xs60_noMu", &EF_e13_etcutTrk_xs60_noMu, &b_EF_e13_etcutTrk_xs60_noMu);
   fChain->SetBranchAddress("EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07", &EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07, &b_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07);
   fChain->SetBranchAddress("EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20", &EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20, &b_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20);
   fChain->SetBranchAddress("EF_e14_tight_e4_etcut_Jpsi", &EF_e14_tight_e4_etcut_Jpsi, &b_EF_e14_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("EF_e15vh_loose1_e12Tvh_loose1_Zee", &EF_e15vh_loose1_e12Tvh_loose1_Zee, &b_EF_e15vh_loose1_e12Tvh_loose1_Zee);
   fChain->SetBranchAddress("EF_e15vh_medium", &EF_e15vh_medium, &b_EF_e15vh_medium);
   fChain->SetBranchAddress("EF_e15vh_medium_xe40_noMu", &EF_e15vh_medium_xe40_noMu, &b_EF_e15vh_medium_xe40_noMu);
   fChain->SetBranchAddress("EF_e15vh_medium_xe50_noMu", &EF_e15vh_medium_xe50_noMu, &b_EF_e15vh_medium_xe50_noMu);
   fChain->SetBranchAddress("EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20", &EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20, &b_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20);
   fChain->SetBranchAddress("EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07", &EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07, &b_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07);
   fChain->SetBranchAddress("EF_e22_etcut_e10_loose1", &EF_e22_etcut_e10_loose1, &b_EF_e22_etcut_e10_loose1);
   fChain->SetBranchAddress("EF_e22_etcut_mu10", &EF_e22_etcut_mu10, &b_EF_e22_etcut_mu10);
   fChain->SetBranchAddress("EF_e22_loose1_e10_etcut", &EF_e22_loose1_e10_etcut, &b_EF_e22_loose1_e10_etcut);
   fChain->SetBranchAddress("EF_e22i6vh_medium2", &EF_e22i6vh_medium2, &b_EF_e22i6vh_medium2);
   fChain->SetBranchAddress("EF_e22vh_loose", &EF_e22vh_loose, &b_EF_e22vh_loose);
   fChain->SetBranchAddress("EF_e22vh_loose1", &EF_e22vh_loose1, &b_EF_e22vh_loose1);
   fChain->SetBranchAddress("EF_e22vh_loose1_e10_loose1", &EF_e22vh_loose1_e10_loose1, &b_EF_e22vh_loose1_e10_loose1);
   fChain->SetBranchAddress("EF_e22vh_looseTrk", &EF_e22vh_looseTrk, &b_EF_e22vh_looseTrk);
   fChain->SetBranchAddress("EF_e22vh_loose_2j20_a4tc_EFFS", &EF_e22vh_loose_2j20_a4tc_EFFS, &b_EF_e22vh_loose_2j20_a4tc_EFFS);
   fChain->SetBranchAddress("EF_e22vh_loose_3L1J10", &EF_e22vh_loose_3L1J10, &b_EF_e22vh_loose_3L1J10);
   fChain->SetBranchAddress("EF_e22vh_loose_3j20_a4tc_EFFS", &EF_e22vh_loose_3j20_a4tc_EFFS, &b_EF_e22vh_loose_3j20_a4tc_EFFS);
   fChain->SetBranchAddress("EF_e22vh_loose_4L1J10", &EF_e22vh_loose_4L1J10, &b_EF_e22vh_loose_4L1J10);
   fChain->SetBranchAddress("EF_e22vh_loose_4j15_a4tc_EFFS", &EF_e22vh_loose_4j15_a4tc_EFFS, &b_EF_e22vh_loose_4j15_a4tc_EFFS);
   fChain->SetBranchAddress("EF_e22vh_medium", &EF_e22vh_medium, &b_EF_e22vh_medium);
   fChain->SetBranchAddress("EF_e22vh_medium1", &EF_e22vh_medium1, &b_EF_e22vh_medium1);
   fChain->SetBranchAddress("EF_e22vh_medium1_3j10_a4tc_EFFS", &EF_e22vh_medium1_3j10_a4tc_EFFS, &b_EF_e22vh_medium1_3j10_a4tc_EFFS);
   fChain->SetBranchAddress("EF_e22vh_medium1_3j15_a4tc_EFFS", &EF_e22vh_medium1_3j15_a4tc_EFFS, &b_EF_e22vh_medium1_3j15_a4tc_EFFS);
   fChain->SetBranchAddress("EF_e22vh_medium1_4j10_a4tc_EFFS", &EF_e22vh_medium1_4j10_a4tc_EFFS, &b_EF_e22vh_medium1_4j10_a4tc_EFFS);
   fChain->SetBranchAddress("EF_e22vh_medium1_EFxe20_noMu", &EF_e22vh_medium1_EFxe20_noMu, &b_EF_e22vh_medium1_EFxe20_noMu);
   fChain->SetBranchAddress("EF_e22vh_medium1_EFxe30_noMu", &EF_e22vh_medium1_EFxe30_noMu, &b_EF_e22vh_medium1_EFxe30_noMu);
   fChain->SetBranchAddress("EF_e22vh_medium1_EFxe40_noMu", &EF_e22vh_medium1_EFxe40_noMu, &b_EF_e22vh_medium1_EFxe40_noMu);
   fChain->SetBranchAddress("EF_e22vh_medium1_mu10_EFFS", &EF_e22vh_medium1_mu10_EFFS, &b_EF_e22vh_medium1_mu10_EFFS);
   fChain->SetBranchAddress("EF_e22vh_medium2", &EF_e22vh_medium2, &b_EF_e22vh_medium2);
   fChain->SetBranchAddress("EF_e22vh_medium_IDTrkNoCut", &EF_e22vh_medium_IDTrkNoCut, &b_EF_e22vh_medium_IDTrkNoCut);
   fChain->SetBranchAddress("EF_e22vh_medium_SiTrk", &EF_e22vh_medium_SiTrk, &b_EF_e22vh_medium_SiTrk);
   fChain->SetBranchAddress("EF_e22vh_medium_TRT", &EF_e22vh_medium_TRT, &b_EF_e22vh_medium_TRT);
   fChain->SetBranchAddress("EF_e25_loose2_xe20_noMu_recoil40", &EF_e25_loose2_xe20_noMu_recoil40, &b_EF_e25_loose2_xe20_noMu_recoil40);
   fChain->SetBranchAddress("EF_e25i5vh_medium2", &EF_e25i5vh_medium2, &b_EF_e25i5vh_medium2);
   fChain->SetBranchAddress("EF_e25i6vh_medium2", &EF_e25i6vh_medium2, &b_EF_e25i6vh_medium2);
   fChain->SetBranchAddress("EF_e25vh_medium1", &EF_e25vh_medium1, &b_EF_e25vh_medium1);
   fChain->SetBranchAddress("EF_e30vh_medium2", &EF_e30vh_medium2, &b_EF_e30vh_medium2);
   fChain->SetBranchAddress("EF_e9_tight_e4_etcut_Jpsi", &EF_e9_tight_e4_etcut_Jpsi, &b_EF_e9_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("EF_g200_etcut", &EF_g200_etcut, &b_EF_g200_etcut);
   fChain->SetBranchAddress("EF_j70_a4tc_EFFS_xe70_noMu_dphi2j30xe10", &EF_j70_a4tc_EFFS_xe70_noMu_dphi2j30xe10, &b_EF_j70_a4tc_EFFS_xe70_noMu_dphi2j30xe10);
   fChain->SetBranchAddress("EF_j75_j45_a4tc_EFFS_xe55_noMu", &EF_j75_j45_a4tc_EFFS_xe55_noMu, &b_EF_j75_j45_a4tc_EFFS_xe55_noMu);
   fChain->SetBranchAddress("EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu", &EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu, &b_EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu);
   fChain->SetBranchAddress("EF_mu4T_j45_a4tc_EFFS_xe55_noMu", &EF_mu4T_j45_a4tc_EFFS_xe55_noMu, &b_EF_mu4T_j45_a4tc_EFFS_xe55_noMu);
   fChain->SetBranchAddress("EF_tau29T_medium1_xe35_noMu_3L1J10", &EF_tau29T_medium1_xe35_noMu_3L1J10, &b_EF_tau29T_medium1_xe35_noMu_3L1J10);
   fChain->SetBranchAddress("EF_tau29T_medium_xe35_noMu_3L1J10", &EF_tau29T_medium_xe35_noMu_3L1J10, &b_EF_tau29T_medium_xe35_noMu_3L1J10);
   fChain->SetBranchAddress("EF_tau29T_medium_xe40_tight_noMu", &EF_tau29T_medium_xe40_tight_noMu, &b_EF_tau29T_medium_xe40_tight_noMu);
   fChain->SetBranchAddress("EF_xe100_noMu", &EF_xe100_noMu, &b_EF_xe100_noMu);
   fChain->SetBranchAddress("EF_xe100_tight_noMu", &EF_xe100_tight_noMu, &b_EF_xe100_tight_noMu);
   fChain->SetBranchAddress("EF_xe110_noMu", &EF_xe110_noMu, &b_EF_xe110_noMu);
   fChain->SetBranchAddress("EF_xe60_L2FEB_val", &EF_xe60_L2FEB_val, &b_EF_xe60_L2FEB_val);
   fChain->SetBranchAddress("EF_xe60_tight_L2FEB_val", &EF_xe60_tight_L2FEB_val, &b_EF_xe60_tight_L2FEB_val);
   fChain->SetBranchAddress("EF_xe80_tight_noMu", &EF_xe80_tight_noMu, &b_EF_xe80_tight_noMu);
   fChain->SetBranchAddress("EF_xe90_tight_noMu", &EF_xe90_tight_noMu, &b_EF_xe90_tight_noMu);
   fChain->SetBranchAddress("L1_2EM10VH", &L1_2EM10VH, &b_L1_2EM10VH);
   fChain->SetBranchAddress("L1_2EM12", &L1_2EM12, &b_L1_2EM12);
   fChain->SetBranchAddress("L1_2EM5_EM16VH", &L1_2EM5_EM16VH, &b_L1_2EM5_EM16VH);
   fChain->SetBranchAddress("L1_2MU4", &L1_2MU4, &b_L1_2MU4);
   fChain->SetBranchAddress("L1_EM10VH", &L1_EM10VH, &b_L1_EM10VH);
   fChain->SetBranchAddress("L1_EM10VH_MU6", &L1_EM10VH_MU6, &b_L1_EM10VH_MU6);
   fChain->SetBranchAddress("L1_EM10VH_XE20", &L1_EM10VH_XE20, &b_L1_EM10VH_XE20);
   fChain->SetBranchAddress("L1_EM10VH_XE30", &L1_EM10VH_XE30, &b_L1_EM10VH_XE30);
   fChain->SetBranchAddress("L1_EM10VH_XE35", &L1_EM10VH_XE35, &b_L1_EM10VH_XE35);
   fChain->SetBranchAddress("L1_EM12_3J10", &L1_EM12_3J10, &b_L1_EM12_3J10);
   fChain->SetBranchAddress("L1_EM12_4J10", &L1_EM12_4J10, &b_L1_EM12_4J10);
   fChain->SetBranchAddress("L1_EM12_XE20", &L1_EM12_XE20, &b_L1_EM12_XE20);
   fChain->SetBranchAddress("L1_EM12_XE30", &L1_EM12_XE30, &b_L1_EM12_XE30);
   fChain->SetBranchAddress("L1_EM12_XS30", &L1_EM12_XS30, &b_L1_EM12_XS30);
   fChain->SetBranchAddress("L1_EM12_XS45", &L1_EM12_XS45, &b_L1_EM12_XS45);
   fChain->SetBranchAddress("L1_EM16VH", &L1_EM16VH, &b_L1_EM16VH);
   fChain->SetBranchAddress("L1_EM18VH", &L1_EM18VH, &b_L1_EM18VH);
   fChain->SetBranchAddress("L1_EM7_XS30", &L1_EM7_XS30, &b_L1_EM7_XS30);
   fChain->SetBranchAddress("L1_EM7_XS45", &L1_EM7_XS45, &b_L1_EM7_XS45);
   fChain->SetBranchAddress("L1_MU10_XE25", &L1_MU10_XE25, &b_L1_MU10_XE25);
   fChain->SetBranchAddress("L1_MU4_J20_XE20", &L1_MU4_J20_XE20, &b_L1_MU4_J20_XE20);
   fChain->SetBranchAddress("L1_MU4_J20_XE35", &L1_MU4_J20_XE35, &b_L1_MU4_J20_XE35);
   fChain->SetBranchAddress("L1_TAU15_XE25_3J10", &L1_TAU15_XE25_3J10, &b_L1_TAU15_XE25_3J10);
   fChain->SetBranchAddress("L1_TAU15_XE25_3J10_J30", &L1_TAU15_XE25_3J10_J30, &b_L1_TAU15_XE25_3J10_J30);
   fChain->SetBranchAddress("L1_TAU15_XE35", &L1_TAU15_XE35, &b_L1_TAU15_XE35);
   fChain->SetBranchAddress("L2_2e12Tvh_medium", &L2_2e12Tvh_medium, &b_L2_2e12Tvh_medium);
   fChain->SetBranchAddress("L2_2e15vh_loose1_Zee", &L2_2e15vh_loose1_Zee, &b_L2_2e15vh_loose1_Zee);
   fChain->SetBranchAddress("L2_2e15vh_loose_Zee", &L2_2e15vh_loose_Zee, &b_L2_2e15vh_loose_Zee);
   fChain->SetBranchAddress("L2_2e15vh_medium", &L2_2e15vh_medium, &b_L2_2e15vh_medium);
   fChain->SetBranchAddress("L2_2mu4T_xe20_noMu", &L2_2mu4T_xe20_noMu, &b_L2_2mu4T_xe20_noMu);
   fChain->SetBranchAddress("L2_2mu4T_xe25_noMu", &L2_2mu4T_xe25_noMu, &b_L2_2mu4T_xe25_noMu);
   fChain->SetBranchAddress("L2_e10_etcut_mu10", &L2_e10_etcut_mu10, &b_L2_e10_etcut_mu10);
   fChain->SetBranchAddress("L2_e10_loose1", &L2_e10_loose1, &b_L2_e10_loose1);
   fChain->SetBranchAddress("L2_e12Tvh_medium", &L2_e12Tvh_medium, &b_L2_e12Tvh_medium);
   fChain->SetBranchAddress("L2_e12Tvh_medium_2e6T_medium", &L2_e12Tvh_medium_2e6T_medium, &b_L2_e12Tvh_medium_2e6T_medium);
   fChain->SetBranchAddress("L2_e12Tvh_medium_mu6", &L2_e12Tvh_medium_mu6, &b_L2_e12Tvh_medium_mu6);
   fChain->SetBranchAddress("L2_e12Tvh_medium_mu6_topo_medium", &L2_e12Tvh_medium_mu6_topo_medium, &b_L2_e12Tvh_medium_mu6_topo_medium);
   fChain->SetBranchAddress("L2_e13_etcutTrk_xs30_noMu", &L2_e13_etcutTrk_xs30_noMu, &b_L2_e13_etcutTrk_xs30_noMu);
   fChain->SetBranchAddress("L2_e13_etcutTrk_xs45_noMu", &L2_e13_etcutTrk_xs45_noMu, &b_L2_e13_etcutTrk_xs45_noMu);
   fChain->SetBranchAddress("L2_e14_tight_e4_etcut_Jpsi", &L2_e14_tight_e4_etcut_Jpsi, &b_L2_e14_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("L2_e15vh_loose1_e12Tvh_loose1_Zee", &L2_e15vh_loose1_e12Tvh_loose1_Zee, &b_L2_e15vh_loose1_e12Tvh_loose1_Zee);
   fChain->SetBranchAddress("L2_e15vh_medium", &L2_e15vh_medium, &b_L2_e15vh_medium);
   fChain->SetBranchAddress("L2_e15vh_medium_xe30_noMu", &L2_e15vh_medium_xe30_noMu, &b_L2_e15vh_medium_xe30_noMu);
   fChain->SetBranchAddress("L2_e15vh_medium_xe35_noMu", &L2_e15vh_medium_xe35_noMu, &b_L2_e15vh_medium_xe35_noMu);
   fChain->SetBranchAddress("L2_e20_etcutTrk_xe25_noMu", &L2_e20_etcutTrk_xe25_noMu, &b_L2_e20_etcutTrk_xe25_noMu);
   fChain->SetBranchAddress("L2_e20_etcutTrk_xs45_noMu", &L2_e20_etcutTrk_xs45_noMu, &b_L2_e20_etcutTrk_xs45_noMu);
   fChain->SetBranchAddress("L2_e22_etcut_e10_loose1", &L2_e22_etcut_e10_loose1, &b_L2_e22_etcut_e10_loose1);
   fChain->SetBranchAddress("L2_e22_etcut_mu10", &L2_e22_etcut_mu10, &b_L2_e22_etcut_mu10);
   fChain->SetBranchAddress("L2_e22_loose1_e10_etcut", &L2_e22_loose1_e10_etcut, &b_L2_e22_loose1_e10_etcut);
   fChain->SetBranchAddress("L2_e22i6vh_medium2", &L2_e22i6vh_medium2, &b_L2_e22i6vh_medium2);
   fChain->SetBranchAddress("L2_e22vh_loose", &L2_e22vh_loose, &b_L2_e22vh_loose);
   fChain->SetBranchAddress("L2_e22vh_loose1", &L2_e22vh_loose1, &b_L2_e22vh_loose1);
   fChain->SetBranchAddress("L2_e22vh_loose1_e10_loose1", &L2_e22vh_loose1_e10_loose1, &b_L2_e22vh_loose1_e10_loose1);
   fChain->SetBranchAddress("L2_e22vh_looseTrk", &L2_e22vh_looseTrk, &b_L2_e22vh_looseTrk);
   fChain->SetBranchAddress("L2_e22vh_loose_2j20_a4tc_EFFS", &L2_e22vh_loose_2j20_a4tc_EFFS, &b_L2_e22vh_loose_2j20_a4tc_EFFS);
   fChain->SetBranchAddress("L2_e22vh_loose_3L1J10", &L2_e22vh_loose_3L1J10, &b_L2_e22vh_loose_3L1J10);
   fChain->SetBranchAddress("L2_e22vh_loose_3j20_a4tc_EFFS", &L2_e22vh_loose_3j20_a4tc_EFFS, &b_L2_e22vh_loose_3j20_a4tc_EFFS);
   fChain->SetBranchAddress("L2_e22vh_loose_4L1J10", &L2_e22vh_loose_4L1J10, &b_L2_e22vh_loose_4L1J10);
   fChain->SetBranchAddress("L2_e22vh_loose_4j15_a4tc_EFFS", &L2_e22vh_loose_4j15_a4tc_EFFS, &b_L2_e22vh_loose_4j15_a4tc_EFFS);
   fChain->SetBranchAddress("L2_e22vh_medium", &L2_e22vh_medium, &b_L2_e22vh_medium);
   fChain->SetBranchAddress("L2_e22vh_medium1", &L2_e22vh_medium1, &b_L2_e22vh_medium1);
   fChain->SetBranchAddress("L2_e22vh_medium1_EFxe20_noMu", &L2_e22vh_medium1_EFxe20_noMu, &b_L2_e22vh_medium1_EFxe20_noMu);
   fChain->SetBranchAddress("L2_e22vh_medium1_EFxe30_noMu", &L2_e22vh_medium1_EFxe30_noMu, &b_L2_e22vh_medium1_EFxe30_noMu);
   fChain->SetBranchAddress("L2_e22vh_medium1_EFxe40_noMu", &L2_e22vh_medium1_EFxe40_noMu, &b_L2_e22vh_medium1_EFxe40_noMu);
   fChain->SetBranchAddress("L2_e22vh_medium1_mu10_EFFS", &L2_e22vh_medium1_mu10_EFFS, &b_L2_e22vh_medium1_mu10_EFFS);
   fChain->SetBranchAddress("L2_e22vh_medium2", &L2_e22vh_medium2, &b_L2_e22vh_medium2);
   fChain->SetBranchAddress("L2_e22vh_medium_IDTrkNoCut", &L2_e22vh_medium_IDTrkNoCut, &b_L2_e22vh_medium_IDTrkNoCut);
   fChain->SetBranchAddress("L2_e22vh_medium_SiTrk", &L2_e22vh_medium_SiTrk, &b_L2_e22vh_medium_SiTrk);
   fChain->SetBranchAddress("L2_e22vh_medium_TRT", &L2_e22vh_medium_TRT, &b_L2_e22vh_medium_TRT);
   fChain->SetBranchAddress("L2_e25_loose2_xe20_noL2", &L2_e25_loose2_xe20_noL2, &b_L2_e25_loose2_xe20_noL2);
   fChain->SetBranchAddress("L2_e25i5vh_medium2", &L2_e25i5vh_medium2, &b_L2_e25i5vh_medium2);
   fChain->SetBranchAddress("L2_e25i6vh_medium2", &L2_e25i6vh_medium2, &b_L2_e25i6vh_medium2);
   fChain->SetBranchAddress("L2_e25vh_medium1", &L2_e25vh_medium1, &b_L2_e25vh_medium1);
   fChain->SetBranchAddress("L2_e30vh_medium2", &L2_e30vh_medium2, &b_L2_e30vh_medium2);
   fChain->SetBranchAddress("L2_e9_tight_e4_etcut_Jpsi", &L2_e9_tight_e4_etcut_Jpsi, &b_L2_e9_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("L2_g200_etcut", &L2_g200_etcut, &b_L2_g200_etcut);
   fChain->SetBranchAddress("L2_j65_xe50_noMu", &L2_j65_xe50_noMu, &b_L2_j65_xe50_noMu);
   fChain->SetBranchAddress("L2_j70_j40_xe35_noMu", &L2_j70_j40_xe35_noMu, &b_L2_j70_j40_xe35_noMu);
   fChain->SetBranchAddress("L2_mu4T_j40_xe20_loose_noMu", &L2_mu4T_j40_xe20_loose_noMu, &b_L2_mu4T_j40_xe20_loose_noMu);
   fChain->SetBranchAddress("L2_mu4T_j40_xe35_noMu", &L2_mu4T_j40_xe35_noMu, &b_L2_mu4T_j40_xe35_noMu);
   fChain->SetBranchAddress("L2_tau29T_medium1_xe25_noMu_3L1J10", &L2_tau29T_medium1_xe25_noMu_3L1J10, &b_L2_tau29T_medium1_xe25_noMu_3L1J10);
   fChain->SetBranchAddress("L2_tau29T_medium_xe25_noMu_3L1J10", &L2_tau29T_medium_xe25_noMu_3L1J10, &b_L2_tau29T_medium_xe25_noMu_3L1J10);
   fChain->SetBranchAddress("L2_tau29T_medium_xe35_tight_noMu", &L2_tau29T_medium_xe35_tight_noMu, &b_L2_tau29T_medium_xe35_tight_noMu);
   fChain->SetBranchAddress("L2_xe40_L2FEB_val", &L2_xe40_L2FEB_val, &b_L2_xe40_L2FEB_val);
   fChain->SetBranchAddress("L2_xe50_L2FEB_val", &L2_xe50_L2FEB_val, &b_L2_xe50_L2FEB_val);
   fChain->SetBranchAddress("L2_xe65_noMu", &L2_xe65_noMu, &b_L2_xe65_noMu);
   fChain->SetBranchAddress("L2_xe75_noMu", &L2_xe75_noMu, &b_L2_xe75_noMu);
   fChain->SetBranchAddress("L2_xe80_noMu", &L2_xe80_noMu, &b_L2_xe80_noMu);
   fChain->SetBranchAddress("L2_xe85_noMu", &L2_xe85_noMu, &b_L2_xe85_noMu);
   fChain->SetBranchAddress("L2_xe90_noMu", &L2_xe90_noMu, &b_L2_xe90_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_2e12Tvh_medium", &trig_L2_el_L2_2e12Tvh_medium, &b_trig_L2_el_L2_2e12Tvh_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_2e15vh_loose1_Zee", &trig_L2_el_L2_2e15vh_loose1_Zee, &b_trig_L2_el_L2_2e15vh_loose1_Zee);
   fChain->SetBranchAddress("trig_L2_el_L2_2e15vh_loose_Zee", &trig_L2_el_L2_2e15vh_loose_Zee, &b_trig_L2_el_L2_2e15vh_loose_Zee);
   fChain->SetBranchAddress("trig_L2_el_L2_2e15vh_medium", &trig_L2_el_L2_2e15vh_medium, &b_trig_L2_el_L2_2e15vh_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e10_etcut_mu10", &trig_L2_el_L2_e10_etcut_mu10, &b_trig_L2_el_L2_e10_etcut_mu10);
   fChain->SetBranchAddress("trig_L2_el_L2_e10_loose1", &trig_L2_el_L2_e10_loose1, &b_trig_L2_el_L2_e10_loose1);
   fChain->SetBranchAddress("trig_L2_el_L2_e12Tvh_medium", &trig_L2_el_L2_e12Tvh_medium, &b_trig_L2_el_L2_e12Tvh_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e12Tvh_medium_2e6T_medium", &trig_L2_el_L2_e12Tvh_medium_2e6T_medium, &b_trig_L2_el_L2_e12Tvh_medium_2e6T_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e12Tvh_medium_mu6", &trig_L2_el_L2_e12Tvh_medium_mu6, &b_trig_L2_el_L2_e12Tvh_medium_mu6);
   fChain->SetBranchAddress("trig_L2_el_L2_e12Tvh_medium_mu6_topo_medium", &trig_L2_el_L2_e12Tvh_medium_mu6_topo_medium, &b_trig_L2_el_L2_e12Tvh_medium_mu6_topo_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e13_etcutTrk_xs30_noMu", &trig_L2_el_L2_e13_etcutTrk_xs30_noMu, &b_trig_L2_el_L2_e13_etcutTrk_xs30_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e13_etcutTrk_xs45_noMu", &trig_L2_el_L2_e13_etcutTrk_xs45_noMu, &b_trig_L2_el_L2_e13_etcutTrk_xs45_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e14_tight_e4_etcut_Jpsi", &trig_L2_el_L2_e14_tight_e4_etcut_Jpsi, &b_trig_L2_el_L2_e14_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("trig_L2_el_L2_e15vh_loose1_e12Tvh_loose1_Zee", &trig_L2_el_L2_e15vh_loose1_e12Tvh_loose1_Zee, &b_trig_L2_el_L2_e15vh_loose1_e12Tvh_loose1_Zee);
   fChain->SetBranchAddress("trig_L2_el_L2_e15vh_medium", &trig_L2_el_L2_e15vh_medium, &b_trig_L2_el_L2_e15vh_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e15vh_medium_xe30_noMu", &trig_L2_el_L2_e15vh_medium_xe30_noMu, &b_trig_L2_el_L2_e15vh_medium_xe30_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e15vh_medium_xe35_noMu", &trig_L2_el_L2_e15vh_medium_xe35_noMu, &b_trig_L2_el_L2_e15vh_medium_xe35_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_etcutTrk_xe25_noMu", &trig_L2_el_L2_e20_etcutTrk_xe25_noMu, &b_trig_L2_el_L2_e20_etcutTrk_xe25_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e20_etcutTrk_xs45_noMu", &trig_L2_el_L2_e20_etcutTrk_xs45_noMu, &b_trig_L2_el_L2_e20_etcutTrk_xs45_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_etcut_e10_loose1", &trig_L2_el_L2_e22_etcut_e10_loose1, &b_trig_L2_el_L2_e22_etcut_e10_loose1);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_etcut_mu10", &trig_L2_el_L2_e22_etcut_mu10, &b_trig_L2_el_L2_e22_etcut_mu10);
   fChain->SetBranchAddress("trig_L2_el_L2_e22_loose1_e10_etcut", &trig_L2_el_L2_e22_loose1_e10_etcut, &b_trig_L2_el_L2_e22_loose1_e10_etcut);
   fChain->SetBranchAddress("trig_L2_el_L2_e22i6vh_medium2", &trig_L2_el_L2_e22i6vh_medium2, &b_trig_L2_el_L2_e22i6vh_medium2);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_loose", &trig_L2_el_L2_e22vh_loose, &b_trig_L2_el_L2_e22vh_loose);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_loose1", &trig_L2_el_L2_e22vh_loose1, &b_trig_L2_el_L2_e22vh_loose1);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_loose1_e10_loose1", &trig_L2_el_L2_e22vh_loose1_e10_loose1, &b_trig_L2_el_L2_e22vh_loose1_e10_loose1);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_looseTrk", &trig_L2_el_L2_e22vh_looseTrk, &b_trig_L2_el_L2_e22vh_looseTrk);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_loose_2j20_a4tc_EFFS", &trig_L2_el_L2_e22vh_loose_2j20_a4tc_EFFS, &b_trig_L2_el_L2_e22vh_loose_2j20_a4tc_EFFS);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_loose_3L1J10", &trig_L2_el_L2_e22vh_loose_3L1J10, &b_trig_L2_el_L2_e22vh_loose_3L1J10);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_loose_3j20_a4tc_EFFS", &trig_L2_el_L2_e22vh_loose_3j20_a4tc_EFFS, &b_trig_L2_el_L2_e22vh_loose_3j20_a4tc_EFFS);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_loose_4L1J10", &trig_L2_el_L2_e22vh_loose_4L1J10, &b_trig_L2_el_L2_e22vh_loose_4L1J10);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_loose_4j15_a4tc_EFFS", &trig_L2_el_L2_e22vh_loose_4j15_a4tc_EFFS, &b_trig_L2_el_L2_e22vh_loose_4j15_a4tc_EFFS);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_medium", &trig_L2_el_L2_e22vh_medium, &b_trig_L2_el_L2_e22vh_medium);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_medium1", &trig_L2_el_L2_e22vh_medium1, &b_trig_L2_el_L2_e22vh_medium1);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_medium1_EFxe20_noMu", &trig_L2_el_L2_e22vh_medium1_EFxe20_noMu, &b_trig_L2_el_L2_e22vh_medium1_EFxe20_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_medium1_EFxe30_noMu", &trig_L2_el_L2_e22vh_medium1_EFxe30_noMu, &b_trig_L2_el_L2_e22vh_medium1_EFxe30_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_medium1_EFxe40_noMu", &trig_L2_el_L2_e22vh_medium1_EFxe40_noMu, &b_trig_L2_el_L2_e22vh_medium1_EFxe40_noMu);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_medium1_mu10_EFFS", &trig_L2_el_L2_e22vh_medium1_mu10_EFFS, &b_trig_L2_el_L2_e22vh_medium1_mu10_EFFS);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_medium2", &trig_L2_el_L2_e22vh_medium2, &b_trig_L2_el_L2_e22vh_medium2);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_medium_IDTrkNoCut", &trig_L2_el_L2_e22vh_medium_IDTrkNoCut, &b_trig_L2_el_L2_e22vh_medium_IDTrkNoCut);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_medium_SiTrk", &trig_L2_el_L2_e22vh_medium_SiTrk, &b_trig_L2_el_L2_e22vh_medium_SiTrk);
   fChain->SetBranchAddress("trig_L2_el_L2_e22vh_medium_TRT", &trig_L2_el_L2_e22vh_medium_TRT, &b_trig_L2_el_L2_e22vh_medium_TRT);
   fChain->SetBranchAddress("trig_L2_el_L2_e25_loose2_xe20_noL2", &trig_L2_el_L2_e25_loose2_xe20_noL2, &b_trig_L2_el_L2_e25_loose2_xe20_noL2);
   fChain->SetBranchAddress("trig_L2_el_L2_e25i5vh_medium2", &trig_L2_el_L2_e25i5vh_medium2, &b_trig_L2_el_L2_e25i5vh_medium2);
   fChain->SetBranchAddress("trig_L2_el_L2_e25i6vh_medium2", &trig_L2_el_L2_e25i6vh_medium2, &b_trig_L2_el_L2_e25i6vh_medium2);
   fChain->SetBranchAddress("trig_L2_el_L2_e25vh_medium1", &trig_L2_el_L2_e25vh_medium1, &b_trig_L2_el_L2_e25vh_medium1);
   fChain->SetBranchAddress("trig_L2_el_L2_e30vh_medium2", &trig_L2_el_L2_e30vh_medium2, &b_trig_L2_el_L2_e30vh_medium2);
   fChain->SetBranchAddress("trig_L2_el_L2_e9_tight_e4_etcut_Jpsi", &trig_L2_el_L2_e9_tight_e4_etcut_Jpsi, &b_trig_L2_el_L2_e9_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("trig_L2_ph_L2_g200_etcut", &trig_L2_ph_L2_g200_etcut, &b_trig_L2_ph_L2_g200_etcut);
   fChain->SetBranchAddress("trig_EF_el_EF_2e12Tvh_medium", &trig_EF_el_EF_2e12Tvh_medium, &b_trig_EF_el_EF_2e12Tvh_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_2e15vh_loose1_Zee", &trig_EF_el_EF_2e15vh_loose1_Zee, &b_trig_EF_el_EF_2e15vh_loose1_Zee);
   fChain->SetBranchAddress("trig_EF_el_EF_2e15vh_loose_Zee", &trig_EF_el_EF_2e15vh_loose_Zee, &b_trig_EF_el_EF_2e15vh_loose_Zee);
   fChain->SetBranchAddress("trig_EF_el_EF_2e15vh_medium", &trig_EF_el_EF_2e15vh_medium, &b_trig_EF_el_EF_2e15vh_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_etcut_mu10", &trig_EF_el_EF_e10_etcut_mu10, &b_trig_EF_el_EF_e10_etcut_mu10);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_loose1", &trig_EF_el_EF_e10_loose1, &b_trig_EF_el_EF_e10_loose1);
   fChain->SetBranchAddress("trig_EF_el_EF_e12Tvh_medium", &trig_EF_el_EF_e12Tvh_medium, &b_trig_EF_el_EF_e12Tvh_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e12Tvh_medium_2e6T_medium", &trig_EF_el_EF_e12Tvh_medium_2e6T_medium, &b_trig_EF_el_EF_e12Tvh_medium_2e6T_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e12Tvh_medium_mu6", &trig_EF_el_EF_e12Tvh_medium_mu6, &b_trig_EF_el_EF_e12Tvh_medium_mu6);
   fChain->SetBranchAddress("trig_EF_el_EF_e12Tvh_medium_mu6_topo_medium", &trig_EF_el_EF_e12Tvh_medium_mu6_topo_medium, &b_trig_EF_el_EF_e12Tvh_medium_mu6_topo_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20", &trig_EF_el_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20, &b_trig_EF_el_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20);
   fChain->SetBranchAddress("trig_EF_el_EF_e13_etcutTrk_xs60_noMu", &trig_EF_el_EF_e13_etcutTrk_xs60_noMu, &b_trig_EF_el_EF_e13_etcutTrk_xs60_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07", &trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07, &b_trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07);
   fChain->SetBranchAddress("trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20", &trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20, &b_trig_EF_el_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20);
   fChain->SetBranchAddress("trig_EF_el_EF_e14_tight_e4_etcut_Jpsi", &trig_EF_el_EF_e14_tight_e4_etcut_Jpsi, &b_trig_EF_el_EF_e14_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("trig_EF_el_EF_e15vh_loose1_e12Tvh_loose1_Zee", &trig_EF_el_EF_e15vh_loose1_e12Tvh_loose1_Zee, &b_trig_EF_el_EF_e15vh_loose1_e12Tvh_loose1_Zee);
   fChain->SetBranchAddress("trig_EF_el_EF_e15vh_medium", &trig_EF_el_EF_e15vh_medium, &b_trig_EF_el_EF_e15vh_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e15vh_medium_xe40_noMu", &trig_EF_el_EF_e15vh_medium_xe40_noMu, &b_trig_EF_el_EF_e15vh_medium_xe40_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e15vh_medium_xe50_noMu", &trig_EF_el_EF_e15vh_medium_xe50_noMu, &b_trig_EF_el_EF_e15vh_medium_xe50_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20", &trig_EF_el_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20, &b_trig_EF_el_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07", &trig_EF_el_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07, &b_trig_EF_el_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_etcut_e10_loose1", &trig_EF_el_EF_e22_etcut_e10_loose1, &b_trig_EF_el_EF_e22_etcut_e10_loose1);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_etcut_mu10", &trig_EF_el_EF_e22_etcut_mu10, &b_trig_EF_el_EF_e22_etcut_mu10);
   fChain->SetBranchAddress("trig_EF_el_EF_e22_loose1_e10_etcut", &trig_EF_el_EF_e22_loose1_e10_etcut, &b_trig_EF_el_EF_e22_loose1_e10_etcut);
   fChain->SetBranchAddress("trig_EF_el_EF_e22i6vh_medium2", &trig_EF_el_EF_e22i6vh_medium2, &b_trig_EF_el_EF_e22i6vh_medium2);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_loose", &trig_EF_el_EF_e22vh_loose, &b_trig_EF_el_EF_e22vh_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_loose1", &trig_EF_el_EF_e22vh_loose1, &b_trig_EF_el_EF_e22vh_loose1);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_loose1_e10_loose1", &trig_EF_el_EF_e22vh_loose1_e10_loose1, &b_trig_EF_el_EF_e22vh_loose1_e10_loose1);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_looseTrk", &trig_EF_el_EF_e22vh_looseTrk, &b_trig_EF_el_EF_e22vh_looseTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_loose_2j20_a4tc_EFFS", &trig_EF_el_EF_e22vh_loose_2j20_a4tc_EFFS, &b_trig_EF_el_EF_e22vh_loose_2j20_a4tc_EFFS);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_loose_3L1J10", &trig_EF_el_EF_e22vh_loose_3L1J10, &b_trig_EF_el_EF_e22vh_loose_3L1J10);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_loose_3j20_a4tc_EFFS", &trig_EF_el_EF_e22vh_loose_3j20_a4tc_EFFS, &b_trig_EF_el_EF_e22vh_loose_3j20_a4tc_EFFS);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_loose_4L1J10", &trig_EF_el_EF_e22vh_loose_4L1J10, &b_trig_EF_el_EF_e22vh_loose_4L1J10);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_loose_4j15_a4tc_EFFS", &trig_EF_el_EF_e22vh_loose_4j15_a4tc_EFFS, &b_trig_EF_el_EF_e22vh_loose_4j15_a4tc_EFFS);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium", &trig_EF_el_EF_e22vh_medium, &b_trig_EF_el_EF_e22vh_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium1", &trig_EF_el_EF_e22vh_medium1, &b_trig_EF_el_EF_e22vh_medium1);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium1_3j10_a4tc_EFFS", &trig_EF_el_EF_e22vh_medium1_3j10_a4tc_EFFS, &b_trig_EF_el_EF_e22vh_medium1_3j10_a4tc_EFFS);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium1_3j15_a4tc_EFFS", &trig_EF_el_EF_e22vh_medium1_3j15_a4tc_EFFS, &b_trig_EF_el_EF_e22vh_medium1_3j15_a4tc_EFFS);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium1_4j10_a4tc_EFFS", &trig_EF_el_EF_e22vh_medium1_4j10_a4tc_EFFS, &b_trig_EF_el_EF_e22vh_medium1_4j10_a4tc_EFFS);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium1_EFxe20_noMu", &trig_EF_el_EF_e22vh_medium1_EFxe20_noMu, &b_trig_EF_el_EF_e22vh_medium1_EFxe20_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium1_EFxe30_noMu", &trig_EF_el_EF_e22vh_medium1_EFxe30_noMu, &b_trig_EF_el_EF_e22vh_medium1_EFxe30_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium1_EFxe40_noMu", &trig_EF_el_EF_e22vh_medium1_EFxe40_noMu, &b_trig_EF_el_EF_e22vh_medium1_EFxe40_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium1_mu10_EFFS", &trig_EF_el_EF_e22vh_medium1_mu10_EFFS, &b_trig_EF_el_EF_e22vh_medium1_mu10_EFFS);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium2", &trig_EF_el_EF_e22vh_medium2, &b_trig_EF_el_EF_e22vh_medium2);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium_IDTrkNoCut", &trig_EF_el_EF_e22vh_medium_IDTrkNoCut, &b_trig_EF_el_EF_e22vh_medium_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium_SiTrk", &trig_EF_el_EF_e22vh_medium_SiTrk, &b_trig_EF_el_EF_e22vh_medium_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e22vh_medium_TRT", &trig_EF_el_EF_e22vh_medium_TRT, &b_trig_EF_el_EF_e22vh_medium_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e25_loose2_xe20_noMu_recoil40", &trig_EF_el_EF_e25_loose2_xe20_noMu_recoil40, &b_trig_EF_el_EF_e25_loose2_xe20_noMu_recoil40);
   fChain->SetBranchAddress("trig_EF_el_EF_e25i5vh_medium2", &trig_EF_el_EF_e25i5vh_medium2, &b_trig_EF_el_EF_e25i5vh_medium2);
   fChain->SetBranchAddress("trig_EF_el_EF_e25i6vh_medium2", &trig_EF_el_EF_e25i6vh_medium2, &b_trig_EF_el_EF_e25i6vh_medium2);
   fChain->SetBranchAddress("trig_EF_el_EF_e25vh_medium1", &trig_EF_el_EF_e25vh_medium1, &b_trig_EF_el_EF_e25vh_medium1);
   fChain->SetBranchAddress("trig_EF_el_EF_e30vh_medium2", &trig_EF_el_EF_e30vh_medium2, &b_trig_EF_el_EF_e30vh_medium2);
   fChain->SetBranchAddress("trig_EF_el_EF_e9_tight_e4_etcut_Jpsi", &trig_EF_el_EF_e9_tight_e4_etcut_Jpsi, &b_trig_EF_el_EF_e9_tight_e4_etcut_Jpsi);
   fChain->SetBranchAddress("trig_EF_ph_EF_g200_etcut", &trig_EF_ph_EF_g200_etcut, &b_trig_EF_ph_EF_g200_etcut);
}

Bool_t PhotonTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef PhotonTree_cxx
