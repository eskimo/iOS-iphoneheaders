/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, RadioPlayEventCollection;

@interface RadioGetHistoryRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	char _fetchForAccount;
	char _includesAds;
	char _aggregateSessions;
	char _shouldProcessCategories;
	unsigned _maxNumberOfTracks;
	NSString* _stationHash;
	RadioPlayEventCollection* _playEventCollection;
	long long _stationID;

}

@property (assign,nonatomic) unsigned maxNumberOfTracks;                                //@synthesize maxNumberOfTracks=_maxNumberOfTracks - In the implementation block
@property (assign,nonatomic) char fetchForAccount;                                      //@synthesize fetchForAccount=_fetchForAccount - In the implementation block
@property (assign,nonatomic) char includesAds;                                          //@synthesize includesAds=_includesAds - In the implementation block
@property (assign,nonatomic) long long stationID;                                       //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                                      //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) char aggregateSessions;                                    //@synthesize aggregateSessions=_aggregateSessions - In the implementation block
@property (nonatomic,copy) RadioPlayEventCollection * playEventCollection;              //@synthesize playEventCollection=_playEventCollection - In the implementation block
@property (assign,nonatomic) char shouldProcessCategories;                              //@synthesize shouldProcessCategories=_shouldProcessCategories - In the implementation block
-(NSString *)stationHash;
-(long long)stationID;
-(void)cancel;
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(RadioPlayEventCollection *)playEventCollection;
-(char)shouldProcessCategories;
-(unsigned)maxNumberOfTracks;
-(void)setMaxNumberOfTracks:(unsigned)arg1 ;
-(id)_newHistoryCategoryWithDictionary:(id)arg1 ;
-(id)_newHistoryItemWithDictionary:(id)arg1 ;
-(char)fetchForAccount;
-(char)includesAds;
-(char)aggregateSessions;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setFetchForAccount:(char)arg1 ;
-(void)setAggregateSessions:(char)arg1 ;
-(void)setShouldProcessCategories:(char)arg1 ;
-(void)setIncludesAds:(char)arg1 ;
-(void)setPlayEventCollection:(RadioPlayEventCollection *)arg1 ;
-(void)startWithHistoryCompletionHandler:(/*^block*/id)arg1 ;
@end

