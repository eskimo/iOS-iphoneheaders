/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WBSHistoryItem, NSString;

@interface WBSHistoryVisit : NSObject {

	BOOL _loadSuccessful;
	BOOL _httpNonGet;
	BOOL _synthesized;
	long long _databaseID;
	long long _redirectSourceDatabaseID;
	long long _redirectDestinationDatabaseID;
	long long _generation;
	WBSHistoryItem* _item;
	long long _origin;
	double _visitTime;
	NSString* _title;
	WBSHistoryVisit* _redirectSource;
	WBSHistoryVisit* _redirectDestination;

}

@property (assign,nonatomic) long long databaseID;                                        //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) long long redirectSourceDatabaseID;                          //@synthesize redirectSourceDatabaseID=_redirectSourceDatabaseID - In the implementation block
@property (assign,nonatomic) long long redirectDestinationDatabaseID;                     //@synthesize redirectDestinationDatabaseID=_redirectDestinationDatabaseID - In the implementation block
@property (assign,nonatomic) long long generation;                                        //@synthesize generation=_generation - In the implementation block
@property (assign,nonatomic,__weak) WBSHistoryItem * item;                                //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) long long origin;                                            //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) double visitTime;                                          //@synthesize visitTime=_visitTime - In the implementation block
@property (nonatomic,copy) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (assign,getter=loadWasSuccessful,nonatomic) BOOL loadSuccessful;                //@synthesize loadSuccessful=_loadSuccessful - In the implementation block
@property (getter=wasHTTPNonGet,nonatomic,readonly) BOOL httpNonGet;                      //@synthesize httpNonGet=_httpNonGet - In the implementation block
@property (getter=isSynthesized,nonatomic,readonly) BOOL synthesized;                     //@synthesize synthesized=_synthesized - In the implementation block
@property (nonatomic,retain) WBSHistoryVisit * redirectSource;                            //@synthesize redirectSource=_redirectSource - In the implementation block
@property (nonatomic,retain) WBSHistoryVisit * redirectDestination;                       //@synthesize redirectDestination=_redirectDestination - In the implementation block
@property (nonatomic,readonly) WBSHistoryVisit * endOfRedirectChain; 
@property (nonatomic,readonly) unsigned long long redirectSourceChainLength; 
+(id)synthesizedVisitWithHistoryItem:(id)arg1 visitTime:(double)arg2 ;
-(long long)databaseID;
-(void)setGeneration:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(long long)origin;
-(void)setOrigin:(long long)arg1 ;
-(WBSHistoryItem *)item;
-(void)setItem:(WBSHistoryItem *)arg1 ;
-(long long)generation;
-(void)setDatabaseID:(long long)arg1 ;
-(double)visitTime;
-(BOOL)wasHTTPNonGet;
-(BOOL)loadWasSuccessful;
-(WBSHistoryVisit *)redirectSource;
-(WBSHistoryVisit *)redirectDestination;
-(void)setLoadSuccessful:(BOOL)arg1 ;
-(id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2 loadWasSuccesful:(BOOL)arg3 wasHTTPNonGet:(BOOL)arg4 origin:(long long)arg5 ;
-(unsigned long long)redirectSourceChainLength;
-(id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2 baseColumnIndex:(unsigned long long)arg3 ;
-(WBSHistoryVisit *)endOfRedirectChain;
-(void)setRedirectSource:(WBSHistoryVisit *)arg1 ;
-(void)setRedirectDestination:(WBSHistoryVisit *)arg1 ;
-(long long)redirectSourceDatabaseID;
-(long long)redirectDestinationDatabaseID;
-(id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2 ;
-(BOOL)isSynthesized;
-(id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2 ;
-(void)setRedirectDestinationDatabaseID:(long long)arg1 ;
-(void)setRedirectSourceDatabaseID:(long long)arg1 ;
@end

