/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPFileDataStorage.h>

@class NSString, TSPBundle;

@interface TSPBundleDataStorage : TSPFileDataStorage {

	NSString* _path;
	unsigned char _packageIdentifier;
	char _isMissingData;
	TSPBundle* _bundle;
	char _gilligan_isRemote;

}
-(id)packageLocator;
-(id)decryptionKey;
-(unsigned char)packageIdentifier;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(char)isMissingData;
-(char)gilligan_isRemote;
-(char)copyToTemporaryURL:(id)arg1 encryptionKey:(id)arg2 ;
-(void)setGilligan_isRemote:(char)arg1 ;
-(void)setIsMissingData:(char)arg1 ;
-(void)didInitializeFromDocumentURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 bundle:(id)arg2 ;
-(id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2 ;
-(char)writeData:(id)arg1 toPackageWriter:(id)arg2 preferredFilename:(id)arg3 filename:(id*)arg4 didCopyDataToPackage:(char*)arg5 isMissingData:(char*)arg6 ;
-(char)isInPackage:(id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
@end

