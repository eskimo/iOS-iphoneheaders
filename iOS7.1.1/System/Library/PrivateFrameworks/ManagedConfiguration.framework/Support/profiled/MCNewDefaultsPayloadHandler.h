/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:14:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@class NSMutableSet;

@interface MCNewDefaultsPayloadHandler : MCNewPayloadHandler {

	NSMutableSet* _changedDomains;
	BOOL _lockMDMProfile;

}

@property (assign,nonatomic) BOOL lockMDMProfile;              //@synthesize lockMDMProfile=_lockMDMProfile - In the implementation block
+(id)defaultsForManagedDomain:(id)arg1 ;
+(void)removeDefaults:(id)arg1 forDomain:(id)arg2 ;
+(id)_managedSettingsFolder;
+(void)removeDefaults:(id)arg1 forManagedDomain:(id)arg2 ;
+(BOOL)setDefaults:(id)arg1 forManagedDomain:(id)arg2 ;
+(BOOL)addDefaults:(id)arg1 toManagedDomain:(id)arg2 ;
-(id)initWithPayload:(id)arg1 profileHandler:(id)arg2 ;
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)unsetAside;
-(void)setAside;
-(void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)_remove;
-(void)migrateDefaults;
-(id)MDMProfile;
-(BOOL)modifyCloudConfigurationDetailsResupervise:(BOOL)arg1 compressedSerialNumbers:(id)arg2 allowPairing:(id)arg3 configurationSource:(id)arg4 hostCertificates:(id)arg5 isMDMLocked:(id)arg6 organizationName:(id)arg7 ;
-(BOOL)_install:(BOOL)arg1 ;
-(BOOL)lockMDMProfile;
-(void)_sendCFPreferenceNotification;
-(void)setLockMDMProfile:(BOOL)arg1 ;
-(void)remove;
-(void).cxx_destruct;
@end

