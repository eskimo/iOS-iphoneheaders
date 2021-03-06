/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/CPLStatusDelegate.h>

@protocol PLCPLStatusDelegate;
@class NSProgress, CPLStatus, NSDate, NSString;

@interface PLCPLStatus : NSObject <CPLStatusDelegate> {

	id _progressSubscriber;
	NSProgress* _progress;
	CPLStatus* _cplStatus;
	BOOL _isCPLDataClassEnabled;
	BOOL _isCPLDataClassEnabledValid;
	unsigned long long _syncProgressState;
	double _syncProgress;
	id<PLCPLStatusDelegate> _delegate;
	unsigned long long _numberOfImagesToUpload;
	unsigned long long _numberOfVideosToUpload;
	unsigned long long _numberOfImagesToDownload;
	unsigned long long _numberOfVideosToDownload;
	unsigned long long _numberOfPushedAsset;
	unsigned long long _numberOfPulledAssets;
	unsigned long long _totalAssetsOnServer;

}

@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) BOOL isExceedingQuota; 
@property (nonatomic,readonly) BOOL isSyncing; 
@property (nonatomic,readonly) BOOL isConnecting; 
@property (nonatomic,readonly) BOOL isPreparing; 
@property (nonatomic,readonly) BOOL hasExitedCPL; 
@property (nonatomic,readonly) double syncProgress;                                      //@synthesize syncProgress=_syncProgress - In the implementation block
@property (nonatomic,retain,readonly) NSDate * lastSuccessfulSyncDate; 
@property (nonatomic,retain,readonly) NSDate * exitDeleteTime; 
@property (assign,nonatomic) id<PLCPLStatusDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfImagesToUpload;                //@synthesize numberOfImagesToUpload=_numberOfImagesToUpload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfVideosToUpload;                //@synthesize numberOfVideosToUpload=_numberOfVideosToUpload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfImagesToDownload;              //@synthesize numberOfImagesToDownload=_numberOfImagesToDownload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfVideosToDownload;              //@synthesize numberOfVideosToDownload=_numberOfVideosToDownload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPushedAsset;                   //@synthesize numberOfPushedAsset=_numberOfPushedAsset - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPulledAssets;                  //@synthesize numberOfPulledAssets=_numberOfPulledAssets - In the implementation block
@property (nonatomic,readonly) unsigned long long totalAssetsOnServer;                   //@synthesize totalAssetsOnServer=_totalAssetsOnServer - In the implementation block
@property (nonatomic,readonly) BOOL diskIsLowOnSpace; 
@property (setter=_setProgress:,nonatomic,retain) NSProgress * progress;                 //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUploadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2 ;
+(void)setDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2 ;
+(void)setPushedAssetCount:(unsigned long long)arg1 ;
+(void)_prepareQueue;
+(id)readPListWithFilename:(id)arg1 ;
+(void)writeDict:(id)arg1 withFilename:(id)arg2 ;
+(void)_setPulledItemsCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PLCPLStatusDelegate>)arg1 ;
-(id)init;
-(id<PLCPLStatusDelegate>)delegate;
-(BOOL)isEnabled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setProgress:(id)arg1 ;
-(NSProgress *)progress;
-(void)_setup;
-(unsigned long long)diskSpaceLevel;
-(unsigned long long)numberOfImagesToUpload;
-(unsigned long long)numberOfVideosToUpload;
-(unsigned long long)numberOfVideosToDownload;
-(NSDate *)lastSuccessfulSyncDate;
-(BOOL)isExceedingQuota;
-(BOOL)_loadUploadCounts;
-(BOOL)_loadDownloadCounts;
-(void)_subscribeToProgress;
-(void)accountStoreDidChange:(id)arg1 ;
-(void)_networkReachabilityChanged:(id)arg1 ;
-(void)_calculateTotalAssetsOnServer;
-(void)_calculateNumberOfPulledAssets;
-(void)_loadPulledItemsCount;
-(NSDate *)exitDeleteTime;
-(void)_teardown;
-(void)_updateSyncProgress;
-(void)_setSyncProgress:(double)arg1 ;
-(void)_unsubscribeFromProgress;
-(void)statusDidChange:(id)arg1 ;
-(BOOL)diskIsLowOnSpace;
-(BOOL)isSyncing;
-(BOOL)isConnecting;
-(BOOL)isPreparing;
-(BOOL)hasExitedCPL;
-(double)syncProgress;
-(unsigned long long)numberOfImagesToDownload;
-(unsigned long long)numberOfPushedAsset;
-(unsigned long long)numberOfPulledAssets;
-(unsigned long long)totalAssetsOnServer;
@end

