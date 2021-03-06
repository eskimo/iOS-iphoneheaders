/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <itunescloudd/CloudOperationCoding.h>

@class HSCloudLibrary, NSString;

@interface CloudLibraryOperation : NSOperation <CloudOperationCoding> {

	long long status;
	HSCloudLibrary* _library;
	NSString* _libraryIdentifier;

}

@property (nonatomic,retain) HSCloudLibrary * library;                //@synthesize library=_library - In the implementation block
@property (nonatomic,copy) NSString * libraryIdentifier;              //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
@property (assign,nonatomic) long long status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newPropertyListRepresentation;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)setLibraryIdentifier:(NSString *)arg1 ;
-(NSString *)libraryIdentifier;
-(HSCloudLibrary *)library;
-(void)setLibrary:(HSCloudLibrary *)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
@end

