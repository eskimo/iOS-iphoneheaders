/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableArray;

@interface ADiAdJSCache : NSObject {

	BOOL _cacheLoaded;
	NSMutableDictionary* _cache;
	NSMutableDictionary* _downloadHandlers;
	NSObject<OS_dispatch_queue>* _queue;
	NSMutableArray* _pendingDownloadRecords;

}

@property (nonatomic,retain) NSMutableDictionary * cache;                          //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadHandlers;               //@synthesize downloadHandlers=_downloadHandlers - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * queue;                  //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL cacheLoaded;                                     //@synthesize cacheLoaded=_cacheLoaded - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingDownloadRecords;              //@synthesize pendingDownloadRecords=_pendingDownloadRecords - In the implementation block
+(id)sharedCache;
-(void)setCacheLoaded:(BOOL)arg1 ;
-(id)URLForiAdJSVersion:(id)arg1 ;
-(void)_downloadiAdJSVersion:(id)arg1 fromURL:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_extractDistributionForVersion:(id)arg1 fromData:(id)arg2 ;
-(void)_persistCache;
-(void)downloadiAdJSVersion:(id)arg1 fromURL:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(id)downloadHandlers;
-(void)setDownloadHandlers:(id)arg1 ;
-(BOOL)cacheLoaded;
-(id)pendingDownloadRecords;
-(void)setPendingDownloadRecords:(id)arg1 ;
-(id)init;
-(id)cache;
-(void)setCache:(id)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
@end

