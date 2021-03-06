/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SCATMenuDelegate <NSObject>
@required
-(CGRect*)menu:(id)arg1 rectToClearForFingersWithGestureSheet:(BOOL)arg2;
-(id)exitActionElementForFingersInMenu:(id)arg1;
-(void)menu:(id)arg1 showAlternateKeysForKey:(id)arg2;
-(void)menu:(id)arg1 showSimpleAlertWithText:(id)arg2;
-(id)menu:(id)arg1 tapContextItemForSheet:(id)arg2;
-(id)menu:(id)arg1 tapAndHoldContextItemForSheet:(id)arg2;
-(void)menu:(id)arg1 showTypingCandidates:(id)arg2;
-(id)gesturesSheetForMenu:(id)arg1;
-(void)didPressScreenChangingButtonInMenu:(id)arg1;

@end

