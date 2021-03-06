/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class ML3MusicLibrary, NSDictionary, NSString, NSURLSession, NSOperationQueue;

@interface JaliscoLoadChapterArtworkOperation : CloudLibraryOperation {

	ML3MusicLibrary* _musicLibrary;
	NSDictionary* _chapterArtworkToLoad;
	NSString* _powerAssertionIdentifier;
	NSURLSession* _artworkDownloadSession;
	NSOperationQueue* _artworkDownloadOperationQueue;

}
-(void)cancel;
-(id)initWithDictionary:(id)arg1 ;
-(void)main;
@end

