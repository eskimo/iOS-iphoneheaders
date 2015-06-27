/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:59 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDocumentPickerCell.h>

@class _UIDocumentPickerContainerItem;

@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell {

	char _enabled;
	_UIDocumentPickerContainerItem* _item;

}

@property (nonatomic,retain) _UIDocumentPickerContainerItem * item;              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) char enabled;                                       //@synthesize enabled=_enabled - In the implementation block
-(void)dealloc;
-(_UIDocumentPickerContainerItem *)item;
-(void)setEnabled:(char)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)prepareForReuse;
-(void)setItem:(_UIDocumentPickerContainerItem *)arg1 ;
-(char)enabled;
-(void)_showPickableDiagnostic;
-(id)viewControllerForDisplay;
-(void)reloadItem:(char)arg1 ;
-(void)updateContents;
-(void)updateThumbnail;
@end
