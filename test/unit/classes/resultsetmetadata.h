/*
 Copyright 2008 - 2009 Sun Microsystems, Inc.

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; version 2 of the License.

 There are special exceptions to the terms and conditions of the GPL
 as it is applied to this software. View the full text of the
 exception in file EXCEPTIONS-CONNECTOR-C++ in the directory of this
 software distribution.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

 */

#include "../unit_fixture.h"

/**
 * Example of a collection of tests
 *
 */

namespace testsuite
{
namespace classes
{

class resultsetmetadata : public unit_fixture
{
private:
  typedef unit_fixture super;

protected:

  /*
   * Utility: run a query and fetch the resultset
   */
  void runStandardQuery();

public:

  EXAMPLE_TEST_FIXTURE(resultsetmetadata)
  {

    TEST_CASE(getCatalogName);
    TEST_CASE(getColumnCount);
    TEST_CASE(getColumnDisplaySize);
    TEST_CASE(getColumnNameAndLabel);
    TEST_CASE(getColumnType);
    TEST_CASE(getPrecision);
    TEST_CASE(getScale);
    TEST_CASE(getSchemaName);
    TEST_CASE(getTableName);
    TEST_CASE(isAutoIncrement);
    TEST_CASE(isCaseSensitive);
    TEST_CASE(isCurrency);
    TEST_CASE(isDefinitelyWritable);
    TEST_CASE(isNullable);
    TEST_CASE(isReadOnly);
    TEST_CASE(isSearchable);
    TEST_CASE(isSigned);
    TEST_CASE(isWritable);
  }

  /**
   * Test for ResultSetMetaData::getCatalogName()
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void getCatalogName();

  /**
   * Test for ResultSetMetaData::getColumnCount()
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void getColumnCount();

  /**
   * Test for ResultSetMetaData::getColumnDisplaySize
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void getColumnDisplaySize();

  /**
   * Test for ResultSetMetaData::getColumnName, ResultSetMetaData::getColumnLabel
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void getColumnNameAndLabel();

  /**
   * Test for ResultSetMetaData::getColumType
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void getColumnType();

  /**
   * Test for ResultSetMetaData::getPrecision
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void getPrecision();

  /**
   * Test for ResultSetMetaData::getScale
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void getScale();

  /**
   * Test for ResultSetMetaData::getSchemaName
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void getSchemaName();

  /**
   * Test for ResultSetMetaData::getTableName
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void getTableName();

  /**
   * Test for ResultSetMetaData::isAutoIncrement
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void isAutoIncrement();

  /**
   * Test for ResultSetMetaData::isCaseSensitive
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void isCaseSensitive();

  /**
   * Test for ResultSetMetaData::isCurrency
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void isCurrency();

  /**
   * Test for ResultSetMetaData::isDefinitelyWritable
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void isDefinitelyWritable();

  /**
   * Test for ResultSetMetaData::isNullable
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void isNullable();

  /**
   * Test for ResultSetMetaData::isReadOnly
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void isReadOnly();

  /**
   * Test for ResultSetMetaData::isSearchable
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void isSearchable();

  /**
   * Test for ResultSetMetaData::isSigned
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void isSigned();

  /**
   * Test for ResultSetMetaData::isWritable
   *
   * Focus on code coverage: invalid parameter, invalid resultset
   * JDBC compliance tests should take care that it does what its supposed to do
   */
  void isWritable();

};

REGISTER_FIXTURE(resultsetmetadata);
} /* namespace classes */
} /* namespace testsuite */