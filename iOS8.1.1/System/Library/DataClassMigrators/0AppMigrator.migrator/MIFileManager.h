/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/0AppMigrator.migrator/0AppMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MIFileManager : NSObject
+(id)defaultManager;
-(BOOL)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)itemDoesNotExistAtURL:(id)arg1 ;
-(id)urlsForItemsInDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id*)arg5 ;
-(BOOL)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)itemExistsAtURL:(id)arg1 ;
-(id)realPathForURL:(id)arg1 allowNonExistentPathComponents:(BOOL)arg2 ;
-(id)_realPathWhatExistsInPath:(id)arg1 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)standardizeOwnershipAtURL:(id)arg1 toUID:(unsigned)arg2 GID:(unsigned)arg3 error:(id*)arg4 ;
-(id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)dataProtectionClassOfItemAtURL:(id)arg1 class:(int*)arg2 error:(id*)arg3 ;
-(BOOL)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)captureStoreDataFromDirectory:(id)arg1 toDirectory:(id)arg2 doCopy:(BOOL)arg3 failureIsFatal:(BOOL)arg4 withError:(id*)arg5 ;
-(id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2 ;
@end

