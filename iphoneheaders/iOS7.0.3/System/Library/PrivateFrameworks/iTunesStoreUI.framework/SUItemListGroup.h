/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, SUItem, NSString;

@interface SUItemListGroup : NSObject {

	NSMutableArray* _items;
	SUItem* _separatorItem;

}

@property (nonatomic,readonly) NSString * indexBarTitle; 
@property (nonatomic,retain) NSMutableArray * items;                  //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) SUItem * separatorItem;                  //@synthesize separatorItem=_separatorItem - In the implementation block
-(void)dealloc;
-(id)description;
-(id)items;
-(void)setItems:(id)arg1 ;
-(id)indexBarTitle;
-(id)separatorItem;
-(void)setSeparatorItem:(id)arg1 ;
@end
