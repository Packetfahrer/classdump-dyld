/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIRemoveControl, UIControl, UIView;

@interface _UITableViewCellOldEditingData : NSObject {

	UIRemoveControl* _removeControl;
	UIControl* _grabber;
	UIView* _separator;

}

@property (nonatomic,retain) UIControl * reorderControl;              //@synthesize grabber=_grabber - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                  //@synthesize separator=_separator - In the implementation block
-(void)dealloc;
-(BOOL)dataRequired;
-(id)reorderControl;
-(void)setReorderControl:(id)arg1 ;
-(id)separatorView;
-(void)setSeparatorView:(id)arg1 ;
@end
