/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnnotationTrackingCameraController.h>

@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {

	GlobeView* _globeView;
	Anchor* _anchor;
	VKPoint _currentAnimationStartCoordinate;
	SCD_Struct_VK255 _currentAnimationPresentationStartCoordinate;
	SCD_Struct_VK255 _currentAnimationEndCoordinate;

}

@property (assign,nonatomic) GlobeView* globeView;              //@synthesize globeView=_globeView - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_goToAnnotationAnimated:(char)arg1 duration:(double)arg2 isInitial:(char)arg3 ;
-(void)_rotateToHeadingAnimated:(char)arg1 duration:(double)arg2 ;
-(void)setGlobeView:(GlobeView*)arg1 ;
-(GlobeView*)globeView;
@end

