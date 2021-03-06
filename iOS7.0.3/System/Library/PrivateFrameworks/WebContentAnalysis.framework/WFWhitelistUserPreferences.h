/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class WFWhitelistSiteBuffer, NSString;

@interface WFWhitelistUserPreferences : NSObject {

	WFWhitelistSiteBuffer* filterWhitelist;
	WFWhitelistSiteBuffer* filterBlacklist;
	WFWhitelistSiteBuffer* webWhitelist;
	BOOL filterEnabled;
	BOOL whitelistEnabled;
	BOOL alwaysAllowHTTPS;
	NSString* username;

}

@property (assign) BOOL filterEnabled; 
@property (assign) BOOL whitelistEnabled; 
@property (assign) BOOL alwaysAllowHTTPS; 
@property (retain) NSString * username; 
@property (readonly) WFWhitelistSiteBuffer * filterWhitelist; 
@property (readonly) WFWhitelistSiteBuffer * filterBlacklist; 
@property (readonly) WFWhitelistSiteBuffer * webWhitelist; 
+(id)metasitesPath;
+(id)_arrayByConvertingLinesInStringsAtPath:(id)arg1 ;
+(id)metasitesExceptionPath;
+(id)_metasiteDomainNamesArray;
+(id)_sharedMetasiteDomainNamesDictionary;
+(id)_sharedMetasiteExceptionsDomainNamesArray;
+(id)preferencesPathForUsername:(id)arg1 ;
+(id)whitelistWithPreferences:(id)arg1 ;
+(id)_modificationDateForFileAtPath:(id)arg1 ;
+(id)_cachedWhitelistForPath:(id)arg1 username:(id)arg2 ;
+(BOOL)_isURLMetasite:(id)arg1 ;
+(id)whitelistForUser:(id)arg1 ;
+(id)defaultWhitelistForUser:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setUsername:(id)arg1 ;
-(id)username;
-(id)initWithPreferences:(id)arg1 ;
-(BOOL)isURLAllowed:(id)arg1 reason:(id*)arg2 shouldFilter:(BOOL*)arg3 foundOnList:(BOOL*)arg4 ;
-(BOOL)isURL:(id)arg1 onList:(id)arg2 ;
-(BOOL)isURLAllowed:(id)arg1 ;
-(id)pronounceOnPageURLString:(id)arg1 shouldFilter:(BOOL*)arg2 ;
-(BOOL)filterEnabled;
-(void)setFilterEnabled:(BOOL)arg1 ;
-(BOOL)whitelistEnabled;
-(void)setWhitelistEnabled:(BOOL)arg1 ;
-(BOOL)alwaysAllowHTTPS;
-(void)setAlwaysAllowHTTPS:(BOOL)arg1 ;
-(id)filterWhitelist;
-(id)filterBlacklist;
-(id)webWhitelist;
@end

