/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MediaPlayer/MPSwipableViewDelegate.h>
#import <MediaPlayer/MPVolumeControllerDelegate.h>
#import <MediaPlayer/MPVideoOverlayDelegate.h>
#import <MediaPlayer/MPTransportControlsTarget.h>

@class UITapGestureRecognizer, MPWeakTimer, MPAVItem, UIActivityIndicatorView, MPInlineVideoController, MPVideoPlaybackOverlayView, UIPinchGestureRecognizer, MPSwipableView, MPVolumeController;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVolumeControllerDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget> {

	bool _disableTaps;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	MPWeakTimer* _idleTimer;
	bool _isAnimatingOverlay;
	MPAVItem* _item;
	UIActivityIndicatorView* _loadingIndicator;
	MPInlineVideoController* _masterController;
	MPVideoPlaybackOverlayView* _overlayView;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	bool _shouldForwardRotationEvents;
	MPSwipableView* _swipableView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	long long _activeOverlayUserEvents;
	bool _statusBarWasHidden;
	MPVolumeController* _volumeController;

}

@property (assign,nonatomic,__weak) MPInlineVideoController * masterController;              //@synthesize masterController=_masterController - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                //@synthesize item=_item - In the implementation block
-(void)setItem:(id)arg1 ;
-(void)swipableViewHadActivity:(id)arg1 ;
-(bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)overlay:(id)arg1 didBeginUserEvent:(long long)arg2 ;
-(void)overlay:(id)arg1 didCancelUserEvent:(long long)arg2 ;
-(void)overlay:(id)arg1 didEndUserEvent:(long long)arg2 ;
-(void)showAlternateTracks;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)setMasterController:(id)arg1 ;
-(void)_viewWasTapped:(id)arg1 ;
-(void)_viewWasPinched:(id)arg1 ;
-(void)_hideOverlayAnimated:(bool)arg1 ;
-(void)updateOverlayView;
-(void)cancelOverlayIdleTimer;
-(void)showLoadingIndicator;
-(void)hideLoadingIndicator;
-(void)_hideOverlayDidEnd;
-(void)resetOverlayIdleTimer;
-(void)_showOverlayDidEnd;
-(void)showOverlayAnimated:(bool)arg1 ;
-(void)prepareForTransitionFromFullscreen;
-(id)masterController;
-(void)_overlayIdleTimerFired;
-(void)dealloc;
-(id)init;
-(bool)prefersStatusBarHidden;
-(bool)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(id)item;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void).cxx_destruct;
@end
