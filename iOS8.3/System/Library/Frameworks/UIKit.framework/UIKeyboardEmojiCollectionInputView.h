/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:29 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIKeyboardEmojiInput.h>
#import <UIKit/UIKeyboardEmojiCategoryControl.h>

@protocol UIKBEmojiHitTestResponder;
@class UIKeyboardEmojiCollectionView, UICollectionViewFlowLayout, NSIndexPath, UIKeyboardEmojiGraphicsTraits, UIResponder, NSString;

@interface UIKeyboardEmojiCollectionInputView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiCategoryControl> {

	UIKeyboardEmojiCollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	int _category;
	int _currentSection;
	NSIndexPath* _tappedSkinToneEmoji;
	UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
	char _isDraggingInputView;
	/*^block*/id _completionBlock;
	UIResponder*<UIKBEmojiHitTestResponder> _hitTestResponder;

}

@property (assign) int category;                                                                    //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) UIResponder*<UIKBEmojiHitTestResponder> hitTestResponder;              //@synthesize hitTestResponder=_hitTestResponder - In the implementation block
@property (readonly) char isDraggingInputView;                                                      //@synthesize isDraggingInputView=_isDraggingInputView - In the implementation block
@property (assign,nonatomic) NSIndexPath * tappedSkinToneEmoji;                                     //@synthesize tappedSkinToneEmoji=_tappedSkinToneEmoji - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setContentScaleFactor:(float)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setHitTestResponder:(UIResponder*<UIKBEmojiHitTestResponder>)arg1 ;
-(id)emojiBaseUnicodeString:(id)arg1 ;
-(void)setTappedSkinToneEmoji:(NSIndexPath *)arg1 ;
-(char)skinToneWasUsedForEmoji:(id)arg1 ;
-(int)didInputSubTree:(id)arg1 ;
-(char)_userHasSelectedSkinToneEmoji;
-(id)selectedChildSkinToneEmoji:(id)arg1 ;
-(NSIndexPath *)tappedSkinToneEmoji;
-(void)_setUserHasSelectedSkinToneEmoji:(char)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)shouldDismissModalDisplayView:(id)arg1 ;
-(UIResponder*<UIKBEmojiHitTestResponder>)hitTestResponder;
-(float)snappedXOffsetForOffset:(float)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)reloadForCategory:(int)arg1 ;
-(int)reloadSectionForOffsetPercentage:(float)arg1 ;
-(void)setCategory:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(id)subTreeHitTest:(CGPoint)arg1 ;
-(void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(int)category;
-(char)isDraggingInputView;
@end
