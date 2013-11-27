/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFObject.h>

@class NSString;

@interface MFFont : NSObject <MFObject> {

	int m_lfHeight;
	int m_lfWidth;
	int m_lfEscapement;
	int m_lfOrientation;
	int m_lfWeight;
	bool m_lfItalic;
	bool m_lfUnderline;
	bool m_lfStrikeOut;
	int m_lfCharSet;
	int m_lfOutPrecision;
	unsigned char m_lfClipPrecision;
	int m_lfQuality;
	int m_pitch;
	int m_family;
	NSString* m_lfFaceName;
	NSString* m_elfFullName;
	NSString* m_elfStyle;
	unsigned m_elfVersion;
	unsigned m_elfStyleSize;
	unsigned m_elfMatch;
	unsigned m_elfVendorId;
	unsigned m_elfCulture;

}
+(id)fontWithFeatures:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 ;
+(id)fontWithExtendedFeatures:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22 ;
+(id)fontWithStockFont:(int)arg1 ;
-(void)dealloc;
-(BOOL)underline;
-(int)selectInto:(id)arg1 ;
-(id)initWithAllFeatures:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22 ;
-(id)initWithFeatures:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 ;
-(id)initWithStockFont:(int)arg1 ;
-(double)escapement;
-(double)fontHeight;
-(int)getCharset;
-(BOOL)strikeout;
-(id)faceName;
-(CGRect)textExtent:(id)arg1 :(int)arg2 :(int*)arg3 :(int)arg4 ;
-(id)stringWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
@end
