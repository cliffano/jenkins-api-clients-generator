/*
 * StringParameterValue.h
 *
 * 
 */

#ifndef _StringParameterValue_H_
#define _StringParameterValue_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class StringParameterValue : public Object {
public:
	/*! \brief Constructor.
	 */
	StringParameterValue();
	StringParameterValue(char* str);

	/*! \brief Destructor.
	 */
	virtual ~StringParameterValue();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getClass();

	/*! \brief Set 
	 */
	void setClass(std::string  _class);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getValue();

	/*! \brief Set 
	 */
	void setValue(std::string  value);

private:
	std::string _class;
	std::string name;
	std::string value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _StringParameterValue_H_ */
