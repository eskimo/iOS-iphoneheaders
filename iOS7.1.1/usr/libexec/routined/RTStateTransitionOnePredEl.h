/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/routined
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUUID;

@interface RTStateTransitionOnePredEl : NSObject {

	int _numOfTrans;
	NSUUID* _routeUUID;
	double _yield;
	double _predResidualStart_s;
	double _resUncStart_s;
	double _predResidualStop_s;
	double _resUncStop_s;
	double _latestTransTimeStart_s;
	double _earliestTransTimeStart_s;
	double _density;

}

@property (assign,nonatomic) int numOfTrans;                               //@synthesize numOfTrans=_numOfTrans - In the implementation block
@property (assign,nonatomic) double yield;                                 //@synthesize yield=_yield - In the implementation block
@property (assign,nonatomic) double predResidualStart_s;                   //@synthesize predResidualStart_s=_predResidualStart_s - In the implementation block
@property (assign,nonatomic) double resUncStart_s;                         //@synthesize resUncStart_s=_resUncStart_s - In the implementation block
@property (assign,nonatomic) double predResidualStop_s;                    //@synthesize predResidualStop_s=_predResidualStop_s - In the implementation block
@property (assign,nonatomic) double resUncStop_s;                          //@synthesize resUncStop_s=_resUncStop_s - In the implementation block
@property (assign,nonatomic) double latestTransTimeStart_s;                //@synthesize latestTransTimeStart_s=_latestTransTimeStart_s - In the implementation block
@property (assign,nonatomic) double earliestTransTimeStart_s;              //@synthesize earliestTransTimeStart_s=_earliestTransTimeStart_s - In the implementation block
@property (assign,nonatomic) double density;                               //@synthesize density=_density - In the implementation block
@property (nonatomic,retain) NSUUID * routeUUID;                           //@synthesize routeUUID=_routeUUID - In the implementation block
-(double)latestTransTimeStart_s;
-(int)numOfTrans;
-(double)predResidualStart_s;
-(double)resUncStart_s;
-(double)predResidualStop_s;
-(double)resUncStop_s;
-(id)routeUUID;
-(void)setRouteUUID:(id)arg1 ;
-(void)setNumOfTrans:(int)arg1 ;
-(void)setYield:(double)arg1 ;
-(void)setPredResidualStart_s:(double)arg1 ;
-(void)setResUncStart_s:(double)arg1 ;
-(void)setPredResidualStop_s:(double)arg1 ;
-(void)setResUncStop_s:(double)arg1 ;
-(void)setEarliestTransTimeStart_s:(double)arg1 ;
-(void)setLatestTransTimeStart_s:(double)arg1 ;
-(double)yield;
-(double)earliestTransTimeStart_s;
-(id)init;
-(void)setDensity:(double)arg1 ;
-(double)density;
-(void).cxx_destruct;
@end
