#ifndef __PY_ITEM_KNN_H__
#define __PY_ITEM_KNN_H__

#include <Python.h> // This header was set at the first place to avoid warnings

#include "AlgItemBasedKnn.h"
#include "DataReader.h"
#include "MAE.h"
#include "RMSE.h"

class PyItemKnn
{
public:

   PyObject_HEAD
   DataReader* m_trainingReader;
   DataFrame* m_pTestData;
   AlgItemBasedKnn* m_recAlgorithm;
   MAE m_mae;
   RMSE m_rmse;
};

PyTypeObject* ItemKnnGetType();
PyObject* ItemKnn_train( PyItemKnn* self, PyObject* args, PyObject* kwdict );

#endif // __PY_ITEM_KNN_H__

