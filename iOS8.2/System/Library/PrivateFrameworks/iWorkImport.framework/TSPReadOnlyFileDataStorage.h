/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPFileDataStorage.h>

@class NSURL;

@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage {

	NSURL* _URL;

}
-(char)writeData:(id)arg1 toPackageWriter:(id)arg2 preferredFilename:(id)arg3 filename:(id*)arg4 didCopyDataToPackage:(char*)arg5 isMissingData:(char*)arg6 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(char)readOnly;
@end

