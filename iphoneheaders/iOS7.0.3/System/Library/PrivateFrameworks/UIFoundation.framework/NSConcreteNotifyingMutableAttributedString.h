/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSConcreteMutableAttributedString.h>

@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {

	id _delegate;

}
+(Class)_mutableStringClass;
-(void)edited:(unsigned)arg1 range:(NSRange)arg2 changeInLength:(int)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)beginEditing;
-(void)endEditing;
@end
