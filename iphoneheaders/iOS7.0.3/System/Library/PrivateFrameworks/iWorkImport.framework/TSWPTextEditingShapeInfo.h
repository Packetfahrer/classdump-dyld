/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSWPShapeInfo.h>

@protocol TSWPTextEditingDelegate;
@class ;

@interface TSWPTextEditingShapeInfo : TSWPShapeInfo {

	<TSWPTextEditingDelegate>* _delegate;

}

@property (assign,nonatomic) <TSWPTextEditingDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(Class)repClass;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(Class)layoutClass;
@end
