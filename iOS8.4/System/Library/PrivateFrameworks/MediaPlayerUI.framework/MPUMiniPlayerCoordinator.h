/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPPlaybackControlsDelegate.h>
#import <MediaPlayerUI/MPTransportControlsTarget.h>
#import <MediaPlayerUI/MPUMiniPlayerActionsViewControllerDelegate.h>

@class MPQueueFeeder, _UINavigationControllerPalette, MPUMiniPlayerPlaybackControlsView, UINavigationController, NSTimer, UIViewController, MPAVController, NSString;

@interface MPUMiniPlayerCoordinator : NSObject <MPPlaybackControlsDelegate, MPTransportControlsTarget, MPUMiniPlayerActionsViewControllerDelegate> {

	MPQueueFeeder* _feeder;
	_UINavigationControllerPalette* _miniPlayerPalette;
	MPUMiniPlayerPlaybackControlsView* _playbackControlsView;
	UINavigationController* _navigationController;
	NSTimer* _skipInformationRevealTimer;
	UIViewController* _viewController;
	MPAVController* _player;

}

@property (nonatomic,readonly) MPAVController * player;                                                //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) UINavigationController * _navigationController; 
@property (nonatomic,readonly) MPUMiniPlayerPlaybackControlsView * _playbackControlsView; 
@property (nonatomic,readonly) UIViewController * _viewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlayer:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(BOOL)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(UIViewController *)_viewController;
-(void)_didSkipTrackNotification:(id)arg1 ;
-(void)_revealSkipInformationMomentarily;
-(void)_scheduleSkipInformationRevealTimer;
-(void)_invalidateSkipInformationRevealTimer;
-(void)_skipLimitDidChangeNotification:(id)arg1 ;
-(void)_setFeeder:(id)arg1 ;
-(void)_updateMiniPlayerAttachment;
-(void)_updateMiniPlayerPaletteForNavigationController:(id)arg1 ;
-(void)prospectivePlaybackInformationDidChangeForViewController:(id)arg1 ;
-(void)willShowViewController:(id)arg1 inNavigationController:(id)arg2 ;
-(MPUMiniPlayerPlaybackControlsView *)_playbackControlsView;
-(void)navigationController:(id)arg1 traitCollectionDidChange:(id)arg2 ;
-(id)_currentProspectivePlaybackInformation;
-(void)miniPlayerActionsViewController:(id)arg1 didSelectAction:(long long)arg2 ;
-(Class)_miniPlayerPlaybackControlsViewClass;
-(MPAVController *)player;
-(UINavigationController *)_navigationController;
@end

