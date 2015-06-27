/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class VCVideoRule;

@interface CameraConferenceSynchronizer : NSObject {

	BOOL isConference720p;
	BOOL isConferenceOniPad;
	BOOL receivedRequestToChangeCamera;
	BOOL receivedFirstRemoteFrame;
	int cameraHasChangedToCapture;
	int didSendFirstRemoteFrameNotification;
	int cameraHasChangedToPreview;
	int didSendDidStopNotification;
	VCVideoRule* captureRule;
	CGSize localPortraitAspectRatio;
	/*^block*/ id remoteFrameNotificationBlock;
	/*^block*/ id didStopNotificationBlock;

}

@property (assign,setter=setLocalPortraitAspectRatio:,nonatomic) CGSize localPortraitAspectRatio; 
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)scheduleFirstRemoteFrameNotification:(/*^block*/ id)arg1 ;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(void)scheduleCameraChangeToCaptureSettings:(id)arg1 ;
-(void)scheduleCameraChangeToPreviewSettings;
-(void)cameraSizeChangedTo:(CGSize)arg1 ;
-(void)cameraSizeChangedToPreview;
-(BOOL)shouldConferenceSendDidStopNotification;
-(void)notifyClientOfDidStop:(double)arg1 ;
-(BOOL)shouldConferenceSendFirstRemoteFrameNotification;
-(void)notifyClientOfRemoteFrame:(double)arg1 ;
-(BOOL)shouldConferenceChangeCameraToCaptureSettings;
-(void)changeCameraToCaptureSettings:(double)arg1 forced:(BOOL)arg2 ;
-(BOOL)shouldConferenceChangeCameraToPreviewSettings;
-(void)scheduleDidStopNotification:(/*^block*/ id)arg1 ;
-(CGSize)localPortraitAspectRatio;
@end
