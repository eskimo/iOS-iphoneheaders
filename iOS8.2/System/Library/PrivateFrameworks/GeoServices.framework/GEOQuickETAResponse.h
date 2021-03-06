/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOLocation, NSMutableArray;

@interface GEOQuickETAResponse : NSObject {

	GEOLocation* _sourceLocation;
	GEOLocation* _destinationLocation;
	unsigned _responseETASeconds;
	unsigned _baselineETASeconds;
	double _distance;
	NSMutableArray* _sortedETAs;

}

@property (nonatomic,readonly) GEOLocation * sourceLocation;                   //@synthesize sourceLocation=_sourceLocation - In the implementation block
@property (nonatomic,readonly) GEOLocation * destinationLocation;              //@synthesize destinationLocation=_destinationLocation - In the implementation block
@property (nonatomic,readonly) unsigned responseETASeconds;                    //@synthesize responseETASeconds=_responseETASeconds - In the implementation block
@property (nonatomic,readonly) unsigned baselineETASeconds;                    //@synthesize baselineETASeconds=_baselineETASeconds - In the implementation block
@property (nonatomic,readonly) double distance;                                //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sortedETAs;                    //@synthesize sortedETAs=_sortedETAs - In the implementation block
-(void)dealloc;
-(NSMutableArray *)sortedETAs;
-(id)initWithETAResult:(id)arg1 fromRequest:(id)arg2 ;
-(id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2 ;
-(GEOLocation *)sourceLocation;
-(GEOLocation *)destinationLocation;
-(unsigned)responseETASeconds;
-(unsigned)baselineETASeconds;
-(double)distance;
@end

