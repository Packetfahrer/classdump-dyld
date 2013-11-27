/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIButton;

@interface UIKeyboardCandidateFloatingArrowView : UICollectionReusableView {

	UIButton* _arrowButton;

}

@property (nonatomic,retain) UIButton * arrowButton;              //@synthesize arrowButton=_arrowButton - In the implementation block
+(id)reuseIdentifier;
+(id)collectionViewKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(id)arrowButton;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)updateArrow;
-(void)setArrowButton:(id)arg1 ;
@end
