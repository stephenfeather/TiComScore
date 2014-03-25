//
//  CSDefines.h
//  comScore

#ifndef comScore_CSDefines_h
#define comScore_CSDefines_h

#define kSDKVersion @"2.1403.14"

#define kHashMask @"JetportGotAMaskOfThe%@S.D_K-"

#define kGCDMinVersion @"4.0"

#define kCSComScoreTaskQueue "com.comScore.taskQueue"
#define kCSComScoreDispatchQueue "com.comScore.eventQ"
#define INITIAL_SETTINGS_FILENAME @"comScore"

#define kCensusURL @"http://b.scorecardresearch.com/p2?"

#define kSecureCensusURL @"https://sb.scorecardresearch.com/p2?"

#define kSessionInactivePeriod 20*60*1000
#define kUserSessionInactivePeriod 50*60*1000
#define kKeepAlivePeriod 1000 /* ms in a second */ * 60 /* Seconds in a minute */ * 60 /* Minutes in hour */ * 24 /* Hours in a day */
#define kKeepAlivePeriodAfterNetworkChange 1000 /* ms in a second */ * 3 /* Seconds */
#define kKeepAliveInaccuracy 1000 /* ms in a second */ * 1
#define kKeepAlivePeriodAfterForeground 1000 /* ms in a second */ * 3 /* Seconds */

#define kURLLengthLimit 4096

#define kSSIDDelimiter @"&"

#define kAdvertiserIDSuffix @"-cs22"
#define kGeneratedIDSuffix @"-cs72"
#define kMACAddressSuffix @"-cs31"
#define kVendorIDSuffix @"-cs62"
#define kNOTrackingID @"none"

/**
 *
 * CACHE --------------
 *
 **/
#define kCacheFileName @"cs_cache_"
#define kCacheMaxSize 2000
#define kCacheMaxBatchSize 100
#define kCacheMaxPosts 10
#define kCacheWaitMinutes 30
#define kCacheMinSecsOnline 30
#define kCacheMaxFlushesInARow 10
#define kCacheExpiryDays 31
#define kCacheFlushingInterval 0
#define kOfflineReceiverURL @"http://udm.scorecardresearch.com/offline"
#define kSecureOfflineReceiverURL @"https://udm.scorecardresearch.com/offline"
#define kResponseHeaderMask @"OK"


#define kEventsLimitPerSecond 20
#define kEventsLimitPerDay 6000
#define kCSDayCheckOffset @"q_dcf"
#define kCSDayCheckCounter @"q_dcc"
#define kCSMillisPerSeconds 1000
#define kCSMillisPerDay 1000L * 60L * 60L * 24L

/**
 *
 * LABELS --------------
 *
 **/
// the c1 labels indicates the type of measurement, 19 indicates is an application measurement
#define kC1Value @"19"

// ns_ap_pn is a mnemonic for the platform
#define kPlatformName @"ios"

// ns_nc = 1 indicates that the server should'nt proccess the cookie
#define kNs_ncValue @"1"

#define kPageNameLabelName @"name"
#define kDefaultStartName @"start"
#define kDefaultBackgroundName @"background"
#define kDefaultForegroundName @"foreground"


// Encryption
#define kPublicKeyTag @"com.comscore.rsa.publickey"
#define kPublicKey @"-----BEGIN PUBLIC KEY-----\nMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQD0+fCVxGq3Bk24jUKO1PzsiUs3\nvqww6zR4n2e3AweVLUAgsrDRbAWJ/EjZm1WBLBVNMiTLpSAkV6sjOIrUs03xdUEj\nQZJHwOGK+MfzFaZukoo0qAsEMPwQ5posv0JdkBdUGhKchPk6+NYmD6Hb44Lkp7/a\nQnVeWzvfAPQyTJR5wQIDAQAB\n-----END PUBLIC KEY-----"


#define kConnectivityMobileMarker @"|||cs_3g|||"
#define kDefaultAutoupdateIntervalInSeconds 60
#define kMinimalAutoupdateInterval kDefaultAutoupdateIntervalInSeconds * 1000

#define kLastApplicationAccumulationTimestampKey @"lastApplicationAccumulationTimestamp"
#define kLastSessionAccumulationTimestampKey @"lastSessionAccumulationTimestamp"
#define kLastApplicationSessionTimestampKey @"lastApplicationSessionTimestamp"
#define kLastUserSessionTimestampKey @"lastUserSessionTimestamp"
#define kLastActiveUserSessionTimestampKey @"lastActiveUserSessionTimestamp"

