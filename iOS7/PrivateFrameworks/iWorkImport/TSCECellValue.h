/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSCECellValue : NSObject
{
    int mValueType;
}

@property(readonly, nonatomic) int valueType; // @synthesize valueType=mValueType;
- (void)encodeCellValueToArchive:(struct CellValueArchive *)arg1;
- (id)initCellValueWithArchive:(const struct CellValueArchive *)arg1;
- (_Bool)isEqualToCellValue:(id)arg1;
- (CDStruct_95e644ef)formatStruct;
- (id)displayString;
- (void)dealloc;

@end
