/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSPFileManager : NSObject
+(BOOL)linkFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)linkOrCopyURL:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3 encryptionKey:(id)arg4 error:(id*)arg5 ;
+(BOOL)copyReadChannel:(id)arg1 decryptionKey:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionKey:(id)arg5 error:(id*)arg6 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 sourcePath:(id)arg3 targetPath:(id)arg4 ;
+(BOOL)linkFileAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)transcodeReadChannel:(id)arg1 decryptionKey:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionKey:(id)arg5 error:(id*)arg6 ;
+(BOOL)copyReadChannel:(id)arg1 size:(unsigned long long)arg2 toWriteChannel:(id)arg3 error:(id*)arg4 ;
+(id)ioQueue;
+(BOOL)linkOrCopyURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
@end

