<!DOCTYPE html>
<html>
<head>
  <title>Excel 数据下拉菜单</title>
</head>
<body>
  <select name="options" id="options">
    <?php
      // 引入 PHPExcel 库
      require_once 'PHPExcel/Classes/PHPExcel.php';

      // 读取 Excel 文件
      $excelFile = 'data.xlsx';
      $objPHPExcel = PHPExcel_IOFactory::load($excelFile);

      // 获取第一个工作表
      $worksheet = $objPHPExcel->getActiveSheet();

      // 获取数据范围
      $highestRow = $worksheet->getHighestRow();
      $highestColumn = $worksheet->getHighestColumn();

      // 读取数据并生成下拉菜单选项
      for ($row = 1; $row <= $highestRow; $row++) {
        $cellValue = $worksheet->getCell('A' . $row)->getValue();
        echo '<option value="' . $cellValue . '">' . $cellValue . '</option>';
      }
    ?>
  </select>
</body>
</html>
