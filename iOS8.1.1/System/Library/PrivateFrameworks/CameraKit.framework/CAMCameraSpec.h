/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CameraKit/CameraKit-Structs.h>
@interface CAMCameraSpec : NSObject

@property (nonatomic,readonly) long long bottomBarOrientation; 
@property (nonatomic,readonly) long long modeDialOrientation; 
@property (nonatomic,readonly) BOOL shouldCreateBottomBar; 
@property (nonatomic,readonly) BOOL shouldCreateTopBar; 
@property (nonatomic,readonly) BOOL shouldCreateFlashButton; 
@property (nonatomic,readonly) BOOL shouldCreateElapsedTimeView; 
@property (nonatomic,readonly) BOOL shouldCreateFlipButton; 
@property (nonatomic,readonly) BOOL shouldCreateStillDuringVideo; 
@property (nonatomic,readonly) BOOL shouldCreateImageWell; 
@property (nonatomic,readonly) BOOL shouldCreateShutterButton; 
@property (nonatomic,readonly) BOOL shouldCreateFiltersButton; 
@property (nonatomic,readonly) BOOL shouldCreateModeDial; 
@property (nonatomic,readonly) BOOL shouldCreateHDRButton; 
@property (nonatomic,readonly) BOOL shouldCreatePanoramaView; 
@property (nonatomic,readonly) BOOL shouldCreateZoomSlider; 
@property (nonatomic,readonly) BOOL shouldCreateAvalancheIndicator; 
@property (nonatomic,readonly) BOOL shouldCreateSlalomIndicator; 
@property (nonatomic,readonly) BOOL shouldCreateTimerButton; 
+(id)specForCurrentPlatform;
+(id)specForPhone;
+(id)specForPad;
-(int)rotationStyle;
-(long long)bottomBarOrientation;
-(long long)modeDialOrientation;
-(BOOL)shouldCreateBottomBar;
-(BOOL)shouldCreateTopBar;
-(BOOL)shouldCreateFlashButton;
-(BOOL)shouldCreateElapsedTimeView;
-(BOOL)shouldCreateFlipButton;
-(BOOL)shouldCreateStillDuringVideo;
-(BOOL)shouldCreateImageWell;
-(BOOL)shouldCreateShutterButton;
-(BOOL)shouldCreateFiltersButton;
-(BOOL)shouldCreateModeDial;
-(BOOL)shouldCreateHDRButton;
-(BOOL)shouldCreatePanoramaView;
-(BOOL)shouldCreateZoomSlider;
-(BOOL)isCameraApp;
-(BOOL)shouldCreateAvalancheIndicator;
-(BOOL)shouldCreateTimerButton;
-(BOOL)shouldCreateSlalomIndicator;
-(CGRect)initialFrameForOrientation:(long long)arg1 ;
-(BOOL)isPhone;
-(BOOL)isPad;
@end

