/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRecognition/CRCameraReader.h>
#import <PassKit/CRCameraReaderDelegate.h>

@protocol PKPaymentCameraCaptureViewControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class NSArray, PKCameraCaptureInstructionView, PKPaymentCardManualEntryViewController, UIView, NSString;

@interface PKPaymentCameraCaptureViewController : CRCameraReader <CRCameraReaderDelegate> {

	NSArray* _outputObjects;
	PKCameraCaptureInstructionView* _cameraInstructionView;
	PKPaymentCardManualEntryViewController* _manualEntryController;
	id<PKPaymentCameraCaptureViewControllerDelegate> _cameraCaptureDelegate;
	long long _context;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	UIView* _cameraView;
	BOOL _hideSetupLaterButton;

}

@property (assign,nonatomic) BOOL hideSetupLaterButton;              //@synthesize hideSetupLaterButton=_hideSetupLaterButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(void)setHideSetupLaterButton:(BOOL)arg1 ;
-(BOOL)hideSetupLaterButton;
-(BOOL)isBuddyiPad;
-(id)initWithCameraCaptureDelegate:(id)arg1 ;
-(void)_manualEntryButtonPressed:(id)arg1 ;
-(void)_setupLater:(id)arg1 ;
-(void)_pushManualEntryViewControllerAndRemoveSelf;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
@end

