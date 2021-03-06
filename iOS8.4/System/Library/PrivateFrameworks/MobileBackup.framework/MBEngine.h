/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MBSettingsContext, MBDebugContext, MBProperties, MBDomainManager, MBAppManager, NSString;

@interface MBEngine : NSObject {

	MBSettingsContext* _settingsContext;
	MBDebugContext* _debugContext;
	MBProperties* _properties;
	MBDomainManager* _domainManager;
	MBAppManager* _appManager;
	BOOL _encrypted;

}

@property (nonatomic,readonly) int engineType; 
@property (nonatomic,readonly) NSString * engineTypeString; 
@property (getter=isDriveEngine,nonatomic,readonly) BOOL driveEngine; 
@property (getter=isServiceEngine,nonatomic,readonly) BOOL serviceEngine; 
@property (nonatomic,readonly) int engineMode; 
@property (nonatomic,readonly) NSString * engineModeString; 
@property (getter=isBackupEngine,nonatomic,readonly) BOOL backupEngine; 
@property (getter=isRestoreEngine,nonatomic,readonly) BOOL restoreEngine; 
@property (nonatomic,readonly) int restoreType; 
@property (nonatomic,readonly) NSString * restoreTypeString; 
@property (getter=isForegroundRestore,nonatomic,readonly) BOOL foregroundRestore; 
@property (getter=isBackgroundRestore,nonatomic,readonly) BOOL backgroundRestore; 
@property (nonatomic,readonly) MBSettingsContext * settingsContext;                              //@synthesize settingsContext=_settingsContext - In the implementation block
@property (nonatomic,readonly) MBDebugContext * debugContext;                                    //@synthesize debugContext=_debugContext - In the implementation block
@property (nonatomic,readonly) MBProperties * properties;                                        //@synthesize properties=_properties - In the implementation block
@property (assign,getter=isEncrypted,nonatomic) BOOL encrypted;                                  //@synthesize encrypted=_encrypted - In the implementation block
@property (getter=isMigrate,nonatomic,readonly) BOOL migrate; 
@property (nonatomic,readonly) MBDomainManager * domainManager;                                  //@synthesize domainManager=_domainManager - In the implementation block
@property (nonatomic,readonly) MBAppManager * appManager;                                        //@synthesize appManager=_appManager - In the implementation block
@property (getter=shouldCommitIfPossible,nonatomic,readonly) BOOL commitIfPossible; 
+(id)stringForEngineType:(int)arg1 ;
+(id)stringForEngineMode:(int)arg1 ;
+(id)stringForRestoreType:(int)arg1 ;
-(void)dealloc;
-(MBProperties *)properties;
-(void)setEncrypted:(BOOL)arg1 ;
-(BOOL)isMigrate;
-(MBAppManager *)appManager;
-(int)engineType;
-(int)engineMode;
-(int)restoreType;
-(BOOL)isRestoreEngine;
-(BOOL)isServiceEngine;
-(BOOL)isDriveEngine;
-(MBSettingsContext *)settingsContext;
-(BOOL)isBackupEngine;
-(NSString *)engineTypeString;
-(NSString *)engineModeString;
-(NSString *)restoreTypeString;
-(id)aggregateDictionaryKey:(id)arg1 ;
-(id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 domainManager:(id)arg3 ;
-(BOOL)isForegroundRestore;
-(BOOL)isBackgroundRestore;
-(BOOL)shouldCommitIfPossible;
-(id)validateFile:(id)arg1 ;
-(id)validateRestoreDomain:(id)arg1 relativePath:(id)arg2 ;
-(void)pushAggregateDictionaryTotalFileCount:(long long)arg1 totalFileSize:(long long)arg2 duration:(double)arg3 ;
-(MBDebugContext *)debugContext;
-(MBDomainManager *)domainManager;
-(BOOL)isEncrypted;
@end

