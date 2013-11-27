/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/STSStgObject.h>

@interface STStorage : STSStgObject {

	StorageRef m_pCStorage;

}
-(void)dealloc;
-(id)init;
-(void)close;
-(id)initWithCStorage:(StorageRef)arg1 ;
-(id)openStream:(id)arg1 withMode:(int)arg2 ;
-(id)openStorage:(id)arg1 withMode:(int)arg2 ;
-(id)getInfo;
-(id)getChildrenInfo;
-(int)getChildType:(id)arg1 ;
-(void)setClass:(SCD_Struct_ST52)arg1 ;
@end
