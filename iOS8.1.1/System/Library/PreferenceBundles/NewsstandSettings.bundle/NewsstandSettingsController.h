/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/NewsstandSettings.bundle/NewsstandSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface NewsstandSettingsController : PSListController
-(id)_contentDownloadEnabled:(id)arg1 ;
-(void)_setContentDownloadsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_contentDownloadSpecifierForBundleID:(id)arg1 enabledForPush:(BOOL)arg2 ;
-(id)_rebuildSpecifiers;
-(void)dealloc;
-(id)init;
-(id)specifiers;
-(void)_reloadUI;
@end

