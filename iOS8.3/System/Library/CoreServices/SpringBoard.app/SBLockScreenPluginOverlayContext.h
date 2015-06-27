/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:19 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayContext.h>

@interface SBLockScreenPluginOverlayContext : SBLockOverlayContext {

	char _disabledMesaMatching;

}

@property (assign,nonatomic) char disabledMesaMatching;              //@synthesize disabledMesaMatching=_disabledMesaMatching - In the implementation block
-(char)_pluginNeedsOverlay:(id)arg1 ;
-(char)disabledMesaMatching;
-(void)setDisabledMesaMatching:(char)arg1 ;
-(id)initWithPluginName:(id)arg1 pluginController:(id)arg2 lockScreenViewController:(id)arg3 ;
@end
