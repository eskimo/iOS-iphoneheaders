/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebQuotaManager;
#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebSecurityOriginPrivate;

@interface WebSecurityOrigin : NSObject {

	WebSecurityOriginPrivate* _private;
	id<WebQuotaManager> _applicationCacheQuotaManager;
	id<WebQuotaManager> _databaseQuotaManager;

}
+(id)webSecurityOriginFromDatabaseIdentifier:(id)arg1 ;
-(id)webui_userVisibleName;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)host;
-(id)stringValue;
-(id)databaseQuotaManager;
-(void)setQuota:(unsigned long long)arg1 ;
-(id)applicationCacheQuotaManager;
-(id)protocol;
-(unsigned short)port;
-(id)_initWithWebCoreSecurityOrigin:(SecurityOrigin*)arg1 ;
-(void)finalize;
-(id)toString;
-(SecurityOrigin*)_core;
-(id)databaseIdentifier;
-(unsigned long long)quota;
-(unsigned long long)usage;
@end
