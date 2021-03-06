/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GKAppStoreManager : NSObject
+(id)sharedManager;
-(void)presentStoreSheetForGame:(id)arg1 fromViewController:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)launchAppStoreWithGameCenterGames;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)loadTellAFriendMessageForGameWithAdamID:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(bool)accountIsLoggedIntoAStore;
-(void)beginObservingKeyBagStatusFor:(id)arg1 withCallback:(/*function pointer*/ void*)arg2 ;
-(void)stopObservingKeyBagStatusFor:(id)arg1 ;
-(void)beginObservingStoreFrontChangesFor:(id)arg1 withSelector:(SEL)arg2 ;
-(void)stopObservingStoreFrontChangesFor:(id)arg1 ;
-(bool)uninstallApplicationWithBundleIdentifier:(id)arg1 ;
-(id)unrestrictedInstalledBundleIDs;
-(void)lookupStoreItemsForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(bool)allowProductionForApplication:(id)arg1 ;
-(bool)allowProductionForXPCConnection:(id)arg1 ;
@end

