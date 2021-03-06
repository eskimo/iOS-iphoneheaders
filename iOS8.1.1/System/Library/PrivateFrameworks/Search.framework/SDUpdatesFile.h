/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSFileHandle;

@interface SDUpdatesFile : NSObject {

	NSString* _displayIdentifier;
	NSString* _category;
	NSFileHandle* _fileHandle;
	BOOL _justFakeIt;
	unsigned long long _readLength;

}
-(id)initWithAppID:(id)arg1 andCategory:(id)arg2 ;
-(void)openFileForAppending;
-(void)addUpdates:(id)arg1 ;
-(void)blowAwayUpdatesFile;
-(void)closeUpdatesFile;
-(void)openUpdatesFileForReading;
-(void)_createUpdatesFile;
-(void)dealloc;
-(void)reset;
-(id)updates;
@end

