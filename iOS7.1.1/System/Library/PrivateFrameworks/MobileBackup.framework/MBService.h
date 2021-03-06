/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:21:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MBURLConnection, NSMutableDictionary, MBServiceAccount;

@interface MBService : NSObject {

	MBURLConnection* _connection;
	NSMutableDictionary* _locksByBackupUDID;
	BOOL _cancelled;
	BOOL _disableWWAN;
	BOOL _suppressUnauthorizedAlert;
	MBServiceAccount* _account;
	id _delegate;
	double _protocolVersion;

}

@property (nonatomic,readonly) MBServiceAccount * account;                    //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) id delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double protocolVersion;                        //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,getter=wasCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL disableWWAN;                                //@synthesize disableWWAN=_disableWWAN - In the implementation block
@property (assign,nonatomic) BOOL suppressUnauthorizedAlert;                  //@synthesize suppressUnauthorizedAlert=_suppressUnauthorizedAlert - In the implementation block
+(id)backupUDIDForPath:(id)arg1 ;
-(id)accountWithError:(id*)arg1 ;
-(id)backupForUDID:(id)arg1 lastModified:(int*)arg2 error:(id*)arg3 ;
-(BOOL)deleteBackupForUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteSnapshotForID:(unsigned)arg1 backupUDID:(id)arg2 lastModified:(int*)arg3 error:(id*)arg4 ;
-(void)setLock:(id)arg1 forBackupUDID:(id)arg2 ;
-(BOOL)removeDomainName:(id)arg1 backupUDID:(id)arg2 lastModified:(int*)arg3 error:(id*)arg4 ;
-(BOOL)updateSnapshot:(id)arg1 backupUDID:(id)arg2 lastModified:(int*)arg3 error:(id*)arg4 ;
-(BOOL)mergeSnapshotForID:(unsigned)arg1 backupUDID:(id)arg2 lastModified:(int*)arg3 error:(id*)arg4 ;
-(void)setDisableWWAN:(BOOL)arg1 ;
-(id)lockForBackupUDID:(id)arg1 ;
-(BOOL)backupStatusInfo:(id)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)postBackup:(id)arg1 lastModified:(int*)arg2 error:(id*)arg3 ;
-(int)createSnapshot:(id)arg1 backupUDID:(id)arg2 lastModified:(int*)arg3 error:(id*)arg4 ;
-(id)addFiles:(id)arg1 backupUDID:(id)arg2 snapshotID:(unsigned)arg3 lastModified:(int*)arg4 error:(id*)arg5 ;
-(id)commitFilePutReceipts:(id)arg1 backupUDID:(id)arg2 snapshotID:(unsigned)arg3 lastModified:(int*)arg4 error:(id*)arg5 ;
-(BOOL)removeFileIDs:(id)arg1 backupUDID:(id)arg2 snapshotID:(unsigned)arg3 lastModified:(int*)arg4 error:(id*)arg5 ;
-(BOOL)commitSnapshotForID:(unsigned)arg1 backupUDID:(id)arg2 lastModified:(int*)arg3 error:(id*)arg4 ;
-(id)listFilesForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 offset:(unsigned)arg3 limit:(unsigned)arg4 error:(id*)arg5 ;
-(BOOL)restoreCompleteWithInfo:(id)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(id)getFileIDs:(id)arg1 backupUDID:(id)arg2 snapshotID:(unsigned)arg3 lastModified:(int*)arg4 error:(id*)arg5 ;
-(void)removeLockForBackupUDID:(id)arg1 ;
-(id)_sendRequestWithMethod:(id)arg1 path:(id)arg2 requestBody:(id)arg3 lastModified:(int*)arg4 error:(id*)arg5 ;
-(id)_sendRequestWithMethod:(id)arg1 path:(id)arg2 message:(id)arg3 responseClass:(Class)arg4 lastModified:(int*)arg5 error:(id*)arg6 ;
-(id)_sendRequestWithMethod:(id)arg1 path:(id)arg2 messages:(id)arg3 responseClass:(Class)arg4 lastModified:(int*)arg5 error:(id*)arg6 ;
-(id)listFilesForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 error:(id*)arg3 ;
-(id)keysetForBackupUDID:(id)arg1 lastModified:(int*)arg2 error:(id*)arg3 ;
-(BOOL)createKeySet:(id)arg1 forBackupUDID:(id)arg2 lastModified:(int*)arg3 error:(id*)arg4 ;
-(BOOL)updateKeySet:(id)arg1 forBackupUDID:(id)arg2 lastModified:(int*)arg3 error:(id*)arg4 ;
-(BOOL)sleepWithError:(id*)arg1 ;
-(BOOL)disableWWAN;
-(BOOL)suppressUnauthorizedAlert;
-(void)setSuppressUnauthorizedAlert:(BOOL)arg1 ;
-(double)protocolVersion;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setCancelled:(BOOL)arg1 ;
-(void)cancel;
-(BOOL)wasCancelled;
-(id)account;
-(id)initWithAccount:(id)arg1 ;
-(BOOL)deleteAccountWithError:(id*)arg1 ;
@end

