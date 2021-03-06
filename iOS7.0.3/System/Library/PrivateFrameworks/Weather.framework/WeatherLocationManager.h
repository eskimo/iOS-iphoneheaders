/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <WebKit/CLLocationManagerDelegate.h>

@protocol CLLocationManagerDelegate;
@class NSTimer, CLLocationManager, NSDate;

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate> {

	NSTimer* _automaticLocationUpdateTimer;
	NSTimer* _accuracyFallbackTimer;
	int _authorizationStatus;
	BOOL _authorizationStatusSet;
	double _oldestAcceptedTime;
	double _lastLocationUpdateTime;
	double _nextPlannedUpdate;
	BOOL _activelyTrackingLocation;
	BOOL _locationTrackingIsReady;
	CLLocationManager* _locationManager;
	NSDate* _lastLocationTimeStamp;
	float _lastLocationAccuracy;
	<CLLocationManagerDelegate>* _delegate;
	SCD_Struct_We0 _lastLocationCoord;

}

@property (nonatomic,retain) CLLocationManager * locationManager;                 //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,copy) NSDate * lastLocationTimeStamp;                        //@synthesize lastLocationTimeStamp=_lastLocationTimeStamp - In the implementation block
@property (assign,nonatomic) float lastLocationAccuracy;                          //@synthesize lastLocationAccuracy=_lastLocationAccuracy - In the implementation block
@property (assign,nonatomic) SCD_Struct_We0 lastLocationCoord;                    //@synthesize lastLocationCoord=_lastLocationCoord - In the implementation block
@property (assign,nonatomic) <CLLocationManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL locationTrackingIsReady;                        //@synthesize locationTrackingIsReady=_locationTrackingIsReady - In the implementation block
@property (assign,nonatomic) BOOL activelyTrackingLocation;                       //@synthesize activelyTrackingLocation=_activelyTrackingLocation - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                             //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
+(id)sharedWeatherLocationManager;
+(void)clearSharedLocationManager;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)location;
-(int)authorizationStatus;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)locationManager;
-(void)setLocationManager:(id)arg1 ;
-(void)_cleanupAccuracyFallbackTimer;
-(void)_cleanupLocationTimer;
-(void)_clearLastLocUpdateTime;
-(void)setLocationTrackingActive:(BOOL)arg1 ;
-(void)_setAuthorizationStatus:(int)arg1 ;
-(void)setLocationTrackingReady:(BOOL)arg1 activelyTracking:(BOOL)arg2 ;
-(void)updateLocation:(id)arg1 ;
-(void)_setUpLocationTimerWithInterval:(float)arg1 ;
-(int)forceLoadingAuthorizationStatus;
-(float)lastLocationAccuracy;
-(void)setLastLocationTimeStamp:(id)arg1 ;
-(void)setLastLocationAccuracy:(float)arg1 ;
-(id)lastLocationTimeStamp;
-(void)_updateLocation:(id)arg1 ;
-(void)setLastLocationCoord:(SCD_Struct_We0)arg1 ;
-(void)forceLocationUpdate;
-(BOOL)loadAndPrepareLocationTrackingState;
-(void)clearLocalWeatherUpdateState;
-(BOOL)localWeatherAuthorized;
-(BOOL)isLocalStaleOrOutOfDate;
-(double)_nextPlannedUpdate;
-(double)_lastLocationUpdateTime;
-(SCD_Struct_We0)lastLocationCoord;
-(BOOL)locationTrackingIsReady;
-(void)setLocationTrackingIsReady:(BOOL)arg1 ;
-(BOOL)activelyTrackingLocation;
-(void)setActivelyTrackingLocation:(BOOL)arg1 ;
-(void)setAuthorizationStatus:(int)arg1 ;
@end

