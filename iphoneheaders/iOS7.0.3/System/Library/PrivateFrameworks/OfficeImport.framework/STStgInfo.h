/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface STStgInfo : NSObject {

	NSString* m_pstrName;
	int m_type;
	unsigned long m_userFlags;
	unsigned long m_size;
	long m_creationTime;
	long m_modificationTime;
	int m_accessMode;
	SCD_Struct_ST52 m_clsid;

}
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(void)setSize:(unsigned long)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setCLSID:(SCD_Struct_ST52)arg1 ;
-(id)initWithStgInfo:(StgInfo*)arg1 ;
-(id)getName;
-(int)getType;
-(unsigned long)getUserFlags;
-(void)setUserFlags:(unsigned long)arg1 ;
-(unsigned long)getSize;
-(long)getCreationTime;
-(void)setCreationTime:(long)arg1 ;
-(long)getModificationTime;
-(void)setModificationTime:(long)arg1 ;
-(int)getAccessMode;
-(void)setAccessMode:(int)arg1 ;
-(SCD_Struct_ST52)getCLSID;
@end
