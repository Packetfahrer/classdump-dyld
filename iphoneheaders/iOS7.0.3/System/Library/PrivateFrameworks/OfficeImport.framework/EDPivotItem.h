/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class EDCollection;

@interface EDPivotItem : NSObject {

	unsigned mRepeatedItemCounts;
	int mType;
	EDCollection* mItemIndexes;

}
+(id)pivotItem;
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(unsigned)repeatedItemCounts;
-(void)setRepeatedItemCounts:(unsigned)arg1 ;
-(id)itemIndexes;
@end
