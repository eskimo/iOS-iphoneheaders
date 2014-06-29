/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <Notes/NoteCollectionObject.h>

@class NSString, NoteAccountObject, NSSet;

@interface NoteStoreObject : NoteCollectionObject

@property (nonatomic,@dynamic,retain) NSString * externalIdentifier; 
@property (nonatomic,@dynamic,retain) NoteAccountObject * account; 
@property (nonatomic,@dynamic,retain) NSString * name; 
@property (nonatomic,@dynamic,retain) NSSet * changes; 
@property (nonatomic,@dynamic,retain) NSString * syncAnchor; 
-(id)notesForServerIds:(id)arg1 ;
-(id)notesForIntegerIds:(id)arg1 ;
-(unsigned)maximumServerIntId;
-(id)notesForServerIntIdsInRange:(NSRange)arg1 ascending:(bool)arg2 limit:(unsigned long long)arg3 ;
-(id)notesForServerIntIds:(id)arg1 ;
-(unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1 ;
-(id)predicateForNotes;
-(id)collectionInfo;
-(id)notesForServerIntIds:(id)arg1 ascending:(bool)arg2 limit:(unsigned long long)arg3 ;
-(id)notesForGUIDs:(id)arg1 ;
-(id)notesForServerIntIdsInRange:(NSRange)arg1 ;
-(id)basicAccountIdentifier;
@end
