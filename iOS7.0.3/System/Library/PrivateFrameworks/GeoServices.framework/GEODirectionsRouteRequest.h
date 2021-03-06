/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODirectionsRequest.h>

@interface GEODirectionsRouteRequest : GEODirectionsRequest {

	unsigned short _providerID;

}

@property (assign,nonatomic) unsigned short providerID;              //@synthesize providerID=_providerID - In the implementation block
-(void)_commonSetup:(id)arg1 ;
-(id)initWithDirectionsRequest:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)responseClass;
-(unsigned short)providerID;
-(void)setProviderID:(unsigned short)arg1 ;
-(id)initWithQuickETARequest:(id)arg1 ;
@end