#define kForegroundTransitionCountKey @"foregroundTransitionCount"
#define kAccumulatedForegroundTimeKey @"accumulatedForegroundTime"
#define kAccumulatedBackgroundTimeKey @"accumulatedBackgroundTime"
#define kAccumulatedInactiveTimeKey @"accumulatedInactiveTime"
#define kAccumulatedApplicationSessionTimeKey @"accumulatedApplicationSessionTime"
#define kAccumulatedActiveUserSessionTimeKey @"accumulatedActiveUserTime"
#define kAccumulatedUserSessionTimeKey @"accumulatedUserSessionTime"
#define kActiveUserSessionCountKey @"activeUserSessionCount"
#define kLastUserInteractionTimestampKey @"lastUserInteractionTimestamp"
#define kUserInteractionCountKey @"userInteractionCount"
#define kUserSessionCountKey @"userSessionCount"
#define kApplicationSessionCountKey @"applicationSessionCount"
#define kGenesisKey @"genesisKey"
#define kPreviousGenesisKey @"previousGenesis"
#define kInstallIDKey @"installID"
#define kFirstInstallIDKey @"firstInstallID"
#define kCurrentVersionKey @"currentVersionKey"
#define kPreviousVersionKey @"previousVersionKey"
#define kRunsCountKey @"runsCount"
#define kColdStartCountKey @"coldStartCount"
#define kVidKey @"vid"
#define kCrossPublisherIdKey @"crossPublisherId"
#define kPixelURLKey @"PixelURL"
#define kAdvertisingIdKey @"AdvertisingId"
#define kPublisherSecretKey @"PublisherSecret"
#define kTotalForegroundTimeKey @"totalForegroundTime"
#define kTotalBackgroundTimeKey @"totalBackgroundTime"
#define kTotalInactiveTimeKey @"totalInactiveTime"

#define kWrongMacAddresses [NSSet setWithObjects:@"", @"02:00:00:00:00:00", @"00:00:00:00:00:00", @"FF:FF:FF:FF:FF:FF", @"ff:ff:ff:ff:ff:ff", nil]

#define kMeasurementLabelOrder [NSArray arrayWithObjects: /* PRIOR_LABELS */@"c1", @"c2", @"ns_site", @"ns_vsite", /* APP_TAG_CORE_LABELS */ @"ns_ap_an", @"ns_ap_pn",  @"c12", @"name", @"ns_ak", @"ns_ap_ec", @"ns_ap_ev", @"ns_ap_device", @"ns_ap_id", @"ns_ap_csf", @"ns_ap_bi",@"ns_ap_pfm", @"ns_ap_pfv", @"ns_ap_ver", @"ns_ap_sv",@"ns_type", @"ns_radio", @"ns_nc", @"ns_ap_ui", @"ns_ap_gs", /* STREAMSENSE_CORE_LABELS */ @"ns_st_sv", @"ns_st_pv", @"ns_st_it", @"ns_st_id", @"ns_st_ec", @"ns_st_sp", @"ns_st_sq", @"ns_st_cn",@"ns_st_ev", @"ns_st_po", @"ns_st_cl", @"ns_st_el", @"ns_st_pb", @"ns_st_hc", @"ns_st_mp", @"ns_st_mv", @"ns_st_pn",@"ns_st_tp", @"ns_st_pt", @"ns_st_pa", @"ns_st_ad", @"ns_st_li", @"ns_st_ci", /* APP_TAG_OTHER_LABELS */@"ns_ap_jb", @"ns_ap_res", @"ns_ap_c12m", @"ns_ap_install", @"ns_ap_updated", @"ns_ap_lastrun",@"ns_ap_cs", @"ns_ap_runs", @"ns_ap_usage", @"ns_ap_fg", @"ns_ap_ft", @"ns_ap_dft", @"ns_ap_bt", @"ns_ap_dbt",@"ns_ap_dit", @"ns_ap_as", @"ns_ap_das", @"ns_ap_it", @"ns_ap_uc", @"ns_ap_aus", @"ns_ap_daus", @"ns_ap_us",@"ns_ap_dus", @"ns_ap_ut", @"ns_ap_oc", @"ns_ap_uxc", @"ns_ap_uxs", @"ns_ap_lang", @"ns_ap_miss", @"ns_ts", /* STREAMSENSE_OTHER_LABELS */@"ns_st_ca", @"ns_st_cp", @"ns_st_er", @"ns_st_pe", @"ns_st_ui", @"ns_st_bc", @"ns_st_bt",@"ns_st_bp", @"ns_st_pc", @"ns_st_pp", @"ns_st_br", @"ns_st_ub", @"ns_st_vo", @"ns_st_ws", @"ns_st_pl", @"ns_st_pr",@"ns_st_ep", @"ns_st_ty", @"ns_st_cs", @"ns_st_ge", @"ns_st_st", @"ns_st_dt", @"ns_st_ct", @"ns_st_de", @"ns_st_pu", @"ns_st_cu", @"ns_st_fee", /* POSTERIOR_LABELS */ @"c7", @"c9", nil]

#endif
