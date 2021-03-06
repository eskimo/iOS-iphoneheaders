/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <MapKit/VKPuckAnimatorTarget.h>

@class VKAnnotationMarker, CALayer, CLLocation, NSString;

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget> {

	VKAnnotationMarker* _marker;
	long long _zoomDirection;
	CALayer* _pulseLayer;
	CALayer* _accuracyLayer;
	BOOL _allowsPulse;
	BOOL _shouldPulse;
	BOOL _allowsHeadingIndicator;
	BOOL _shouldDisplayHeading;
	double _headingAccuracy;
	CALayer* _headingLayer;
	BOOL _allowsAccuracyRing;
	BOOL _stale;
	BOOL _effectsEnabled;
	double _presentationCourse;
	double _locationAccuracy;
	CLLocation* _lastLocation;

}

@property (getter=isStale,nonatomic,readonly) BOOL stale;                              //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) BOOL allowsPulse;                                         //@synthesize allowsPulse=_allowsPulse - In the implementation block
@property (assign,nonatomic) BOOL allowsAccuracyRing;                                  //@synthesize allowsAccuracyRing=_allowsAccuracyRing - In the implementation block
@property (assign,nonatomic) BOOL allowsHeadingIndicator;                              //@synthesize allowsHeadingIndicator=_allowsHeadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayHeading;                                //@synthesize shouldDisplayHeading=_shouldDisplayHeading - In the implementation block
@property (assign,nonatomic) double headingAccuracy;                                   //@synthesize headingAccuracy=_headingAccuracy - In the implementation block
@property (nonatomic,readonly) double locationAccuracy;                                //@synthesize locationAccuracy=_locationAccuracy - In the implementation block
@property (assign,nonatomic) float opacity; 
@property (assign,getter=isEffectsEnabled,nonatomic) BOOL effectsEnabled;              //@synthesize effectsEnabled=_effectsEnabled - In the implementation block
@property (assign,nonatomic) long long zoomDirection;                                  //@synthesize zoomDirection=_zoomDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double presentationCourse;                                //@synthesize presentationCourse=_presentationCourse - In the implementation block
+(double)accuracyDiameter:(double)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(unsigned long long)_zIndex;
+(unsigned long long)_selectedZIndex;
-(void)setShouldDisplayHeading:(BOOL)arg1 ;
-(void)setZoomDirection:(long long)arg1 ;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2 ;
-(void)updateStateFromLocation:(id)arg1 duration:(double)arg2 ;
-(id)_vkMarker;
-(void)locationManagerFailedToUpdateLocation;
-(void)setHeadingAccuracy:(double)arg1 ;
-(void)_updateFromMap;
-(void)_setPresentationCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)_setAnimatingToCoordinate:(BOOL)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(void)_setMapPitchRadians:(double)arg1 ;
-(BOOL)_tracking;
-(id)_layerToMatchAccuracyRing;
-(void)_resetLayerToMatchAccuracyRing;
-(id)_pulseLayer;
-(id)_pulseAnimation;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(BOOL)isEffectsEnabled;
-(void)_pausePulse;
-(void)_resumePulse;
-(void)_updatePulse;
-(UIImage*)_headingImageForAccuracy:(double)arg1 anchorPoint:(CGPoint*)arg2 ;
-(void)_updateHeadingLayer;
-(id)_baseLayer;
-(void)setLocationAccuracy:(double)arg1 duration:(double)arg2 ;
-(void)_updateLayers;
-(id)_pulseTintColor;
-(void)setAllowsPulse:(BOOL)arg1 ;
-(void)setAllowsAccuracyRing:(BOOL)arg1 ;
-(void)setAllowsHeadingIndicator:(BOOL)arg1 ;
-(id)_accuracyAnimation:(double)arg1 ;
-(long long)zoomDirection;
-(BOOL)allowsPulse;
-(BOOL)allowsHeadingIndicator;
-(BOOL)shouldDisplayHeading;
-(BOOL)allowsAccuracyRing;
-(double)locationAccuracy;
-(void)_setTracking:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(id)init;
-(void)layoutSubviews;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)headingAccuracy;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)setPresentationCoordinate:(SCD_Struct_MK1)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(double)presentationCourse;
-(void)setPresentationCourse:(double)arg1 ;
-(BOOL)isStale;
@end

