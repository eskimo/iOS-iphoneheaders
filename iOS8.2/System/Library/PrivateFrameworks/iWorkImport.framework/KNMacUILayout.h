/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>
#import <iWorkImport/NSMutableCopying.h>

@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying> {

	char mShowingSidebar;
	char mShowingNavigatorViewInSidebar;
	char mShowingPresenterNotes;
	char mShowingLightTable;
	char mShowingInspectorPane;
	char mShowingMasterSlides;
	int mInspectorPaneViewMode;

}

@property (getter=isShowingSidebar,nonatomic,readonly) char showingSidebar; 
@property (nonatomic,readonly) int sidebarViewMode; 
@property (getter=isShowingLightTable,nonatomic,readonly) char showingLightTable; 
@property (getter=isShowingPresenterNotes,nonatomic,readonly) char showingPresenterNotes; 
@property (getter=isShowingInspectorPane,nonatomic,readonly) char showingInspectorPane; 
@property (nonatomic,readonly) int inspectorPaneViewMode; 
@property (getter=isShowingMasterSlides,nonatomic,readonly) char showingMasterSlides; 
@property (getter=p_isShowingNavigatorViewInSidebar,nonatomic,readonly) char p_showingNavigatorViewInSidebar; 
+(id)uiLayoutFromArchive:(const DesktopUILayoutArchive*)arg1 unarchiver:(id)arg2 context:(id)arg3 ;
-(void)saveToArchive:(DesktopUILayoutArchive*)arg1 archiver:(id)arg2 ;
-(char)isShowingSidebar;
-(int)sidebarViewMode;
-(char)isShowingPresenterNotes;
-(char)isShowingLightTable;
-(char)isShowingInspectorPane;
-(int)inspectorPaneViewMode;
-(id)archivedUILayoutInContext:(id)arg1 ;
-(char)p_isShowingNavigatorViewInSidebar;
-(char)isShowingMasterSlides;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
