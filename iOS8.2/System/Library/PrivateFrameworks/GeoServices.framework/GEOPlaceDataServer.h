/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/geod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <geod/GEOServer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface GEOPlaceDataServer : GEOServer {

	NSObject*<OS_dispatch_queue> _responseQ;

}
+(id)identifier;
-(void)requestMUIDsWithMessage:(id)arg1 ;
-(void)requestPhoneNumbersWithMessage:(id)arg1 ;
-(void)fetchAllCacheEntriesWithMessage:(id)arg1 ;
-(void)preservePlaceDataWithMessage:(id)arg1 ;
-(void)performPlaceDataRequestWithMessage:(id)arg1 ;
-(void)calulateFreeableSpaceWithMessage:(id)arg1 ;
-(void)shrinkToSizeWithMessage:(id)arg1 ;
-(void)applyRAPUpdateWithMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
