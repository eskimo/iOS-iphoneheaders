/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:40 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <backupd/NSCopying.h>

@class MBMobileInstallation, NSDictionary, NSString, NSArray;

@interface MBSettingsContext : NSObject <NSCopying> {

	char _shouldPreserveSettings;
	char _shouldRestoreSystemFiles;
	MBMobileInstallation* _mobileInstallation;
	NSDictionary* _domainsByName;
	NSString* _restoreDir;
	NSString* _incompleteRestoreDir;
	NSArray* _plugins;
	double _safeHarborExpiration;

}

@property (nonatomic,retain) MBMobileInstallation * mobileInstallation;              //@synthesize mobileInstallation=_mobileInstallation - In the implementation block
@property (nonatomic,retain) NSDictionary * domainsByName;                           //@synthesize domainsByName=_domainsByName - In the implementation block
@property (nonatomic,retain) NSString * restoreDir;                                  //@synthesize restoreDir=_restoreDir - In the implementation block
@property (nonatomic,retain) NSString * incompleteRestoreDir;                        //@synthesize incompleteRestoreDir=_incompleteRestoreDir - In the implementation block
@property (assign,nonatomic) double safeHarborExpiration;                            //@synthesize safeHarborExpiration=_safeHarborExpiration - In the implementation block
@property (assign,nonatomic) char shouldPreserveSettings;                            //@synthesize shouldPreserveSettings=_shouldPreserveSettings - In the implementation block
@property (assign,nonatomic) char shouldRestoreSystemFiles;                          //@synthesize shouldRestoreSystemFiles=_shouldRestoreSystemFiles - In the implementation block
@property (nonatomic,retain) NSArray * plugins;                                      //@synthesize plugins=_plugins - In the implementation block
+(id)defaultSettingsContext;
-(char)shouldPreserveSettings;
-(char)shouldRestoreSystemFiles;
-(void)setMobileInstallation:(MBMobileInstallation *)arg1 ;
-(void)setDomainsByName:(NSDictionary *)arg1 ;
-(void)setRestoreDir:(NSString *)arg1 ;
-(void)setIncompleteRestoreDir:(NSString *)arg1 ;
-(void)setSafeHarborExpiration:(double)arg1 ;
-(void)setShouldPreserveSettings:(char)arg1 ;
-(NSDictionary *)domainsByName;
-(NSString *)restoreDir;
-(void)setShouldRestoreSystemFiles:(char)arg1 ;
-(void)setPlugins:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)log;
-(MBMobileInstallation *)mobileInstallation;
-(double)safeHarborExpiration;
-(NSString *)incompleteRestoreDir;
-(NSArray *)plugins;
@end

